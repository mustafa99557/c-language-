#include<stdio.h>
int main ()
{
int a[20],i,n,j,small,index;
printf("Enter no of elements: ");
scanf("%d",&n);
printf("Enter the elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Array before sort: ");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
for(i=0;i<n;i++)
{
small = a[i];
index = i;

for(j=i+1;j<n;j++)
{
if (a[j]<small)
     {
        small =a[j];
         index = j;
      }
}




a[index] = a[i];
a[i] = small;}
printf("\nArray after sort: ");
