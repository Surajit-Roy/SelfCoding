#include<iostream>
using namespace std;

int pairSum(int arr[], int n, int key){
    int ans;
    for(int i=0; i<n; i++){
        
        for(int j=i+1; j<n; j++){
            if(arr[i] + arr[j] == key){
                // int temp;
                cout << min(arr[i], arr[j])<<"\t";
                cout << max(arr[i], arr[j])<<"\t";
                cout << endl;
            }
        }
    }
    return ans;
}

int main(){
    int array[5]={1,2,3,4,5};
    // cout<<"The Pair Sum of the key is: "<<endl;
    pairSum(array, 5,5);
    return 0;
}