#include<stdio.h>
#include<stdlib.h>

//Strcuture of a Node
struct Node
{
	int data;
	struct Node *next;
};

//Function to print the values of nodes in the linkedlist
void printList(struct Node *node)
{
	
	while(node != NULL)
	{
		printf(" %d ", node->data);
		node = node->next;
	}
	printf("\n");
}



//Function to add the new node at the front/head of the linkedlist
void push(struct Node **head_ref,int data)
{
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));

	node->data = data;

	node->next = (*head_ref);

	(*head_ref) = node;
}

//Function to add a new node after the given point(node) of the list
void insertInBetween(struct Node *node_ref,int data)
{

	if(node_ref == NULL)
	{
		printf("The given node is not");
	}

	struct Node *node = (struct Node*)malloc(sizeof(struct Node));

	node->data = data;

	node->next = node_ref->next;

	node_ref->next = node;
}


//Function to add the node at the end of the list
void insertAtEnd(struct Node **node_ref,int data)
{

	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	struct Node *last = *node_ref;	
	
	node->data = data;

	node->next = NULL;

	if(*node_ref == NULL)
	{
		*node_ref = node;
	}
	
	while(last->next != NULL)
	{
		last = last->next;
	}
	last->next = node;

}

int main()
{
	struct Node *head = NULL;
	struct Node *second = NULL;
	struct  Node *third = NULL;
	struct  Node *fourth = NULL;

	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	fourth = (struct Node*)malloc(sizeof(struct Node));

	head->data = 10;
	head->next = second;

	second->data = 20;
	second->next = third;

	third->data = 30;
	third->next = NULL;

	printf("Before adding the node                            :");
	printList(head);
	
	push(&head,05);

	printf("After adding a node at the head(front) of the list:");
	printList(head);

	insertInBetween(second,25);

	printf("After adding a node after given node of the list  :");
	printList(head);

	insertAtEnd(&third,35);

	printf("After adding a node at the end of the list  	  :");
	printList(head);

	insertAtEnd(&fourth,40);

	printf("Adding the node in an empty linked list  	  :");
	printList(fourth);

	return 0;
}


