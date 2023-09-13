#include<iostream>
using namespace std;
int main(){
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
		cout<<endl;
	for(int i = 0; i < n; i++){
		cout<<*(arr + i)<<" ";
	}
	cout<<endl;
	int * p = arr;
	for(int i = 0; i < n; i++, p++){
		cout<<*p<<" ";
	}
	cout<<endl;
	return 0;
}