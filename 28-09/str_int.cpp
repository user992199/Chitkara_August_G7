#include<iostream>
#include<cstring>
using namespace std;
int str_int(string s){
	if(s[0] == '-'){
		s[0] = '0';
		return -str_int(s);
		return -str_int(s.substr(1));
	}
	// base case
	if(s.size() == 0) return 0;
	// recursive case
	int last_digit = s.back() - '0';
	s.pop_back();
	return str_int(s) * 10 + last_digit;
}
int main(){
	string s = "12345";
	cout<<str_int(s) + 5<<endl;
	cout<<str_int("-12345") + 5<<endl;
	return 0;
}