#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
#define MAX 6
int cq[MAX];
int front = -1,rear = -1;
void insert(int);
void delete();
void display();
void main(){
int ch, item;
while(1){
printf("~~Main Menu~~");
printf("\n=> 1. Insertion and Overflow Demo");
printf("\n=> 2. Deletion and Underflow Demo");
printf("\n=> 3. Display");
printf("\n=> 4. Exit");
printf("\nEnter Your Choice: " );
scanf("%d", &ch);
           __fpurge(stdin);
switch(ch)
{
	case 1 : printf("Enter the element to be inserted: ");
scanf("%d", &item);
insert(item);
break;
	case 2 :  delete();
break;
	case 3 : display();
break;
	case 4: exit(0);
		default: printf("Please enter a valid choice\n");
     }
   }
}
void insert(int item)
{
if(front == (rear+1)%MAX){
printf("~~~Circular Queue Overflow~~~\n");
}else{
if(front == -1){
front = rear = 0;
}else
rear = (rear+1)%MAX;
cq[rear] = item;
}
}
void delete()
{
char item;
if(front == -1)
{
printf("~~~Circular Queue Underflow~~~\n");

}else{
item = cq[front];
printf("Deleted element from the queue is: %d\n",item);



if(front == rear)
	front = rear = -1;
	else 
	front = (front +1)%MAX;

}
}
void display(){
	int i;
	 if(front == -1){
		 printf("~~~Circular Queue Empty~~~\n");
	 }
	else{
		printf("Circular Queue contents are:\n");
        for(i = front; i != rear ; i= (i+1)%MAX)
			{
				printf("%d ",cq[i]);
			}
		printf("%d\n",cq[i]);
	}
	
}











