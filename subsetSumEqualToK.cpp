#include<bits/stdc++.h>
using namespace std;

bool f(int ind, int target , vector<int> arr, vector<vector<int>> dp){
    if(target == 0) return 0;
    if(ind == 0) return arr[0] == target;
    if(dp[ind][target] != -1) return dp[ind][target];
    bool notTake = f(ind -1 ,target , arr, dp);
    bool take= false;
    if(arr[ind] <= target){
        take = f(ind-1, target-arr[ind], arr, dp)
    }
    return dp[ind][target] = take | notTake;

}
int main() {
    vector<int> arr;
    vector<vector<int>> dp(n, vector<int>(k+1, -1));
    return f(n-1, k , arr, dp);

    // Tabulation
    vector<vector<bool>> dp(n, vector<int>(k+1, 0));
    for(int i =0 ;i<n;i++) dp[i][0] = true;
    dp[0][arr[0]] = true;
    for(int ind = 1; ind<n;ind++){
        for(int target = 1; target <=k;target++){
            bool notTake= dp[ind-1][target];
            bool take = false;
            if(arr[ind] <= target) dp[ind-1][target-arr[ind]];
            dp[ind][target] = take | notTake;
        }
    }
    return dp[n-1][k];
}

