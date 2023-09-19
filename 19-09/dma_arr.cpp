#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n = 500;
	// int arr[n];
	int * arr;
	arr = new int[n];
	// n = sizeof(arr)/sizeof(arr[0]);
	memset(arr, 1, sizeof(arr[0]) * n);
	for(int i = 0; i < n; i++){
		// arr[i] = i+1;
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}