#include<iostream>
using namespace std;
int main(){
	int a1[10];
	cout<<sizeof(a1)<<endl;
	int n = sizeof(a1)/sizeof(a1[0]);
	for(int i = 0; i < n; i++){
		cout<<a1[i]<<" ";
	}cout<<endl;
	int arr[100000];
	cout<<arr<<endl;
	return 0;
}