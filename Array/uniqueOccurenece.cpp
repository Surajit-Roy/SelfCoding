#include<iostream>
using namespace std;
bool uniqueOcc(int arr[], int n){
    int firstArr[100] = { 0 };
	int secondArr[100] = { 0 };

	for (int i = 0; i < n; i++)
	{
		firstArr[arr[i]]++;
	}

	for (int i = 0; i < 100; i++)
	{
		if (firstArr[i]) {
			secondArr[firstArr[i]]++;
			if (secondArr[firstArr[i]] > 1)
				return false;
		}
	}
	return true;
}

int main(){
    int arr[6]={1,2,3,3,2,3};
    cout<<uniqueOcc(arr, 6);
    return 0;
}