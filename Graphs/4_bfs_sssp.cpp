#include<bits/stdc++.h>
using namespace std;


template <typename T>
class Graph{

    map<T,list<T>> l;

    public:

    void addEdge(T x , T y){
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void BFS_sssp(T src){

        map<T , int> dist;
        queue<T> q;
        q.push(src);
         
        for(auto node_pair : l){
            T node = node_pair.first;
            dist[node] = INT_MAX;
        }
        dist[src] =0;

        while(!q.empty()){

            T node = q.front();
            q.pop();

        

            for(auto nbr : l[node]){
                if(dist[nbr]==INT_MAX){
                    q.push(nbr);
                    dist[nbr] = dist[node] + 1;
                }
            }
        }

        for(auto node_pair :l){
            T node = node_pair.first;
            cout<<"Node "<<node <<" is "<<dist[node] <<"  away from  "<<src;
            cout<<endl;
        }
        cout<<endl;
    }

};

int main(){

    Graph<int> g;

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,0);
    g.addEdge(3,4);
    g.addEdge(4,5);

    g.BFS_sssp(0);
    cout<<endl;
}