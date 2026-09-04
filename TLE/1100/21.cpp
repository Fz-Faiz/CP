#include<bits/stdc++.h>
using namespace std;


vector<int> pairs[1001];
int main(){
    for(int i = 1; i <= 1000; i++){
        for(int j = 1; j <= 1000; j++){
            if(__gcd(i,j) == 1){
                pairs[i].push_back(j);
            }
        }
    }

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> idx(1001, 0);
        for(int i = 1; i <= n; ++i){
            int x;
            cin >> x;
            idx[x] = i;
        }

        int ans = -1;
        for(int i = 1; i <= 1000; ++i){
            if(idx[i] == 0) continue;
            for(auto &j: pairs[i]){
                if(idx[j] != 0){
                    ans = max(ans, idx[i] + idx[j]);
                }
            }
        }

        cout << ans << endl;
    }
}

// TC: O(N) + 1000*1000*10 + 1000*1000*log(1000)

// TC: __gcd = O(log(max(a,b)))