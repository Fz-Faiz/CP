#include<bits/stdc++.h>
using namespace std;

// Topological sorting is for a DAG (Directed Acyclic Graph).

vector<int> topologicalSort(int n, vector<vector<int>>& adj){
    vector<int> indegree(n, 0);

    // calculate indegree
    for(int i = 0; i < n; ++i){
        for(auto &ngbr: adj[i]){
            indegree[ngbr]++;
        }
    }

    queue<int> q;

    // Nodes have indegree 0
    for(int i = 0; i < n; ++i){
        if(indegree[i] == 0){
            q.push(i);
        }
    }

    vector<int> result;

    while(!q.empty()){
        int node = q.front();
        q.pop();

        result.push_back(node);

        for(auto &ngbr: adj[node]){
            indegree[ngbr]--;
            if(indegree[ngbr] == 0){
                q.push(ngbr);
            }
        }
    }

    // Cycle exist
    if(result.size() != n) return {};

    return result;

}

// TC: O(V+E)
// SC: O(V)