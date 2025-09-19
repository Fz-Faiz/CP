#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> dp(x+1, 0);
    dp[0] = 1;
    for(int i = 1; i<= x ;i++){
        for(int j = 0;j<n;j++){
            if(a[j] <= i){
                dp[i] = dp[i] + dp[i-a[j]];
            }
        }
    }
}