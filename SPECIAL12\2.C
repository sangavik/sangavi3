#include<stdio.h>
#include<conio.h>
void main()
{
int i,a=0;
char s[100];
printf("\n enter the string");
scanf("%s",&s);
while(s[i]!=\0)
{
if(s[i]>=0 && s[i]<=9)
a++;
i++;
}
printf("\n special character",a);
getch();
}
