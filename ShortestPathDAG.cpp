#include<bits/stdc++.h>
using namespace std;
class graph {
    public:
    unordered_map<int, list<pair<int,int>>> adj;

    void addEdge(int u, int v, int weight){
        pair<int, int> p= make_pair(v, weight);
        adj[u].push_back(p);
    }

    void printAdj(){
        for(auto i : adj){
            cout<<i.first<< " -> ";
            for(auto j: i.second){
                cout << "(" << j.first << "," << j.second << "),";
            }cout<<endl;
        }
    }
};
int main(){
    graph g;
    g.addEdge(0,1,5);
    g.addEdge(0,2,3);
    g.addEdge(1,2,2);
    g.addEdge(0,1,5);
    g.addEdge(0,1,5);
    g.addEdge(0,1,5);
    g.addEdge(0,1,5);
    g.addEdge(0,1,5);
    g.addEdge(0,1,5);
    
    return 0;
}