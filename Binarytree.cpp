#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
         int data;
         node* left;
         node* right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildtree(node* root){
    cout<<"enter the data:"<<endl;
    int data;
    cin>>data;
    root=new node(data);

    // if data==-1 then null mano
    if(data==-1){
        return NULL;
    }

    cout<<"enter data for inserting in left of "<<data<<endl;
    root->left=buildtree(root->left);
    cout<<"enter data for inserting in right of "<<data<<endl;
    root->right=buildtree(root->right);

    return root;
}

void levelordertraversal(node* root){
    queue<node*> q;
    q.push(root);

    // this is seperator
    q.push(NULL);

    while(!q.empty()){
        node* temp=q.front();
        
        q.pop();

        if(temp=NULL){
            // purana level complete traverse ho chuka hai
            cout<<endl;
            if(!q.empty()){
                // q still has some child nodes
                q.push(NULL); 
            }
            else{
                cout<<temp->data<<" ";
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
        }


    }
}

void inorder(node* root){
    // base case
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    node* root=NULL;
    root=buildtree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    // level order
    cout<<"level order traversal"<<endl;
    levelordertraversal(root);
    return 0;
}