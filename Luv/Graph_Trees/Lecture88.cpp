#include<bits/stdc++.h>
using namespace std;
// DFS for Tree

const int N = 1e5;
vector<int> g[N];
int subtree_sum[N];
int even_cnt[N];

// Pre-compute

void dfs(int vertex, int par = 0){
    for(int child : g[vertex]){
        if(child == par) continue;
        dfs(child, vertex);
        subtree_sum[vertex] += subtree_sum[child]; 
        even_cnt[vertex] += even_cnt[child];
    }
    subtree_sum[vertex] += vertex;
    if(vertex %2==0) even_cnt[vertex]++;
}
int main() {
     int n; 
     cin >> n;
     for(int i = 0; i < n-1; ++i){
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
     }
     dfs(1);
}