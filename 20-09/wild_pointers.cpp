#include<iostream>
using namespace std;
int main(){
	int * p; // wild pointer
	// cout<<*p<<endl;
	p = NULL; // NULL pointer
	p = 0;
	p = nullptr;
	cout<<*p<<endl; 
	return 0;
}