#include<iostream>
using namespace std;
int sum(int arr[], int n){
	int ans = 0;
	for(int i = 0; i < n; i++){
		ans += arr[i];
	}
	return ans;
}
int sum_rec(int arr[], int n, int i = 0){
	// base case
	if(i == n) return  0;
	// recursive case
	int ss = sum_rec(arr, n, i+1);
	// return ans
	return arr[i] + ss;
}
int sum_rec2(int arr[], int n){
	// base case
	if(n == 0) return  0;
	// recursive case
	int ss = sum_rec2(arr, n-1);
	// return ans
	return arr[n-1] + ss;
}
int sum_rec3(int arr[], int n){
	// base case
	if(n == 0) return  0;
	// recursive case
	int ss = sum_rec3(arr + 1, n - 1);
	// return ans
	return arr[0] + ss;
}
int main(){
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<sum(arr, n)<<endl;
	cout<<sum_rec(arr, n)<<endl;
	cout<<sum_rec2(arr, n)<<endl;
	cout<<sum_rec3(arr, n)<<endl;
	return 0;
}