#include<iostream>
using namespace std;
int main(){
	int i[3];
	int * p1 = &(i[0]);
	int * p2 = &(i[2]);
	// cout<<p1+p2<<endl;
	cout<<p1 - p2<<endl;
	cout<<p2 - p1<<endl;
	cout<<p1 - 1<<endl;
	cout<<p1<<endl;
	cout<<p1 + 1<<endl;
	return 0;
}