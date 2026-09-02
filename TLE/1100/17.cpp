#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        vector<vector<ll>> a(n, vector<ll>(n));
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                cin >> a[i][j];
            }
        }

        ll cnt = 0;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                if(a[i][j] != a[n-i-1][n-j-1]) cnt++;
            }
        }

        cnt/=2;
        if(cnt>k) cout << "NO" << endl;
        else{
            ll temp = k - cnt;
            if(temp%2 == 0) cout << "YES" <<endl;
            else{
                if(n%2 == 0) cout << "NO" << endl;
                else cout << "YES" << endl;
            }
        }
    }
}

// TC : O(N^2)