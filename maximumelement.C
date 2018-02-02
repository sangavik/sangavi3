#include<stdio.h>
int main()
{
int array[100],maximum,size,c,location=1;
printf("\n enter the num of elements in array");
scanf("%d",&size);
printf("enter integers\n",size);
for(c=0;c<size;c++)
scanf("%d",&array[c]);
max=arr(0);
for(c=1;c<size;c++)
{
if(arr[c]<max)
{
max=arr[c];
location=c+1;
}
}
printf("\n element present in location %d" and its value is %d\n",location,maximum);
return 0;
}
