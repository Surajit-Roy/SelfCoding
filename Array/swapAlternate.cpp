#include<iostream>
using namespace std;
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternate(int arr[], int n){
    for(int i=0; i<n; i=i+2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int even[6]={1,2,3,4,5,6};
    int odd[5]={1,2,3,4,5};
    cout<<"This is even case: ";
    swapAlternate(even, 6);
    printArray(even, 6);
    cout<<endl;
    cout<<"This is odd case: ";
    swapAlternate(odd, 5);
    printArray(odd, 5);
    return 0;
}