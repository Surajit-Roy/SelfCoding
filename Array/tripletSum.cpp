#include<iostream>
using namespace std;

int tripletSum(int arr[], int n, int key){
    int ans=0;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==key){
                    // int mini, maxi;
                    // cout<<min(arr[i], arr[j])<<" ";
                    // cout<<min(mini, arr[k])<<" ";
                    // cout<<max(arr[i], arr[j])<<" ";
                    // cout<<max(maxi, arr[k])<<" ";
                    cout<<arr[i]<<" ";
                    cout<<arr[j]<<" ";
                    cout<<arr[k]<<" ";
                    cout<<endl;
                }
            }
        }
    }
    return ans;
}

int main(){
    int array[5] = {1,2,3,4,5};
    tripletSum(array, 5, 9);
    return 0;
}