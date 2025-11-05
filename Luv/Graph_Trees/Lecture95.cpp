#include<bits/stdc++.h>
using namespace std;

// multi-source bfs

const int N = 1e3+10;
const int INF  =1e9+10;

int vis[N][N];
int level[N][N];
int val[N][N];
int n, m;


vector<pair<int,int>> movements={
    {0,1},{0,-1},{1,0},{-1,0}
};
bool isValid(int i, int j){
    return i>=0 && j>=0 && i < n && j < m;
}
void reset(){
     for(int i = 0 ;i < n;i++){
            for(int j=0;j<m;j++){
                val[i][j] = 0;
                level[i][j] = INF;
            }
        }
    }
}

int bfs() {
    int mx= 0;
    for(int i = 0 ;i < n;i++){
        for(int j=0;j<m;j++){
            mx = max(mx, val[i][j]);
        }
    }
    queue<pair<int,int>> q;
    for(int i = 0 ;i < n;i++){
        for(int j=0;j<m;j++){
            if(mx == val[i][j]){
                q.push({i,j});
                level[i][j] = 0;
            }
        }
    }
    int ans = 0;
    while(!q.empty()){
        auto v = q.front();
        int v_x = v.first;
        int v_y = v.second;
        for(auto movement: movements){
            int childX = movement.first + v_x;
            int childY = movement.second + v_y;
            if(!isValid(childX, childY)) continue;
            if(vis[childX][ childY]) continue;
            q.push({childX, childY}); 
            level[childX][childY] = level[v_x][v_y] +1;
            vis[childX][childY] = 1;
            ans = max(ans, level[childX][childY]);
        }
    }
    return ans;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 0 ;i < n;i++){
            for(int j=0;j<m;j++){
                cin >> val[i][j];
            }
        }
    }
}

