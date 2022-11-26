#include<iostream>
using namespace std;

int sqrt(int n){
    long long int s = 0;
    long long int e = n;
    long long int mid = s+(e-s)/2;
    long long int ans = -1;
    while(s <= e){
        long long int squre = mid*mid;
        if(squre == n){
            return mid;
        }
        else if(squre < n){
            ans = mid;
            s = mid+1;
        }
        else {
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

double precision(int n, int precision, int tempsol){
    double fact = 1;
    double ans = tempsol;
    for(int i=0; i<precision; i++){
        fact = fact/10;
        for(double j = ans; j*j<n; j=j+fact){
            ans = j;
        }
    }
    return ans;
}

int main(){
    cout<<endl;
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<endl;
    int tempsol = sqrt(n);
    cout<<"The answer is: "<<precision(n, 3, tempsol);
    cout <<endl;
    cout << endl;
    return 0;
}