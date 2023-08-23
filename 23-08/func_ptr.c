#include<stdio.h>
int add(int a, int b){
	return a+b;
}
int main(){
	int i1 = 10, i2 = 13;
	// return_type (*ptr_name)(parameter);
	int (*ptr)(int, int);
	ptr = &add;
	printf("%d\n", ptr(i1, i2));
	return 0;
}