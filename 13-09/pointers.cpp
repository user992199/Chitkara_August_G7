#include<iostream>
using namespace std;
int main(){
	int i = 10;
	int * p;
	p = &i;
	int *p2 = &i;
	cout<<*p<<endl;
	*p = 13;
	cout<<i<<endl;
	return 0;
}