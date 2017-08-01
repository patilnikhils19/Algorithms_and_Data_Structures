#include<stdio.h>
#include<stdlib.h>
#define Max 15

int queue[Max];
int front = 0;
int rear = -1;

int isEmpty(){
	if(rear == -1 || rear < front){
		return 1;
	}
	else{
		return 0;
	}
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

int peek(){
	if (isEmpty() == 1){
		printf("No data\n");
	}
	else{
		return queue[front];
	}
}
void enqueue(int data){
	if(isFull() == 1){
		printf("Queue is full\n");
	}
	else{
		rear =  rear +1;
		queue[rear] = data;
	}
}

int dequeue(){
	if(isEmpty() == 1){
		printf("Empty Queue \n");
		return -1;
	}
	else{
		int d = queue[front];
		front = front +1;
		if (front == Max){
			front = 0;
		}
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
	printf("Dequeued data is : %d \n", dequeue());
	printf("Dequeued data is : %d \n", dequeue());
	printf("Dequeued data is : %d \n", dequeue());
	printf("Peek fetch is :  %d\n", peek());
	printf("Dequeued data is : %d \n", dequeue());
	printf("Dequeued data is : %d \n", dequeue());
	printf("Dequeued data is : %d \n", dequeue());
}
