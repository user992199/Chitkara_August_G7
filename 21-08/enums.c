#include<stdio.h>
enum days {Mon, Tues, Wed=15, Thurs=-3, Fri, Sat, Sun};
int main(){
	enum days d1 = Fri;
	printf("%d\n", d1);
	printf("%d\n", sizeof(d1));
	return 0;
}