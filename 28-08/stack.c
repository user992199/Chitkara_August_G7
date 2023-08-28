#include<stdio.h>
#include<stdbool.h>
typedef struct stack{
	int arr[50];
	int top;
	int cap;
}stack;
void init_stack(stack *s1){
	s1 -> top = -1;
	s1 -> cap = 50;
}
void push(stack *s1, int data){
	if(s1 -> top >= s1 -> cap - 1){
		printf("Stack Overflow\n");
		return;
	}
	s1 -> top = s1 -> top + 1;
	s1 -> arr[s1 -> top] = data;
}
void pop(stack *s1){
	if(s1 -> top <= -1){
		printf("Stack Underflow\n");
		return;
	}
	s1 -> top = s1-> top - 1;
}
int top(stack *s1){
	if(s1 -> top <= -1) return -1;
	return s1 -> arr[s1 -> top];
}
bool empty(stack *s1){
	return s1 -> top <= -1;
}
int size(stack *s1){
	return s1 -> top + 1;
}
int main(){
	stack s1;
	init_stack(&s1);
	for(int i = 0; i < 51; i++){
		push(&s1, i+1);
	}
	while(!empty(&s1)){
		printf("%d ", top(&s1));
		pop(&s1);
	}
	printf("\n");
	pop(&s1);
	return 0;
}