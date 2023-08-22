#include<stdio.h>
#define square(x) #x
int main(){
	int a = 13;
	printf("%s\n", square(a));
	return 0;
}