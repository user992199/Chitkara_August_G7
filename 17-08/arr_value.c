#include<stdio.h>
struct student{
	int arr[5];
};
void func(struct student st1){
	for(int i = 0; i < 5; i++){
		st1.arr[i] = 0;
	}
	for(int i = 0; i < 5; i++){
		printf("%d ", st1.arr[i]);
	}
	printf("\n");
}
int main(){
	struct student st1;
	for(int i = 0; i < 5; i++){
		st1.arr[i] = i+1;
	}
	func(st1);
	for(int i = 0; i < 5; i++){
		printf("%d ", st1.arr[i]);
	}
	printf("\n");
	return 0;
}