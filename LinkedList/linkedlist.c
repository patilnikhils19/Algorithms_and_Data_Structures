

//Simple LinkedList Implementation
//Author : Nikhil Patil
//Email: patilnikhils19@gmail.com	


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
	int data;
	struct node *next;
};

void printlinkedlist(struct node *head)
{
	while(head != NULL){
		printf("data is  %d \n", head->data);
		head = head->next;
	}
}

void main(int argc, char *argv[])
{
	struct node *first =  (struct node *)malloc(sizeof(struct node));
	struct node *second = (struct node *)malloc(sizeof(struct node));
	struct node *third = (struct node *)malloc(sizeof(struct node));

	first->data = 1;
	first->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	third->next = NULL;
	
	printlinkedlist(first);
	return;
}
