#include<bits/stdc++.h>
using namespace std;


using P = pair<int,int>;

int prim(int n, vector<vector<P>>& adj){
    vector<bool> visited(n, false);

    // {weight, node};
    priority_queue<P, vector<P>, greater<P>> pq;

    pq.push({0, 0});

    int mstWeight = 0;

    while(!pq.empty()){
        auto [weight, node] = pq.top();
        pq.pop();

        if(visited[node]) continue;

        visited[node] = true;

        mstWeight += weight;

        for(auto& [ngbr, edgeWeight]: adj[node]){
            if(!visited[ngbr]){
                pq.push({edgeWeight, ngbr});
            }
        }
    }

    return mstWeight;
}

// TC: O(ElogV)