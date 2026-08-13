#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int target){
    int n = arr.size();

    int low = 0, high = n -1;

    while(low <= high){
        int mid = low + (high-low)/2;
        
        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) low =  mid+1;
        else high = mid - 1;
    }

    return -1;
}

// TC: O(logn)
// SC: O(1)