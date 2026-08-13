// Q1 (Easy)

#include<bits/stdc++.h>
using namespace std;

void solve1(vector<int> &A, int l, int r){
    for(int i = l; i <= r; ++i){
        A[i] = (i-l+1) * A[l];
    }
}
int solve2(vector<int> &A, int l, int r){
    int sum = 0;
    for(int i = l; i <= r; ++i){
        sum += A[i];
    }
    return sum;
}
int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; ++i){
        cin >> A[i];
    }
    int M;
    cin >> M;
    vector<vector<int>> Query(M, vector<int>(3));
    for(int i = 0; i < M; ++i){
        int a, b, c;
        cin >> a >> b >> c;
        Query.push_back({a, b, c});
    }

    int totalSum = 0;
    for(int i = 0; i < M; ++i){
        if(Query[i][0] == 1){
            solve1(A, Query[i][1], Query[i][2]);
        }else{
            totalSum += solve2(A, Query[i][1], Query[i][2]);
        }
    }
    return totalSum;
}