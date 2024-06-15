#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"size1---"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"size2---"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"size2---"<<v.capacity()<<endl;  
    return 0;
}