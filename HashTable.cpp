#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    // creation
    unordered_map<string, int> m;

    // insertion
    // 1
    pair<string,int> p=make_pair("babbar",1);
    m.insert(p);
    // 2
    pair<string, int> pair2("love", 2);
    m.insert(pair2);
    // 3
    m["mera"]=1;

    // search
    cout<<m["mera"]<<endl;
    cout<<m.at("babbar")<<endl;
    
    // -------------------special case------------
    // (1)
    //cout<<m.at("hello")<<endl; //due to this case it will throw error
    //cout<<m["hello"]<<endl; //ERROR: terminate called after throwing an instance of 'std::out_of_range'    what():  _Map_base::at   

    // (2)
    cout<<m["hello"]<<endl; 
    cout<<m.at("hello")<<endl;
    // -------------------------------------------

    // size
    cout<<"Size of the map is "<<m.size()<<endl;

    // to check presence
    cout<<"Cheking if the key is pressent or not: "<<m.count("bro")<<endl;

    // erase
    m.erase("love");


    // accessing the map
    for(auto i:m){
        cout<<i.first<<" "<<i.second;
    }

    // using iterator
    unordered_map<string, int>::iterator it=m.begin();

    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

    return 0;
}