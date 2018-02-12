#include<stdio.h>
#include<conio.h>
void main()
{
int i,s;
char a[20];
printf("\n enter string:");
scanf("%s",&a);
for(i=0;i<=20;i++)
{
if(a[i]==' ')
{
s++;
}
printf("\n total space is:",s);
}
getch();
}
