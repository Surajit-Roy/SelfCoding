#include<iostream>
using namespace std;

int pivotArray(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}

int binarySearch(int arr[], int n, int s, int e, int k){
    int start = s;
    int end = e;
    int mid = start +(end-start)/2;
    while(start <= end){
        if(arr[mid] == k){
            return mid;
        }
        // go to right part
        else if(k >= arr[mid]){
            start = mid+1;
        }
        else{ // k<=arr[mid]  // go to left part
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
}

int findPosition(int arr[], int n, int k){
    int piviot = pivotArray(arr, n);
    if(k >= arr[piviot] && k <= arr[n-1]){ //go to 2nd line
        return binarySearch(arr, n, piviot, n-1, k);
    }
    else{
        return binarySearch(arr, n, 0, piviot-1, k);
    }
}

int main(){
    int array[10000];
    int n;
    cout<<endl;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<"Enter the element "<<i+1<<": ";
        cin>>array[i];
    }
    cout<<endl;
    int k;
    cout<<"Enter the key: ";
    cin>>k;
    cout<<endl;
    cout<<"The Index is: "<<findPosition(array, n, k);
    cout<<endl<<endl;
    return 0;
}