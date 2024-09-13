#include<stdio.h>
#include<stdlib.h>
#define max 10

int stk[max],top=-1;
void dectobin(int n);
void main()
{
	int n;
	printf("\n Decimal no");
	scanf("%d",&n);
	dectobin(n);
}
void dectobin(int n)
{
	while(n!=1)
	{
		top++;
		stk[top]=n%2;
		n=n/2;
	}
}
	int i;
	top++;
	stk[top]=n;
	i=top;
while(i!=0);
{
	printf("%d",stack[i]);
	i--;
}
