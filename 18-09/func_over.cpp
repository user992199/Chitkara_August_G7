#include<iostream>
using namespace std;
void print_ans(int ans){
	cout<<ans<<endl;
}
int print_ans(int ans, int n){
	cout<<ans + n<<endl;
	return ans;
}
int print_ans(float ans){
	cout<<"float: "<<ans<<endl;
}
int main(){
	print_ans(10);
	int a2 = print_ans(10, 5);
	float f = 3.14;
	print_ans(f);
	return 0;
}