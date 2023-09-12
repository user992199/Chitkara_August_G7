#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	// int arr[5] = {1, 5, 2, 6, 8, 2 ,5, 7, 8, 10};
	// int n1 = 10;
	// int arr[n1] = {1, 5, 2, 6, 8, 2 ,5, 7, 8, 10};
	int arr[10] = {1, 5, 2, 6, 8 ,2 ,5, 7, 8, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<n<<endl;
	sort(arr, arr+n);
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}