#include<bits/stdc++.h>
using namespace std;

using ll = long long;



int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }

        ll gcd1 = 0, gcd2 = 0;
        for(int i = 0; i < n; ++i){
            if(i&1){
                gcd2 = __gcd(gcd2, a[i]);
            }else{
                gcd1 = __gcd(gcd1, a[i]);
            }
        }

        bool flag = true;
        for(int i = 1; i < n; i+=2){
            if(a[i] % gcd1 == 0){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << gcd1 << endl;
            continue;
        }
        flag = true;
        for(int i = 0; i < n; i+=2){
            if(a[i] % gcd2 == 0){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << gcd2 << endl;
            continue;
        }
        else{
            cout << 0 << endl;
            continue;
        }
    }
}