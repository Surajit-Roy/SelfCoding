#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int k){
    int l = 0;
    int r = n-1;
    int ans = -1;
    int mid = l+(r-l)/2;
    while(l<=r){
        if(arr[mid] == k){
            ans = mid;
            r = mid-1;
        }
        else if(k > arr[mid]){
            l = mid + 1;
        }
        else if(k < arr[mid]){
            r = mid-1;
        }
        mid = l+(r-l)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int k){
    int l = 0;
    int r = n-1;
    int ans = -1;
    int mid = l+(r-l)/2;
    while(l<=r){
        if(arr[mid] == k){
            ans = mid;
            l= mid+1;
        }
        else if(arr[mid]> k){
            r = mid - 1;
        }
        else if(arr[mid] < k){
            l = mid+1;
        }
        mid = l+(r-l)/2;
    }
    return ans;
}

int main(){
    int array[1000];
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter the number "<<i+1<<": ";
        cin >> array[i];
    }
    cout<<endl;
    int k;
    cout << "Enter the key: ";
    cin>>k;
    cout<<endl;
    cout<<"The first occurence Index is: "<<firstOcc(array, n, k);
    cout<<endl;
    cout<<"The last occurence Index is: "<<lastOcc(array, n, k);
    cout<<endl;
    return 0;
}