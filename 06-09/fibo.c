#include<stdio.h>
int fibo(int n){
	if(n <= 2) return n-1;
	int a = 0;
	int b = 1;
	int c;
	for(int i = 3; i <= n; i++){
		c = (a + b) % 1000;
		a = b;
		b = c;
	}
	return c;
}
int main(){
	int n = 100;
	for(int i = 1; i <= n; i++)
	printf("%d ", fibo(i));
	printf("\n");
	return 0;
}