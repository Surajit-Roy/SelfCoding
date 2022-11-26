#include<iostream>
using namespace std;

int findDuplicates(int arr[], int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        // XOR all array elements
        ans= ans^arr[i];
    }
    // XOR [1 to n-1] array elements
    for(int i=0; i<n; i++){
        ans= ans^i;
    }
    return ans;
}

int main(){
    int arr[8] = {1,2,3,4,5,4,6,7};
    cout<<findDuplicates(arr, 8);
    return 0;
}