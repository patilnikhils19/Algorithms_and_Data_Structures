 
//Insert Node at begining, end, and at given location in Linked List
//Author: Nikhil Patil
//Email: patilnikhils19@gmail.com

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
	int data;
	struct node *next;
};

void insertAtBegining(struct node **head,int data){
	struct node *new =  (struct node *)malloc(sizeof(struct node));
	new->data = data;
	if (*head == NULL){
		new->next = NULL;
		*head = new;
	}
	else{
		new->next = *head;
		*head = new;  
	}

}

void insertAtEnd(struct node **head, int data){
	struct node *new = (struct node *)malloc(sizeof(struct node));
	new->data = data;
	struct node *n = *head;
	if(*head == NULL){
		new->next = NULL;
		*head = new;
	}
	while(n->next != NULL){
		n = n->next;
	}
	new->next = NULL;
	n->next =  new;
	
}

void insertAt(struct node **head, int data,  int location){

}

void printlist(struct node *n){
	while(n != NULL){
		printf("%d\n", n->data);
		n = n->next;
	}
}
void main(int argc, char *args[]){

	struct node *head =  (struct node *)malloc(sizeof(struct node));
	struct node *second = (struct node *)malloc(sizeof(struct node));
	//Initialize LinkedList with some Values
	head->data = 1;
	head->next = second;
	second->data = 2;
	second->next = NULL;
	printf("Initial List\n");
	printlist(head);
	// Add Node at begining
	insertAtBegining(&head, 3);
	printf("After inserting at begining\n");
	printlist(head);
	// Add Node at end
	insertAtEnd(&head, 4);
	printf("After inserting at End\n");
	// Add Node at given Location
	//insertAt(&head, 4, 3);
	printlist(head);
	return;
}
	
