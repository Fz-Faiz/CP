#include<bits/stdc++.h>
using namespace std;

long binExpRecur(int a, int b){
    if(b ==0) return 1;
    long  res = binExpRecur(a, b/2);
    if(b&1){
        return a * res * res;
    }else{
        return res * res;
    }
}
int binExpIter(int a, int b){
    int ans = 1;
    while(b){
        if(b&1){
            ans = ans * a;
        }
        a = a*a;
        b >>= 1;
    }
    return ans;
}
int main(){
    int a =2 , b = 13;
    cout << binExpRecur(a,b) << endl;
    cout << binExpIter(a, b) << endl;
}