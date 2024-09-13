#include<stdio.h>
#include<stdlib.h>
#define Max 5
int dq[Max],front=-1,rear=-1;
int isfull();
int isEmpty();
void insert_rear();
void delete_front();
void delete_rear();
void Traversal();
void main()
{
	int option;
	do
	{
		printf("\n Input Restricted Deque");
		printf("\n 1. Insert at rear");
		printf("\n 2. delete from rear");
		printf("\n 3. delete from front");
		printf("\n 4. Traversal");
		printf("\n 5. Exit");
		printf("\n Enter your option");
	  scanf("%d",&option);
	  switch(option)
	  	{
			case 1:{inert_rear();break;}
	  	case 2:{delete_rear();break;}
	  	case 3:{delete_front();break;}
	  	case 4:{Traversal();break;}
	   	}
	  }
	
		while(option!=5);
}
int isfull()
{
	
	if(front==(rear+1)%Max)
	return 1;
	else return 0;
}
int isempty()
{
	if(front==-1)
	return 1;
	else return 0;
}
void insert_rear()
{
	int val;
	if(isfull())
	printf("\n Overflow");
	else
	{
		printf("\n Enter the value to be added: ");
		scanf("%d",&val);
		if (isempty())
		front=rear=0;
		else
		rear=(rear+1)%Max;
		dq[rear]=val;
	}
}
void delete_front()
{
	if(isempty())
	printf("\n Underflow");
	else
	{
		printf("The deleted element is:%d",dq[front]);
		if(front==rear)
		front=rear=-1;
		else
		front=(front+1)%Max;
	}
}
void delete_rear()
{
	if(isempty())
	printf("\n Underflow");
	else
	{
	
		printf("The deleted element is:%d",dq[rear]);
		if(front==rear)
		front=rear=-1;
		else if (rear==0)
		rear=Max-1;
		else
		rear=rear-1;
	}
}
void Traversal()
{
	int i;
	if(isempty())
	printf("\n Deque is empty");
	else
	{
		for(i=front;i!=rear;(i=(i+1)%Max))
		printf("%d\t",dq[i]);
		printf("%d\t",dq[rear]);
	}
}

