#include<bits/stdc++.h>
using namespace std;


void BFS(int start, vector<vector<int>> &adj, int n){
    vector<bool> visited(n, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while(!q.empty()){
        int node = q.front();
        q.pop();

        cout << node << " ";

        for(auto &ngbr: adj[node]){
            if(!visited[ngbr]){
                visited[ngbr] = true;
                q.push(ngbr);
            }
        }
    }
}

// TC: O(V+E);
// SC: O(V);