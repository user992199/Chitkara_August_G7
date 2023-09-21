#include<iostream>
using namespace std;
int main(){
	int * p;
	for(int i = 0; i < 100; i++){
		p = new int[100000000];
		if(i == 99) break;
		delete []p;
	}
	cout<<p[9999999]<<endl;
	return 0;
}