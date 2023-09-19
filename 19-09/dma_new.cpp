#include<iostream>
using namespace std;
int main(){
	int * p = new int;
	*p = 15;
	p = new int;
	return 0;
}