#include<stdio.h>
struct date{
	int d : 10;
	int m : 10;
};
int main(){
	struct date today;
	printf("%d\n", sizeof(today));
	today.d = 1025;
	printf("%d\n", today.d);
	return 0;
}