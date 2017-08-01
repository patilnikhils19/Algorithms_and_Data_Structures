#include<stdio.h>
#include<stdlib.h>
#define Max 15

int queue[Max];
int front = 0;
int rear = -1;

int isEmpty(){
	if()
}

int isFull(){
	if (rear == Max -1){
		printf("Queue is Full\n");
		return 1;
	}
	else{
		return 0;
	}
}

void enqueue(int data){
	if(isFull == 1){
		printf("Queue is full\n");
	}
	else{
		queue[front] = data;
		rear = rear+1;
	}
}

int dequeue(){
	if(isEmpty == 1){
		printf("Empty Queue \n");
		return -1;
	}
	else{
		int d = queue[front];
		front = front+1;
		return d;
	}

}

void main(int argc, char* args[]){
	isEmpty();
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	printf("data is : %d \n", dequeue());

}
