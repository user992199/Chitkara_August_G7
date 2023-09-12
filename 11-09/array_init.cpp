#include<iostream>
using namespace std;
int main(){
	// int arr[5] = {1, 2, 3, 4, 5};
	// int arr[10] = {1, 2, 3, 4, 5};
	// int arr[10] = {1};
	// int arr[10] = {};
	int arr[] = {};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<n<<endl;
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}