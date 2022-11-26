#include<iostream>
using namespace std;

int peekMountain(int arr[], int n){
    int low = 0;
    int high = n-1;
    int mid = low + (high - low)/2;
    while (low < high)
    {
        if(arr[mid] < arr[mid+1]){
            low = mid+1;
        }
        else{
            high = mid;
        }
        mid = low + (high - low)/2;
    }
    return low;    
}

int main(){
    int array[1000];
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Enter the number "<<i+1<<": ";
        cin>>array[i];
    }
    cout<<endl;
    cout<<"The peek element of mountain array's Index is: "<<peekMountain(array, n);
    cout<<endl;
    cout<<endl;
    return 0;
}