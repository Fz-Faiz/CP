#include<bits/stdc++.h>
using namespace std;

// BFS -> Breath First Search for knight movement in chess

const int N = 1e5+10;
vector<int> g[N];
int vis[8][8];
int lev[8][8];

int getX(string s){
    return s[0]-'a';
}
int getY(string s){
    return s[1]-'1';
}

bool isValid(int x,int y){
    return x>=0 && y>=0 && x<8 && y<8;
}

vector<pair<int,int>> movements = {
    {-1,2},{1,2},
    {-1,-2},{1,-2},
    {2,-1},{2,1},
    {-2,1},{-2,-1}
}

int bfs(string source, string dest){
    int sourceX = getX(source);
    int sourceY= getY(source);
    int destX = getX(dest);
    int destY= getY(dest);

    queue<pair<int,int>> q;
    q.push({sourceX,sourceY});
    vis[sourceX][sourceY] = 1;

    while(!q.empty()){
        pair<int,int> v = q.front();
        q.pop();

        for(auto movement: movements){
            int childX = movement.first+sourceX;
            int childY = movement.second+sourceY;
            if(!isValid(childX,childY)) continue;
            if(!vis[childX][childY]){
                q.push({childX, childY});
                lev[childX][childY] = lev[x][y]+1;
                vis[childX][childY] = 1;
            } 
        }

        
    }
    return lev[destX][destY];

}

void 


int main() {
    int t;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        cout << bfs(s1,s2);
    }
}