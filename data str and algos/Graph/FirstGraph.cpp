//
// Created by htech2 on 2024/07/20.
#include <iostream>
using namespace std;

class Graph{
private:
    int v;
    int** adj;
public:
    Graph(int v){
        this->v = v;
        adj = new int*[v];
        for(int i=0; i< v; i++){
            adj[i] = new int[v];
            for(int j=0; j < v; j++){
                adj[i][j] = 0;
            }
        }
    }
    void addEdge(int orig, int dest){
        //code
        adj[orig-1][dest-1] = 1;
    }
    void deleteEdge(int orig , int dest){
        //code
        adj[orig-1][dest-1] = 0;
    }
    void display(){
        for (int i = 0; i < v; ++i) {
            for (int j = 0; j < v; ++j) {
                cout<< adj[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    ~Graph(){
        for(int i = 0; i < v; i++){
            delete[] adj[i];
        }
        delete[] adj;
    }
};

int main()
{
    Graph g(5);
    g.addEdge(2,3);
    g.display();

}
