#include<iostream>
using namespace std;
inline int add(int a, int b){
	return a + b;
}
static inline void add_2(int a, int b){
	cout<<"answer is:\n";
	return;
	cout<<a + b<<endl;
}
int main(){
	add_2(1, 4);
	cout<<add(1, 5)<<endl;
	return 0;
}