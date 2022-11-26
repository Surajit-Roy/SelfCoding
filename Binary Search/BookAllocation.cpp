#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
    int StudentCount = 1;
    int pageSum = 0;
    for(int i=0; i<n; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            StudentCount++;
            if(StudentCount > m || arr[i] > mid){
                return false;
            } 
            pageSum = arr[i];
        }
    }
    return true;
}

int bookAllocates(int arr[], int n,int m){
    int s = 0;
    int sum = 0;
    for(int i=0; i<=n; i++){
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s+(e-s)/2;
    while(s <= e){
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    int n;
    cout<<"The number of Student: ";
    cin>>n;
    int arr[1000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The number of pages: ";
    int m;
    cin>>m;
    cout<<bookAllocates(arr, n, m);
    return 0;
}