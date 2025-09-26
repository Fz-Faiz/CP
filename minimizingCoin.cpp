#include<bits/stdc++.h>
using namespace std;
 

int main() {
    int x, n;
    vector<int> a;
    vector<int> dp(x+1, 1e9);
    dp[0] =0;
    for(int i = 1; i<=x;i++){
        for(int j=0;j<n;j++){
                if(a[j] < i){
                    dp[i] = min(dp[i], dp[i-a[j]]+1);
                }
        }

    }
    cout << (dp[x] < 1e9 ? dp[x] : -1);
}