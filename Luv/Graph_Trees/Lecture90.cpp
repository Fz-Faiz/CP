#include<bits/stdc++.h>
using namespace std;

// Lowest Common Ancestor - For two nodes

const int N = 1e5+10;
vector<int> g[N];
int par[N];

void dfs(int vertex, int p = -1){
    par[vertex] = p;
    for(int child: g[vertex]){
        if(child == p) return;
        dfs(child, vertex);
    }
}
vector<int> path(int v){
    vector<int> ans;
    while(v!=-1){
        ans.push_back(v);
        v = par[v];
    }
    reverse(ans.begin(), ans.end());
    return ans;
}



int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    int x, y;
    cin >> x >> y;
    vector<int> path_x = path(x);
    vector<int> path_y = path(y);
    int lcs = -1;
    int mn_ln = min(path_x.size(), path_y.size());
    for(int i= 0;i<mn_ln;++i){
        if(path_x[i] == path_y[i]){
            lcs = path_x[i];
        }else{
            break;
        }
    }
    cout << lcs << endl;
}
