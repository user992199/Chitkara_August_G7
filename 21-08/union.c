#include<stdio.h>
union un{
	int i;
	float f;
	char ch;
};
void print_union(union un u1){
	printf("%d\t%f\t%c\n", u1.i, u1.f, u1.ch);
}
int main(){
	union un u1;	print_union(u1);
	u1.i = 10;		print_union(u1);
	u1.f = 3.14;	print_union(u1);
	u1.ch = 'a';	print_union(u1);
	return 0;
}