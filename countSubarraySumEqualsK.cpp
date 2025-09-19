#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a;
    int k;
    int preSum = 0, cnt =0;
    map<int,int> mpp;
    mpp[0] = 1;
    for(int i = 0 ; i < a.size() ; i++){
        preSum += a[i];
        int remove = preSum - k;
        int cnt+= mpp[remove];
        mpp[remove] += 1;

    }


    return cnt
    
}