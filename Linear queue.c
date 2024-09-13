#include<stdio.h>
#include<stdlib.h>
# define Max 5
int isEmpty();
int isFull();
void Enqueue();
void Dequeue();
void F_element();
void R_element();
void Traversal();
int q[Max],Front=-1,Rear=-1,val;
int isEmpty()
{
	if(Front==-1)
	return 1;
	else
	return 0;
}
int isFull()
{
	if(Rear==Max-1)
	return 1;
	else return 0;
}
void F_element()
{
	if(isEmpty())
	printf("/n Queue is Empty");
	else
	printf("\n Front element is: %d",q[Front]);
}
void R_element()
{
	if(isEmpty())
	printf("/n Queue is Empty");
	else
	printf("\n Rear element is %d",q[Rear]);
}
void Enqueue()
{
	int val;
	if(isFull())
	printf("Queue Overflow\n");
	else
	{
		printf ("Enter value=");
		scanf("%d",&val);
		if(isEmpty())
		Front=Rear=0;
		else
		Rear=Rear+1;
		q[Rear]=val;
	}
}
void Dequeue()
{
	if(IsEmpty())
	printf("Queue underflow\n");
	else
	{
		printf("Deleted Element:%d\n",q[Front]);
		if(Front==Rear);
		Front=Rear=-1;
    else 
		Front=Front+1;
	}
}
void Traversal()
{
	int i;
	if(isEmpty())
	printf("Queue is Empty\n");
	else
	{
		printf("Queue IS:\n");
		for(i=Front;i<=Rear;i++)
		printf("%d\t",q[i]);
	}
}
void main()
{
	int choice;
	while(1)
	{
		printf("\n\n-----------LINEAR QUEUE\n");
		printf("1.INSERT\n");
		printf("2.DELETE\n");
		printf("3.DISPLAY\n");
		printf("4.FRONT ELEMENT\n");
		printf("5.REAR ELEMENT\n");
		printf("6.EXIT\n");
		printf("--------------------------\n");
		printf("1.Enter your choice \n");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:{Enqueue();break;}
			case 2:{Dequeue();break;}
			case 3:{Traversal();break;}
			case 4:{F_element();break;}
			case 5:{R_element();break;}
			case 6:exit(0);
			default:printf("Invalid choice\n");
		}
	}
}
