#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int k){
    int s=0, e = n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        int ans = arr[mid];
        if(arr[mid] == k){
            return mid;

        }
        else if(arr[mid] < k){
            s = mid+ 1;

        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[1000];
    for(int i=0; i<n; i++){
        cin >> arr[i];

    }
    int k;
    cin>>k;
    cout<<binary_search(arr, arr+n, k)<<endl;
    cout << "Index is-> " <<binarySearch(arr, n, k);
    return 0;
}