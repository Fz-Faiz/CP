
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(ll mid, vector<ll>& heights, ll x){
    ll units = 0;
    int n = heights.size();
    for(int i = 0; i < n; ++i){
        if(heights[i] < mid){
            units += (mid - heights[i]);
        }
    }
    return units <= x;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, x;
        cin >> n >> x;

        vector<ll> heights(n);
        for(int i = 0; i < n; ++i){
            cin >> heights[i];
        }

        ll low = 1, high = 1e12, ans = -1;

        while(low <= high){
            ll mid = low + (high - low)/2;
            if(check(mid, heights, x)){
                ans = mid;
                low = mid+1;
            }else{
                high = mid-1;
            }
        }

        cout << ans << endl;
    }
}
