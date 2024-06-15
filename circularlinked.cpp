#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    // constructor
    node(int d){
        this->data=d;
        this->next=NULL;
    }

    // destructor
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memeory is free for node with data "<<value<<endl;
    }

};
// head banane ki need nhi hai  cz tail se hi saare access kr skta hu

void insertatnode(node* &tail,int element, int d){
    // assuming that the element is present in the list
    // COPY MEIN CASES LIKHE HUE HAI SO WRTIE THEM
    if(tail==NULL){
        node* newnode=new node(d);
        tail=newnode;
        newnode->next=newnode;
    }
    else{
        // non empty list
        // also assuming that the elemtnn is present
        node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        // element found-> curr is representing element wala node
        node* temp=new node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}
void print(node* tail){
    node* temp=tail;
    // cout<<tail->data<<" ";

    // USING DO WHILE LOOP
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}
// to delete node
void deletenode(node* &tail,int value){
     if(tail==NULL){
        cout<<"list is empty, please check again"<<endl;
        return;
     }
     else{
        // non empty list
        // assuming that value is present in the linked list
        node* prev=tail;
        node* curr=prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
     }
}
int main(){
    node* tail=NULL;

    // case 1 when inserting the empty list
    insertatnode(tail,5,3);
    print(tail);

    insertatnode(tail,3,5);
    print(tail);

// 5 ke aage 6 daal do
    insertatnode(tail,5,6);
    print(tail);

    insertatnode(tail,5,9);
    print(tail);

    // eleting the code
    deletenode(tail,3);
    print(tail);
    return 0;
}