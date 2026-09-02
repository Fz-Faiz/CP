#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(int i  = 0; i < n; ++i){
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        ll sum = 1;
        bool possible = true;
        if(a[0] != 1){
            possible = false;
        }
        for(int i = 1; i < n; ++i){
            if(a[i] > sum){
                possible = false;
                break;
            }
            sum += a[i];
        }

        if(possible) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

// TC: O(NlogN)