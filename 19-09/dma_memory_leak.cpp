#include<iostream>
using namespace std;
void print_garbage(int n){
	int * ptr = new int[n];
	for(int i = 0; i < n; i++){
		cout<<ptr[i]<<" ";
	}cout<<endl;
	// syntax
	// delete []address;
	delete []ptr;
}
int main(){
	print_garbage(10);
	print_garbage(100);
	return 0;
}