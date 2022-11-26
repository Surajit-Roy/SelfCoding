#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
    int Painters = 1;
    int partition = 0;
    for(int i=0; i<n; i++){
        if(partition + arr[i] <= mid){
            partition += arr[i];
        }
        else{
            Painters++;
            if(Painters > m || arr[i] > mid){
                return false;
            }
            partition = arr[i];
        }
    }
    return true;
}

int PainterPartition(int arr[], int n, int m){
    int s=0;
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the Painters size: ";
    cin>>n;
    int arr[1000];
    for(int i=0; i<n; i++){
        cout<<"Enter the Painter "<<i+1<<": ";
        cin>>arr[i];
    }
    cout <<endl;
    int m;
    cout<<"Enter the Partition number: ";
    cin>>m;
    cout<<endl;
    cout<<PainterPartition(arr, n, m);
    cout<<endl;
    cout<<endl;
    return 0;
}