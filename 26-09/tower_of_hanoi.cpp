#include<iostream>
using namespace std;
void toh(int n, char s, char h, char t, int &step){
	// base case
	if(n == 0) return;
	// recursive case
	toh(n-1, s, t, h, step);
	cout<<"#"<<++step<<": "
		<<"Move disk "<<n<<" from "
		<<s<<" to "<<t<<endl;
	// cout<<n<<' '<<s<<' '<<t<<'\n';
	// ++step;
	toh(n-1, h, s, t, step);
}
int main(){
	int n = 20, step = 0;
	toh(n, 'A', 'B', 'C', step);
	cout<<step<<endl;
	return 0;
}