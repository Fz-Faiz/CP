    #include<bits/stdc++.h>
    using namespace std;

    using ll = long long;

    int main(){
        int t;
        cin >> t;
        while(t--){
            int  n;
            cin >> n;
            vector<int> weights(n);
            for(int i = 0; i < n; ++i){
                cin >> weights[i];
            }

            vector<int> suffix_sum(n);
            map<int,int> index;
            int sum = 0;
            for(int i = n-1; i >= 0; --i){
                sum += weights[i];
                index[sum] = i;
                suffix_sum[i] = sum;
            }

            int ans = 0;
            int prefix_sum = 0;
            for(int i = 0; i < n-1; ++i){
                index.erase(suffix_sum[i]);
                prefix_sum+=weights[i];
                if(index.find(prefix_sum) != index.end()){
                    ans = max(ans, (i+1)+(n-index[prefix_sum]));
                }
            }

            cout << ans << endl;

            

        }
    }