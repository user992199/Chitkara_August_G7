#include<iostream>
using namespace std;
int main(){
	int * p = new int;
	*p = 15;
	cout<<*p<<endl;
	cout<<p<<endl;
	delete p;
	cout<<*p<<endl;
	cout<<p<<endl;
	p = new int;
	cout<<"after 2nd declaration: "<<p<<endl;
	return 0;
}