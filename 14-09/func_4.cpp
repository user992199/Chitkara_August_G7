#include<iostream>
using namespace std;
int add(int, int);
void add_2(int a, int b);
int main(){
	add_2(1, 4);
	cout<<add(1, 5)<<endl;
	return 0;
}
int add(int a, int b){
	return a + b;
	add_2(a, b);
}
void add_2(int a, int b){
	cout<<"answer is:\n";
	return;
	add(a, b);	
}