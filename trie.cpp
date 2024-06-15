#include<iostream>>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch){
        data= ch;
        for(int i=0; i<26;i++){
            children[i]= NULL;
        }
        isTerminal= false;
    }
};

class Trie{
    public:
    TrieNode* root;


    void insertUtil( TrieNode* root, string word){
        // using recurrsion
        if(word.length()==0){
            root->isTerminal= true;
        }
        // assumption: Wrod will be in caps
        int index= word[0]-'A';

        TrieNode* child;

        if(root->children[index]!=NULL){
            child= root->children[index];
        }
        else{
            // absent
            child= new TrieNode(word[0]);
            root->children[index]= child;
        }

        // calling recursion
        insertUtil(child, word.substr(1)); //1 ko ewxclude krke
    }



void insertWord( string word ){
    insertUtil(root, word);
}
};
int main(){
    cout<<"hello world"<<endl;
    return 0;
}