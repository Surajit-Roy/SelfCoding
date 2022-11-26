#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortOne(int arr[], int n){
    int left = 0;
    int right = n-1;
    while(left < right){
        while(arr[left] == 0 && left < right){
            left++;
        }
        while(arr[right] == 1 && left < right){
            right--;
        }
        // agar yaha tak poch chuke ho iska matlab
        // arr[i]==1 and arr[j]==0 ho gaya hai
        if(left < right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main(){
    int array[8] = {0,1,1,0,0,1,1,0};
    sortOne(array, 8);
    printArray(array, 8);
    return 0;
}