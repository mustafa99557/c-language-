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

}
NODE insertfront()
{
NODE temp;
temp = create();
if(first == NULL)
{  return temp;     }
	
