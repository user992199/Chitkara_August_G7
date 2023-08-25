#include<stdio.h>
#include<stdarg.h>
int add(int n, ...){
	int ans = 0;
	va_list ptr;
	va_start(ptr, n);
	for(int i = 0; i < n; i++){
		ans += va_arg(ptr, int);
	}
	va_end(ptr);
	return ans;
}
int main(){
	printf("%d\n", add(9, 1, 2, 3, 4, 5, 6, 7, 8, 9));
	printf("%d\n", add(3, 10, 20, 30));
	return 0;
}