#include<iostream>
#include<algorithm>
using namespace std;

bool isPossibleSol(int mid, int arr[], int n, int target){
    long long int sum = 0;
    for(int i=0; i<n; i++){
        int diff = 0;
        if(arr[i] > mid){
            diff = arr[i] - mid;
        }
        sum = sum + diff;
    }
    if(sum >= target)
        return true;
    else
        return false;
}

int getMaxHeightSaw(int arr[], int n, int target){
    sort(arr, arr+n);
    int s = 0, e = arr[n-1];
    int ans = -1;
    while(s <= e){
        int mid = s+(e-s)/2;
        if(isPossibleSol(mid, arr, n, target)){
            // store the answer
            ans = mid;
            // move to right
            s = mid+1;
        }
        else{
            // move to left
            e = mid-1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {15, 8, 18, 6};
    int target = 30;
    int ans = getMaxHeightSaw(arr, 4, target);
    cout << "Answer is-> " << ans << endl;
    return 0;
}