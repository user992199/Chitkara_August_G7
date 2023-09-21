#include<iostream>
using namespace std;
int f(int n){
	if(n == 1 or n == 2) return n-1;
	return f(n-1) + f(n-2);
}
int fibo(int n){
	// base case
	if(n == 1 or n == 2) return n-1;
	// recursive case
	int sp1 = fibo(n-1);
	int sp2 = fibo(n-2);
	// return ans
	return sp1 + sp2;
}
int main(){
	for(int i = 1; i <= 10; i++)
		cout<<fibo(i)<<" ";
	cout<<endl;
	// cout<<fibo(0)<<endl;
	cout<<f(9)<<endl;
	return 0;
}