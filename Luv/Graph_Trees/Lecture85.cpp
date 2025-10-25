#include<bits/stdc++.h>
using namespace std;


const int N = 1e5;
vector<int> g[N];
bool vis[N];
vector<vector<int>> cc;
vector<int> current_cc;

// TC : O(V+E)
void dfs(int vertex){

    vis[vertex] = true;
    current_cc.push_back(vertex);
    for(int child: g[vertex]){
        if(vis[child]) continue; 
        dfs(child);
    }
}

bool dfs2(int vertex, int parent){
    vis[vertex] = true;
    int isLoopExist = false;
    for(int child: g[vertex]){
        if(vis[child] && child == parent) continue;
        if(vis[child]) return true;

        isLoopExist |= dfs2(child, vertex);

    }
    return isLoopExist;
}

vector<vector<int>> levelorder(TreeNode* root){
    vector<int> ans;
    if(root == NULL) return ans;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        vector<int> level;
        for(int i = 0; i < n; ++i){
            TreeNode* node = q.front();
            q.pop();
            if(node->left != NULL) q.push(node->left);
            if(node->right != NULL) q.push(node->right);
            level.push_back(node);
        }
        ans.push_back(level);
    }
    return ans;
}

int main() {
     int n, m;
     cin >> n >> m;
     for(int i = 0; i < m; ++i){
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
     }
     int connectedComponents = 0;
     for(int i = 1; i <= n; ++i){
        if(vis[i]) continue;
        current_cc.clear();
        dfs(i);
        cc.push_back(current_cc);
        connectedComponents++;
     }
}