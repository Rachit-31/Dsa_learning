#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
// template <typename T>
// above can also be used to create a graph fast
class graph{
    public:
    unordered_map<int, list<int>>adj;
    // unordered_map<T, list<T>>adj;

    void addEdge(int u, int v, bool direction){
        // if direction is 0 means undirected graph
        // direction==1 then directed
        // create a edge from u to v

        // if undirected ==> 0---1 then 0->1 and 1->0
        adj[u].push_back(v);

        if(direction==0){
            adj[v].push_back(u);
        }
    }
    void printAdjlist(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
};
int main(){
    int n;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;
    int m;
    cout<<"Enter the number of edges"<<endl;
    cin>>m;

    graph g;
    // graph<int> g;
    
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }

    g.printAdjlist();


    return 0;
}