#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[][3],int n, int m, int row, int target){
    int s = 0, e = m-1;
    int mid = s+(e-s)/2;
    while(s <= e){
        if(arr[row][mid] == target){
            cout << row << " " << mid << endl;
            return true;
        }

        if(arr[row][mid] < target){
            s = mid+1;
        }

        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return false;
}


bool search(int arr[][3], int n, int m, int target){
    // find row
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        // check starting element of row
        if(arr[mid][0] == target){
        cout << mid << " " << 0 << endl;

            return true;
        }

        // check ending element of row
        if(arr[mid][m-1] == target){
            cout << mid << " " << m-1 << endl;
            return true;
        }

        // check if element is present in between starting & ending element
        if(target > arr[mid][0] && target < arr[mid][m-1]){
            // apply binary search on col
            bool ans = binarySearch(arr, n, m, mid, target);
            return ans;
        }
        // check upper part
        if(target < arr[mid][0])
            e = mid-1;   
        // check lower part
        if(target > arr[mid][m-1])
            s = mid+1;

        // update mid
        mid = s+(e-s)/2;
    }
    return false;
}

int main(){
    int n = 3;
    int m = 3;
    int target = 20;
    int arr[3][3];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout << search(arr, n, m, target) << endl;

    return 0;
}