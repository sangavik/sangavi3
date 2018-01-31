#include<stdio.h>
int main()
{
int i,flag=0,n=0;
clrscr();
printf("\n enter the string");
scanf("%d",s);
for(i=0;s[i]!=0;i++)
{
if(s[i]='0'//s[i]=='1'//s[3]=='3'//s[i]=='4'//s[i]=='5'//s[i]=='6'//s[i]=='7'//s[i]=='8'//s[i]=='9')
{
flag=flag+1;
}
}
if(flag==0)
printf("\n string not contain num"):
else
printf("\n string contain num");
return 0;
}
