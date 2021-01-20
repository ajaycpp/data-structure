/*
Design and Developed by Dr. Ajay Kumar
*/
#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#define SIZE 5
int stack[SIZE];
int top=-1;

bool isFull()
{
	if(top==SIZE-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isEmpty()
{
	if(top==-1)
	{
		return true;	
	}
	else
	{
		return false;
	}
}

void push(int ele)
{
	if(isFull())
	{
		printf("\nStack is full");
	}
	else
	{
		top++;
		stack[top]=ele;
		printf("\n%d is pushed successfully",ele);
	}
}

void pop()
{
	if(isEmpty())
	{
		printf("\nStack is empty...");
	}
	else
	{
		int ele=stack[top];
		printf("\nPopped element is: %d", ele);
		top--;
	}
}

void peek()
{
	if(isEmpty())
	{
		printf("\nStack is empty...");
	}
	else
	{
		int ele=stack[top];
		printf("\nElement peeked is %d: ",ele);
	}
}

void traverse()
{
	int i;
	if(isEmpty())
	{
		printf("\nStack is empty...");
	}
	else
	{
		for(i=0; i<=top;i++)
		{
			printf("%d\n",stack[i]);
		}
	}
	printf("\n");


}


int length()
{
	printf("\nThe current size of stack is.... ",top+1);
}

int main() {
	int op, x, ele;
	while(true)
	{
	printf("\n1. Push()");
	printf("\n2. Pop()");
	printf("\n3. Peek()");
	printf("\n4. Traverse()");
	printf("\n5. Length()");
	printf("\n6. Exit");
	
	printf("\nEnter the operation you want to perform:");
	scanf("%d",&op);
	switch(op)
	{
		case 1: printf("\nEnter the element:");
		scanf("%d",&ele);
		push(ele);
		break;
		case 2: pop();
				break;
		case 3: peek();
				break;
		case 4: traverse();
				break;
		case 5: length();
				break;
		case 6: return 0;
		default: printf("\nYou entered wrong value!!!");
		
	}
}
	
	return 0;
}
