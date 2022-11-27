#include<iostream>
using namespace std;

int getMaxSubarraySum(int arr[], int n){
    int ans = INT_MIN;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum+arr[i];
        ans = max(ans, sum);
        if(sum < 0)
            sum = 0;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The sum is-> "<<getMaxSubarraySum(arr, n);
    return 0;
}