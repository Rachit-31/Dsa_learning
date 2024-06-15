#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
// constructor
    node(int data){
        this->data=data;
        this->next=NULL;
    }
    // insertat head
    void insertAhead(node* &head,int d){
        node* temp=new node(d);
        temp->next=head;
        head=temp;
    }

    void insertAtail(node* &tail,int d){
        node* temp=new node(d);
        tail->next=temp;
        tail=tail->next;
    }

    // to print linked list 
    void print(node* &head){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            // now temp ko aage badhado 
            // temp = temp ka next
            temp=temp->next;
        }
    }

    void insertAtposition(node* &head,int position, int d){

        if(position==1){
            insertAhead(head,d);
            return;
        }

        node* temp=head;
        int cnt=1;
        while(cnt<position-1){
            temp=temp->next;
            cnt++;
        }
        // creating node 
        node* nodeToinsert=new node(d);
        nodeToinsert->next=temp->next;
        temp->next=nodeToinsert;
    }

};

int main(){
    // created a new nodek
    node* node1 = new node(10);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;

    // head pointed to node1
    node* head=node1;
    node* tail=node1;
    node1->print(head);
    node1->insertAtail(tail,12);
    node1->print(head);
    cout<<" fifteen"<<endl;
    node1->insertAhead(tail,15);
    
    node1->print(head);

   node1-> insertAtposition(head,1,22);
    node1->print(head);
    return 0;
}