#include<stdio.h>
#include<stdbool.h>
#define SIZE 5
int queue[SIZE];
 int front=0, rear=0;

bool isFull()
{
	if(rear==SIZE)
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
	if(rear==front)
	{
		return true;	
	}
	else
	{
		return false;
	}
}

void insert(int ele)
{
	if(isFull())
	{
		printf("\nQueue is full");
	}
	else
	{
		queue[rear]=ele;
		printf("\n%d is inserted successfully",ele);
		rear++;
	}
}

void deleteq()
{
	int i;
	if(isEmpty())
	{
		printf("\nQueue is empty...");
	}
	else
	{
		int ele=queue[front];
		printf("\nElement %d is deleted...",ele);
		for(i=0;i<rear;i++)
		{
			queue[i]=queue[i+1];
		}
		rear--;
	}
}

void peek()
{
	if(isEmpty())
	{
		printf("\nQueue is empty...");
	}
	else
	{
		int ele=queue[front];
		printf("\nElement peeked is : ",ele);
	}
}

void traverse()
{
	int i;
	if(isEmpty())
	{
		printf("\nQueue is empty...");
	}
	else
	{
		for(i=0; i<rear;i++)
		{
			printf("%d ",queue[i]);
		}
	}
	printf("\n");


}


int length()
{
	printf("\nThe current size of queue is ",rear);
}

int main() {
	int op, ele;
	while(true)
	{
		printf("\n1. Insert()");
		printf("\n2. Delete()");
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
					insert(ele);
					break;
			case 2: deleteq();
					break;
			case 3: peek();
					break;
			case 4: traverse();
					break;
			case 5: length();
					break;
			case 6: return 0;
			default: printf("\nYou have entered wrong value!!!");
		
	}
}
	
	return 0;
}
