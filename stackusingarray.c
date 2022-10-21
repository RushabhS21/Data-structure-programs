#include<stdio.h>
#define N 20
typedef struct stack
{
	int a[N];
	int top;
}stack;

void push(stack *s,int x)
{
	if(s->top==N-1)
		printf("\nStack Overflow...");
	else
	{
		s->top=s->top+1;
		s->a[s->top]=x;
	}
}

int isempty(stack *s)
{
	if(s->top==-1)
		return 1;
	else
		return 0;
}

int pop(stack *s)
{
	int x;
	if(isempty(s))
	{
		return -1;
	}
	else
	{
		x=s->a[s->top];
		s->top=s->top-1;
		return x;
	}
}

int peek(stack *s)
{
	if(isempty(s))
		return -1;
	else
		return s->a[s->top];
}

void display(stack *s)
{
	int i;
	if(isempty(s))
	{
		printf("\nStack is empty...");
	}
	else
	{
		for(i=s->top;i>=0;i--)
		{
			printf("\n%d",s->a[i]);
		}
	}
}
