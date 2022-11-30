#include<iostream>
using namespace std;
int main(){
    int y;
    cout << "Enter year-> ";
    cin >> y;
    if(y%4 == 0){
        if(y%100 == 0){
            if(y%400 == 0)
                cout << y << " is a Leap Year.";
            else
                cout << y << " is not a Leap Year.";
        }
        else
            cout << y << " is a Leap year.";
    }
    else
        cout << y << " is not a Leap Year.";
    return 0;
}

// output: 

// Enter year-> 2022
// 2022 is not a Leap Year.

// Enter year-> 2024
// 2024 is a Leap year.