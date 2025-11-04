#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int> g[N];
int subtre_sum[N];
int val[N];
#define ll long long


void dfs(int vertex, int par){

    subtre_sum[vertex] += val[vertex-1];
    for(int child: g[vertex]){
        if(child == par) continue;
        dfs(child, vertex);
        subtre_sum[vertex] += subtre_sum[child];
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

    ll ans = 0;

    for(int i = 2; i<= n;i++){
        int part1 = subtre_sum[i];
        int part2 = subtre_sum[1]-part1;
        ans = max(ans, part1 * 1LL * part2);
    }

    cout << ans << endl;




}