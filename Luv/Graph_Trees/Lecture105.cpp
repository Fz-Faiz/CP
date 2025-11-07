#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
int dp[N];
int h[N];

int func(int i){
    if(i==0) return 0;
    if(dp[i] != -1) return dp[i];
    int cost = INT_MAX;

    cost = min(cost , func(i-1)+abs(h[i] - h[i-1]));
    if(i>1)
    cost = min(cost, func(i-2)+abs(h[i]-h[i+1]));

    return dp[i] =  cost;


}

int main() {
    memset(dp, -1 ,sizeof(dp));
    int n;
    cin >> n;
    cout << func(n-1);
}

int func2(int i){
    if(i==0) return 0;
    if(dp[i] != -1) return dp[i];
    int cost = INT_MAX;

    for(int j=0;j<K;j++){
        if(i-j>=0)
        cost = min(cost,func2(i-j)+abs(h[i]-h[i-j]));
    }
}