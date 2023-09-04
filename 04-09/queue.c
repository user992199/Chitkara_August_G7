#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
#define queue_size 5
typedef struct queue{
	int arr[queue_size];
	int f;
	int b;
	int cap;
	int cs;
}queue;
void init_queue(queue * q){
	q -> f = q -> b = -1;
	q -> cap = queue_size;
	q -> cs = 0;
}
void push(queue * q, int data){
	if(q -> cs == q -> cap){
		printf("overflow\n");
		return;
	}
	if(q -> cs == 0) q -> f = 0;
	q -> b = (q -> b + 1) % q -> cap;
	q -> arr[q -> b] = data;
	(q -> cs)++;
}
void pop(queue * q){
	if(q -> cs == 0) return;
	q -> f = (q -> f + 1) % q -> cap;
	if(q -> cs == 1) q -> f = q -> b = -1;
	(q -> cs)--;
}
int front(queue * q){
	if(q -> cs == 0) return INT_MIN;
	return q -> arr[q -> f];
}
int size(queue * q){
	return q -> cs;
}
bool empty(queue * q){
	return q -> cs == 0;
}
int main(){
	// printf("%d\n", INT_MAX);
	// printf("%d\n", INT_MIN);
	queue q;
	init_queue(&q);
	int i = 0;
	for(; i < 10; i++){
		push(&q, i+1);
	}
	while(!empty(&q)){
		printf("%d ", front(&q));
		pop(&q);
	}
	printf("\n");
	pop(&q);
	pop(&q);
	pop(&q);
	for(; i < 20; i++){
		push(&q, i+1);
	}
	while(!empty(&q)){
		printf("%d ", front(&q));
		pop(&q);
	}
	printf("\n");
	return 0;
}