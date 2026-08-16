#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    class DSU{
        vector<int> parent;
        vector<int> rank;
        public:
            

            DSU(int n){
                parent.resize(n+1);
                rank.resize(n+1);
                for(int i = 1; i <= n; ++i){
                    parent[i] = i;
                    rank[i] = 0;
                }
            }

            int Find(int x){
                if(parent[x] == x) return x;
                return parent[x] = Find(parent[x]);
            }

            void Union(int x, int y){
                int x_par = Find(x);
                int y_par = Find(y);

                if(x_par == y_par) return ;

                if(rank[x_par] > rank[y_par]){
                    parent[y_par] = x_par;
                }
                else if(rank[x_par] < rank[y_par]){
                    parent[x_par] = y_par;
                }
                else{
                    parent[x_par] = y_par;
                    rank[y_par]++;
                }
            }
    };

};