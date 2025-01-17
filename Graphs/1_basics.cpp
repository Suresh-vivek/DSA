#include <bits/stdc++.h>
using namespace std;

class Graphs{
   
    int V;
    list<int> *l;

    public:

    Graphs(int V){
        this->V = V;
        l = new list<int>[V];
    }

    void addEdge(int x , int y){
        //Bidirectional Edge
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void printAdjlist(){

        for(int i=0;i<V;i++){
            cout<<"Vertices : " << i<<"-> ";

            for(int nbr : l[i]){
                cout<<nbr<<" ";
            }
            cout<<endl;
        }
    }

};

int main(){
    Graphs g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,3);

    g.printAdjlist();


}
