#include<stdio.h>
int main()
{
int arr[100],mini,size,location=1;
printf("\n enter the number of elements in array");
scanf("%d",&size);
printf("\n enter integers",size);
for(c=0;c<size;c++)
scanf("%d",&arr[c]);
mini=arr[0];
for(c=1;c<size;c++)
{
if(arr[c]<mini)
{
mini=arr[c];
location=c+1;
}
}
printf("\n elements present in locatio %d and its valueis %d\n",locatio,size);
return 0;
}
