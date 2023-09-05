#include<iostream>
using namespace std;
int main(){
	label:
	cout<<"label\n";
	goto label;
	cout<<"Before the label\n";
	cout<<"After the label\n";
	return 0;
}