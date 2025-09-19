#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a;
    long long sum = 0;
    long long maxi = LONG_MIN;
    int ansStart = -1, ansEnd = -1;
    for(int i = 0 ;i < a.size() ; i++){
        if(sum == 0) int start = i;
        sum += a[i];
        if(sum> max){
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }
        if(sum<0){
            sum = 0;
        }
    }
    return maxi;

}