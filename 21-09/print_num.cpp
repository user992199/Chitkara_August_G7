#include<iostream>
using namespace std;
void pn(int n){
	// base case
	if(!n) return;
	// recursive case
	cout<<n<<" ";
	pn(n-1);
}
void p1n(int n){
	if(!n) return;
	p1n(n-1);
	cout<<n<<" ";
}
int main(){
	pn(10);
	cout<<endl;
	p1n(10);
	cout<<endl;
	return 0;
}