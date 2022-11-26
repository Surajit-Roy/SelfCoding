#include<iostream>
using namespace std;

int findCommonElementInArray(int arr1[], int arr2[],int n){
    int i=0, j=0;
    int ans=1;
    
    while(i<n && j<n){
        if(arr1[i] == arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }  
        else if(arr1[i] < arr2[j])
            i++;
        else
            j++;
    }
    return ans;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int arr2[2]={3,5};
    findCommonElementInArray(arr, arr2, 5);
    return 0;
}