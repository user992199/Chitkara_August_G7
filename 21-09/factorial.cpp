#include<iostream>
using namespace std;
int fact(int n){
	if(!n) return 1;
	return n * fact(n-1);
}
int factorial(int n){
	// base case
	if(n == 0) return 1;
	// recursive case
	int ss = factorial(n-1);
	int ans = n * ss;
	// final soln
	return ans;
}
int main(){
	for(int i = 0; i <= 10; i++)
		cout<<i<<": "<<factorial(i)<<endl;
	return 0;
}