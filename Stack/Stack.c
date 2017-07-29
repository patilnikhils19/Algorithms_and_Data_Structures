#include<stdio.h>
#include<stdlib.h>
#define MAX 20

int Stack[MAX];
int Top = -1;

int isFull(){
	if(Top == MAX-1){
		return 1;
	}
	else return 0;
}

int isEmpty(){
	if(Top == -1){
		return 1;
	}
	else return 0;
}

void top(){
	if(!isEmpty()){
		printf("Top element is %d\n",Stack[Top]);
	}
	else{
		printf("Stack is Empty");
	}
}
void push(int data){
        if(Top == MAX-1){
                printf("Stack is Full");
        }
	else{
		Top = Top +1;
		Stack[Top] = data;
	}
}

int pop(){
        if(!isEmpty()){
                int data = Stack[Top];
		//Stack[Top] = NULL;
		Top = Top-1;
		return data;
        }
        else{
                printf("Stack is Empty");
       }
}

void main(int argc, char* argv[]){

	int popdata;
	push(1);
	push(2);
	push(3);
	push(8);
	popdata = pop();
	printf("pop data is %d\n", popdata);
	top();
}
