#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr, int n){
    for(int i = 0; i < n; ++i){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}

// TC : O(N2) or Best Case O(N)
// SC: O(1)