#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) 
{
	  struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
    NewNode == NULL; 
    NewNode->data = data;
    NewNode->next = NULL;
    return NewNode;
};

// Function to insert a node at the beginning of the list
void insert_Beg(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
    }

// Function to insert a node at the end of the list
void insert_End(struct Node** head, int data) {
    struct Node* NewNode = createNode(data);
    if (*head == NULL) {
        *head = NewNode;
       return;
    }
    struct Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = NewNode;
   }

// Function to delete the first node of the list
void delete_Beg(struct Node** head) {
    if (*head == NULL) {
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
   }

// Function to delete the last node of the list
void delete_End(struct Node** head) {
    if (*head == NULL) {
        
        return;
    }
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }
    struct Node* current = *head;
    struct Node* prev = NULL;
    while (current->next != NULL) {
        prev = current;
        current = current->next;
    }
    free(current);
    prev->next = NULL;
    
}

// Function to traverse and print the linked list
void traverse(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* current = head;
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Test the linked list
int main()
 {
 	struct Node *head;
	    int choice;
while(1)
{
	printf("\n1.create\n");
	printf("\n2.traverse");
	printf("\n3.Insert at the begin");
	printf("\n4.Insert at end");
	printf("\n5.delete at begin\n");
	printf("\n6.delete at end\n");
	printf("\n7.exit\n");
	printf("ENTER YOUR CHOICE:\t");
	scanf("%d",&choice);
	switch(choice)
	{
		case1:{create();
		break;}
		case2:{traverse(head);
		break;}
		case3:{insert_beg();
		break;}
		case4:{insert_end();break;}
		case5:{delete_beg();break;}
		case7:{delete_end();break;}
		case8:{exit(0);break;}
		default:
			printf("\n invalid choice\n");
	}
}
}
    

