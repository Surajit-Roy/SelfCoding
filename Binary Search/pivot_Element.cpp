#include<iostream>
using namespace std;

int pivotArray(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s < e){
        if(arr[mid] > arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}

int main(){
    int array[10000];
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<"Enter the element "<<i+1<<": ";
        cin>>array[i];
    }
    cout<<endl;
    cout<<"The pivot element's Index is: "<<pivotArray(array, n);
    return 0;
}