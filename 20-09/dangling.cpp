#include<iostream>
using namespace std;
int main(){
	int * p;
	p = 0;
	p = new int;
	*p = 7;
	// cout<<p<<endl;
	delete p;
	// cout<<p<<endl; // dangling pointer
	p = 0;
	// cout<<22 * 2 * (*p) / 7<<endl;
	// cout<<*p<<endl;
	cout<<p<<endl;
	return 0;
}