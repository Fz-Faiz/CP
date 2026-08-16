#include<bits/stdc++.h>
using namespace std;

void DFS(int node, vector<vector<int>> &adj, vector<bool>& visited){
    visited[node] = true;

    cout << node << " ";

    for(auto &ngbr: adj[node]){
        if(!visited[ngbr]){
            DFS(ngbr, adj, visited);
        }
    }
}


// TC: O(V+E)
// SC: O(V)
