#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sort012(int arr[], int n){
    int i=0;
    int mid=0;
    int j=n-1;
    while(mid<=j){
        if(arr[mid] == 0){
            swap(arr[mid], arr[i]);
            i++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[mid], arr[j]);
            j--;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the Array's Size: ";
    cin>>n;
    cout<<endl;
    int array[10000];
    cout<<"Enter the Elements of the Array: ";
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    cout<<endl;
    sort012(array, n);
    cout<<"After Sorting The Array: ";
    // printArray(array, n);
    cout<<endl;
    return 0;
}