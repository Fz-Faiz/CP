#include<bits/stdc++.h>
using namespace std;


// 1. Representation: List and Matrix
// 2. In Matrix n = number of node then nxn matrix
// 3. N -> Vertices , M -> Edges 
// 4. In list n - number of nodes then maximum edges can be n^2


const int N = 1e3;
int graph[N][N];

vector<int> graph2[N];

int main() {
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; ++i){
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;

        graph2[v1].push_back(v2);
        graph2[v2].push_back(v1); // O(N+M) -> SC for Adjacency List
    }
    // O(N^2) -> Space Complexity N = 10^5 very high




}