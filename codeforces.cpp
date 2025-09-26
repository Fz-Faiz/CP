#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        int totalSwap = 0;
        bool flag = true;
        if(n == 1 || n == 2){
            cout << totalSwap << endl;
            flag = false;
        } 
        if(n&1){
            int till = n-2;
            char lastch = s[n-1];
            for(int i=0;i<till/2;i++){
                if(s[i] == 'a'){
                    swap(s[i],s[n-2-i]);
                    totalSwap++;
                } 
                else continue;
            }
        }
        else{
            char firstch = s[0];
            for(int i = 0 ; i<n/2;i++){
                if(s[i] != firstch){
                    swap(s[i], s[n-i-1]);
                    totalSwap++;
                }
                else{
                    continue;

                }
            }

        }
        if(flag) cout << totalSwap << endl;


       
        
    }
}