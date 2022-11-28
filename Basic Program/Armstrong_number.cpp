// 371 = (3*3*3)+(7*7*7)+(1*1*1)    
// where:    
// (3*3*3)=27    
// (7*7*7)=343    
// (1*1*1)=1    
// So:    
// 27+343+1=371 

#include<iostream>
using namespace std;

int main(){
    int n, r, temp;
    int sum = 0;
    cout <<"Enter a number-> ";
    cin >> n;
    temp = n;
    while(n>0){
        r = n%10;
        sum = sum+(r*r*r);
        n = n/10;
    }
    if(temp == sum)
        cout << "Number is Armstrong." <<endl;
    else
        cout << "Number is Not Armstrong." << endl;
    return 0;
}

// output: 

// Enter a number-> 321
// Number is Not Armstrong.

// Enter a number-> 371
// Number is Armstrong.