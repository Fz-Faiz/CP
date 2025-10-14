#include<bits/stdc++.h>
using namespace std;

// Number Theory Question
const int M = 1e9+7;
const int N = 1e5+10;
int fact[N];

int binExp(int a, int b, int m){
    int result = 1;
    while(b>0){
        if(b&1){
            result = (result*1LL*a) % m;
        }
        a = (a*1LL*a)%m;
        b >>= 1;
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    fact[0]=1;
    for(int i =1;i<N;++i){
        fact[i] = (fact[i-1] * 1Ll * i) %M;
    }
    while(t--){
        int n, k;
        cin >> n >> k;

    }
}