#include<iostream>
using namespace std;

int main(){
	// int arr[][] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	// int arr[][5] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	// int arr[][5] = {{1, 2}, {3, 4, 5}, {1, 2, 3, 4, 6}};
	// int arr[][4] = {{1, 2}, {3, 4, 5}, 6, 7, 8, 9, 10};
	// int arr[][4] = {1, 2, {3, 4, 5}, 6, 7, 8, 9, 10};
	// int arr[][2] = {1, 2, {3, 4}, 5, 6, 7, 8, {9}, 10, {11}};
	// int arr[][2] = {1, 2, {3, 4}, 5, 6, 7, 8, {9}, 10};
	// int arr[][] = {};
	int arr[][2] = {};
	cout<<sizeof(arr)<<endl;
	cout<<sizeof(arr[0])<<endl;
	cout<<sizeof(arr[0][0])<<endl;
	int row = sizeof(arr)/sizeof(arr[0]);
	int col = sizeof(arr[0])/sizeof(arr[0][0]);
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
	cout<<"EOP\n";
	return 0;
}