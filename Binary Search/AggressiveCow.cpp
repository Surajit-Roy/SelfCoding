#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid){
    int cowCount = 1;
    int lastPos = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] - lastPos >= mid){
            cowCount++;
            if(cowCount == k){
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}

int aggressiveCow(int arr[], int n, int k){
    int temp;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i]= arr[j];
                arr[j] = temp;
            }
        }
    }
    int s = 0;
    int maxi = -1;
    for(int i=0; i<n; i++){
        maxi = max(maxi, arr[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(isPossible(arr, n, k, mid)){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number of Cows: ";
    cin>>n;
    int arr[1000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the number of key: ";
    cin>>k;
    cout<<aggressiveCow(arr, n, k);
    return 0;
}