#include<bits/stdc++.h>
using namespace std;\

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;

    int i = low;
    int j = mid + 1;

    while(i <= mid && j <= high){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
    }

    while(i <= mid){
        temp.push_back(arr[i++]);
    }
    while(j <= mid){
        temp.push_back(arr[j++]);
    }

    for(int k = low; k <= high; ++k){
        arr[k] = temp[k - low];
    }
}

void mergeSort(vector<int>& arr, int low, int high){
    if(low >= high) return ;

    int mid = low + (high - low) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

// TC: O(NLogN)
// SC: O(N)
// Stable