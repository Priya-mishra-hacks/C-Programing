
#include<stdio.h>
# include <stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node*lc;
	struct node*rc;
};
typedef struct node bst;
void insert(int x);
void search(int x);
void deletion(int x);
void pre(bst*r);
void in(bst*r);
void post(bst*r);
bst*r;
int main()
{
	int x;
	int ch;
	do
	{
		printf("\n menu \n 1.insert \n 2. search \n 3. delete \n 4.pre \n 5. in \n 6.post \n");
		printf("enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("ener data");
			scanf("%d",&x);
			insert(x);
			break;
			case 2: printf("search element");
			scanf("%d",&x);
			search(x);
			break;
			case 3: printf("element deleted");
			scanf("%d",&x);
			deletion(x);
			break;
			case 4:printf("pre in:");
			pre(r);
			break;
			case 5:printf("in in:");
			in(r);
			break;
			case 6:printf("post in:");
			post(r);
		}
	}while(ch!=7);
	printf("thanku");
	
}
void insert(int x)
{
	bst*temp;
	temp=(bst*)malloc(sizeof(bst));
	temp->data=x;
	temp->lc=NULL;
	temp->rc=NULL;
	if(r==NULL)
	r=temp;
	else
	{
		bst*t,*p=r;
		while(p!=NULL)
		{
			t=p;
			if(x>p->data)
			p=p->rc;
			else if(x<p->data)
			p=p->lc;
			else
			{
				printf("duplicte");
				free(temp);
				return;
			}
		}
		if(x>t->data)
		t->rc=temp;
		else
		t->lc=temp;
	}
	
}
void search(int x)
{
	if(r==NULL)
    printf("empty");
	else
	{
		bst*p=r;
		int n=0;
		while(p!=NULL)
		
		{
			
			n++;
			if(x>p->data)
			p=p->rc;
			else if(x<p->data)
			p=p->lc;
			else
			{
				printf("data found %d",n-1);
			    return;
			}
		}
		
	}printf("not found");
	
}
void deletion(int x)
{
	if(r==NULL)
	printf("empty");
	else
	{
		int flag;
		bst*t,*p=r;
		while(p!=NULL)
		{
			t=p;
			if(x>p->data)
			{
				p=p->rc; flag=1;
			}
			else if(x<p->data)
			{
				p=p->lc; flag=0;
			}
			if(x==p->data)
			{
				if(p->rc==NULL&&p->lc==NULL)
				{
					if(flag==1)
					t->rc=NULL;
					else
					t->lc=NULL;
				}
				else if(p->rc!=NULL&&p->lc==NULL)
				{
					if(flag==1)
					t->rc=p->rc;
					else
					t->lc=p->rc;
				}
				else if(p->rc==NULL&&p->lc!=NULL)
				{
					if(flag==1)
					t->rc=p->lc;
					else
					t->lc=p->lc;
				}
				else
				{
					if(p==r)
					r=p->rc;
					else
					{
					if (flag==1)
					t->rc=p->rc;
					else
					t->lc=p->rc;
					bst*m;
					m=p->rc;
					while(m->lc!=NULL)
					m=m->lc;
					m->lc=p->lc;
			        }
			        printf("element dleted");
			        free(p);
			        return;
				}
				
			}
		}printf("not found");
	}
	
}
void pre(bst*r)
{
	if(r!=NULL)
	{
		printf("%d",r->data);
		pre(r->lc);
		pre(r->rc);
		
	}
	
}
void in(bst*r)
{
	if(r!=NULL)
	{
		pre(r->lc);
		printf("%d",r->data);
		pre(r->rc);
		
	}
	
}
void post(bst*r)
{
	if(r!=NULL)
	{
		pre(r->lc);
		pre(r->rc);
		printf("%d",r->data);
	
		
	}
	
	
}





