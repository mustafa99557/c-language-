#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
char ssn[25],name[25],dept[50], designation[25];
   int sal;
   long long int phone;
struct node *llink;
struct node *rlink;
};
typedef struct node* NODE;
NODE first = NULL;
int count = 0;
NODE create()
{NODE enode;
   enode = (NODE)malloc(sizeof(struct node));
     if(enode == NULL)
	 {
		 printf("Running out of memory");
		 exit(0);
	 }
printf("Enter ssn, Name, Department, Designation, Salary, PhoneNo of employee: ");
 scanf("%s %s %s %s %d %lld",enode->ssn,enode->name,enode->dept,enode->designation,&enode->sal,&enode->phone);
 enode->llink = NULL;
 enode->rlink = NULL;
 count++;
return enode;
}
NODE insertfront()
{
NODE temp;
temp = create();
if(first == NULL)
{  return temp;     }
temp->rlink = first;
first->llink = temp;
 return temp;
}
void display()
			while(cur != NULL)
			{
				printf("SSN:%s| Name:%s| Department:%s| Designation:%s| Salary:%d| Phone no:%lld",cur->ssn,cur->name,cur->dept,cur->designation,cur->sal,cur->phone);
				cur = cur->rlink;
				nodeno++;
				printf("\n");
				}
			printf("No of employees: %d\n",count);
			
		}
	}
	NODE deletefront()
	{
		NODE temp;
		if(first == NULL)
		{ printf("DLL is empty\n");
		  return NULL;
		}
		if(first->rlink == NULL)
		{
			printf("employee with ssn: %s is deleted\n",first->ssn);
			free(first);
			count--;
			return NULL;
		}
		temp = first;
		first = first->rlink;
		temp->rlink = NULL;
		first->llink = NULL;
		printf("employee with ssn: %s is deleted\n",temp->ssn);
		free(temp);
	count--;
	NODE deleteend()
	{
		NODE prev,cur;
		if(first == NULL)
		{
			printf("DLL is empty\n");
			return NULL;
		}
		if(first->rlink == NULL)
		{
			printf("employee with ssn: %s is deleted\n",first->ssn);
			free(first);
			count--;
			return NULL;
		}
		prev=NULL;
		cur=first;
		while(cur->rlink!=NULL)
			{
				prev=cur;
				cur = cur->rlink;
			}
		cur->llink = NULL;
		printf("employee with ssn: %s is deleted\n",cur->ssn);
		free(cur);
		prev->rlink = NULL;
		count--;
		return first;
	}
	void main()
	{ int ch,i,n;
	 while(1){
		 printf("1: Create DLL of Employee Nodes");
		 printf("\n2: DisplayStatus");
		 printf("\n3: InsertAtEnd");
		 printf("\n4: DeleteAtEnd");
		 printf("\n5: InsertAtFront");
		 printf("\n6: DeleteAtFront");
		 printf("\n7: Exit");
		 printf("\nPlease enter your choice: ");
		 scanf("%d",&ch);
		 switch(ch)
			 { case 1 : printf("Enter no of Employees: ");
			  scanf("%d",&n);
			    for(i=1;i<=n;i++)
					first = insertend();
			    break;
			  case 2 : display();
			  break;
			  case 3 : first = insertend();
			  break;
			  case 4 : first = deleteend();
			  break;
			  case 5 : first = insertfront();
			  break;
			  case 6 : first = deletefront();
			  break;
			  case 7 : exit(0);
			  default: printf("Please Enter valid choice\n");
				 
			 }
	 }
		
	}
		
	
