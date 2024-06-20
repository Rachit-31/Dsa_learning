#include<iostream>
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



    Trie(){
        root = new TrieNode('\n');
    }
    void insertUtil( TrieNode* root, string word){
        // using recurrsion
        if(word.length()==0){
            root->isTerminal= true;
            return ;
        }
        // assumption: word will be in caps
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


    
    bool searchUtil(TrieNode* root, string word){
        if(word.length()==0){
            return root->isTerminal;
        }
        int index= word[0]-'A';

        TrieNode* child;
        if(root->children[index] != NULL){
            child= root->children[index];
        }
        else{
            return false;
        }

        return searchUtil(child, word.substr(1));
    }
    bool search(string word){
        return searchUtil(root, word);
    }



    bool removeUtil(TrieNode* root, string word){
        // will code later
    }
    void remove(string word){
         removeUtil(root, word);
    }
};
int main(){
    
    Trie *t= new Trie();
    t->insertWord("ABCD");

    cout<<"Present or not "<< t->search("ABC")<<endl;

    return 0;
}