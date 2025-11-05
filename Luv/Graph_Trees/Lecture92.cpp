#include<bits/stdc++.h>
using namespace std;

// BFS -> Breath First Search

const int N = 1e5+10;
vector<int> g[N];
int vis[N];
int level[N];


// TC :- O(V+2E)
void bfs(int source){
    queue<int> q;
    q.push(source);
    vis[source] = 1;

    while(!q.empty()){
        int curr_v = q.front();
        q.pop();
        for(int child: g[curr_v]){
            if(!vis[child]){
                q.push(child);
                vis[child] = 1;
                level[child] = level[curr_v]+1;
            }
        }
    }
    


}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
}