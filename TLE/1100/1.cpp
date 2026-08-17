#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;
        map<char,int>freq;

        vector<int> distinct(n, 0);
        int count = 0;

        for(int i = 0; i < n; ++i){
            freq[s[i]]++;
            if(freq[s[i]] == 1){
                count++;
            }
            distinct[i] = count;
        }

        long long ans = 0;
        for(int i = 0; i < n; ++i){
            ans += distinct[i];
        }
        cout << ans << endl;
    }
}

// TC: O(NLogN)
// SC: O(N)