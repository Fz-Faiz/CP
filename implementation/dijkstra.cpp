#include<bits/stdc++.h>
using namespace std;

/*Shortest path from one source to all other vertices in a weighted
 graph with non-negative edge weights. */

vector<int> dijkstra(int n, vector<vector<pair<int,int>>>& adj, int source){
    vector<int> dist(n , INT_MAX);

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    dist[source] = 0;

    pq.push({0, source});

    while(!pq.empty()){
        auto [distance, node] = pq.top();
        pq.pop();

        if(distance >  dist[node]) continue;

        for(auto [neighbor, wieght] : adj[node]){
            // It is called Relaxation
            if(distance + wieght < dist[neighbor]){
                dist[neighbor] = distance + wieght;
                pq.push({dist[neighbor], neighbor});
            }
        }

    }

    return dist;
}

// TC: O((V+E)logV)
// Does not work for negative edge weights

