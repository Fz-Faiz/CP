
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<ll> a(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        vector<ll> x(q);
        for(int i = 0; i < q; ++i){
            cin >> x[i];
        }
        ll prev = 31;
        for(int i = 0; i < q; ++i){
            if(x[i] >= prev) continue;
            ll val = pow(2, x[i]);
            for(int j = 0; j < n; ++j){
                if(a[j]%val == 0){
                    a[j] += (val/2);
                }
            }
            prev = x[i];
        }

        for(int i = 0; i < n; ++i){
            cout << a[i] << " ";
        }
        cout << endl;

        
    }
}

// TC: O(q+n*30)
// SC: O(q+n)