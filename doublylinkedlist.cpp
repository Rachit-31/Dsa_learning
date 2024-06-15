#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};

void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        // temp ko aage badhate jaao
        temp=temp->next;
    }
    
}
// return the length of the linkedlist
int getlength(node* head){
    node* temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
void insertathead(node* &tail ,node* &head , int d){
    if(head==NULL){
        node* temp=new node(d);
        head=temp;
        tail=temp;
    }
    else{
    node* temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
    
}
void insertattail(node* &tail,node* &head,int d){
    if(tail==NULL){
        node* temp=new node(d);
        tail=temp;
        head=temp;
    }
    else{
    node *temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }

}

void insertatpos(node* &tail ,node* &head,int position,int d){
    // insert at start
    if(position==1){
        insertathead(tail,head,d);
        return;
    }
    node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    // inserting last positon
    if(temp->next==NULL){
        insertattail(tail,head,d);
        return;
    }

    // creating node for d
    node* nodetoinsert=new node(d);
    nodetoinsert->next=temp->next;
    // temp ke next ke previous nodetoinsert mein point kara do
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;
}
int main(){

    // node* node1=new node(10);
    // node* head=node1;
    node* head=NULL;
    node* tail=NULL;

    // for tail 
    // node* tail=node1;
     print(head);
    cout<<endl;
    //cout<<getlength(head);

    insertathead(tail,head,11);
    print(head);

    cout<<endl;

    insertathead(tail,head,13);
    print(head);

    cout<<endl<<"inserting at tail  ";

    insertattail(tail,head,25);
    print(head);

    cout<<endl<<"inserting at positon"<<endl;
    insertatpos(tail,head,2,100);
    print(head);

cout<<endl;
    insertatpos(tail,head,5,102);
    print(head);
    cout<<"printed "<<endl;

    return 0;
}