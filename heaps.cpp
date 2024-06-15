#include<iostream>
#include<queue>
using namespace std;
class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0]=-1;
        size=0;
    }
    void insert(int val){
        size=size+1;
        int  index=size;
        arr[index]=val;

        while(index>1){
            int parent=index/2;

            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
    }
    void deletefromHeap(){
        if(size==0){
            cout<<"Nothign to delete"<<endl;
            return;
        }

        arr[1]=arr[size];
        size--;

        // take root node to its correct positon
        int i=1;
        while(i<size){
            int leftIndex=2*i;
            int rightIndex=2*i+1;

            if(leftIndex<size && arr[i]<arr[leftIndex]){
                swap(arr[i],arr[leftIndex]);
                i=leftIndex;
            }
            else if(rightIndex<size && arr[i]<arr[rightIndex]){
                swap(arr[i],arr[rightIndex]);
                i=rightIndex;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};


// THIS IS HEAPIFY ALGO **VERY IMPORTANT** below code is correct can be used for future refrence
void heapify(int arr[],int n,int i){
    int largest=i;
    int leftchild=2*i;
    int rightchild=2*i+1;

    if(leftchild<=n && arr[largest]<arr[leftchild]){
        largest=leftchild;
    }
    if(rightchild<=n && arr[largest]<arr[rightchild]){
        largest=rightchild;
    }


    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

// heap sort
void heapSort(int arr[],int n){
    int size=n;
    while(size>1){
        // step1 swap
        swap(arr[size],arr[1]);

        // step2
        size--;
        heapify(arr,size,1);
    }
}
int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(54);
    h.insert(52);
    h.print();

    h.deletefromHeap();
    h.print();

    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
    cout<<endl;
    cout<<"printing the array now "<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


    // calling heapsort
    heapSort(arr,n);
        cout<<"printing the array after heap sort "<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    // pririty queue
    priority_queue<int> pq;
    pq.push(4);

    return 0;
}