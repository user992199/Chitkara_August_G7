#include<iostream>
using namespace std;
void bs(int arr[], int n){
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j+1], arr[j]);
			}
		}
	}
}
void bs_part(int arr[], int n, int i = 0){
	// base case
	if(i == n-1) return;
	// recursive case
	for(int j = 0; j < n - i - 1; j++){
		if(arr[j] > arr[j+1]){
			swap(arr[j+1], arr[j]);
		}
	}
	bs_part(arr, n, i+1);
}
int main(){
	int arr[] = {5, 4, 3, 2, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	bs_part(arr, n);
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}