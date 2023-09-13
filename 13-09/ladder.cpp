#include<iostream>
using namespace std;
int main(){
	int arr[3][4] = {
		{1, 2, 3, 4},
		{3, 5, 15, 16},
		{6, 7, 17, 20}
	};
	int m = sizeof(arr)/sizeof(arr[0]);
	int n = sizeof(arr[0])/sizeof(arr[0][0]);
	int i = 0, j = n - 1;
	int key = 7;
	while(i < m and j >= 0){
		if(arr[i][j] == key)
			break;
		if(arr[i][j] > key)
			j--;
		else if(arr[i][j] < key)
			i++;
	}
	if(i == m or j < 0)
		cout<<"Key not found\n";
	else{
		cout<<"row: "<<i+1<<endl;
		cout<<"col: "<<j+1<<endl;
	}
	return 0;
}