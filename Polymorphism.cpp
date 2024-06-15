#include<iostream>
using namespace std;
class A{
    public:
    int sayhello(char name){
        cout<<"hello Mr Rachit Jain";
        return 1;
    }
    void sayhello(string s){
        cout<<"hello Mr";
    }
};
int main(){
    A obj;
    obj.sayhello();
    return 0;
}