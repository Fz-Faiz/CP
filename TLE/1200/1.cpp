#include<bits/stdc++.h>
using namespace std;


vector<int> findMax3(vector<int>& arr){
    vector<pair<int,int>> temp(arr.size());
    for(int i = 0; i < temp.size(); ++i){
        temp[i].first = arr[i];
        temp[i].second = i;
    }
    sort(temp.rbegin(), temp.rend());

    vector<int> ans(3);
    for(int i = 0; i < 3; ++i){
        ans[i] = temp[i].second;
    }
    return ans;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n), c(n);

        for(int i = 0; i < n; ++i) cin >> a[i];
        for(int i = 0; i < n; ++i) cin >> b[i];
        for(int i = 0; i < n; ++i) cin >> c[i];

        vector<int> maxa = findMax3(a);
        vector<int> maxb = findMax3(b);
        vector<int> maxc = findMax3(c);
        int ans = 0;
        for(int i = 0; i < 3; ++i){
            for(int j = 0; j < 3; ++j){
                for(int k = 0; k < 3; ++k){
                    int x = maxa[i], y = maxb[j], z= maxc[k];
                    if((x == y) || (y == z) || (z==x))continue;

                    ans = max(ans, a[x]+b[y]+c[z]);
                }
            }
        }
        cout << ans << endl;
    }
}