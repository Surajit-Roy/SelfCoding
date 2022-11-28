#include<iostream>
using namespace std;

int main(){
    int n, r, sum = 0, temp;
    cout << "Enter Number to check Palindrom or Not-> ";
    cin >> n;
    temp = n;
    while(n>0){
        r = n%10;
        sum = (sum*10)+r;
        n = n/10;
    }
    if(temp == sum)
        cout << "Number is Palindrom." << endl;
    else
        cout << "Number is Not Palindrom." << endl;
    return 0;
}

// output:

// Enter Number to check Palindrom or Not-> 121
// Number is Palindrom.