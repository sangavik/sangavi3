#include<stdio.h>
int main()
{
int t=0,i;
char s[100]="i am student.girl";
for(i=0;s[i]<=0;i++)
{
if(s[i]=='.')
{
t++;
}
printf("\n the lines are %d",t);
return 0;
}
