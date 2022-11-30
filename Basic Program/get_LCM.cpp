#include<iostream>
using namespace std;
int main(){
    int n1, n2, minMultiple;
    cout << "Enter two positive integers-> ";
    cin >> n1 >> n2;
    minMultiple = (n1 > n2) ? n1 : n2;
    while(1){
        if(minMultiple%n1 == 0 && minMultiple%n2 == 0){
            cout << "The LCM of " << n1 <<" and "<< n2 << " is-> " << minMultiple;
            break;
        }
        ++minMultiple;
    }
    return 0;
}

// output: 

// Enter two positive integers-> 7 5
// The LCM of 7 and 5 is-> 35