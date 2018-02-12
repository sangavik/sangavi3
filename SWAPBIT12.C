#include<stdio.h>
int main()
{
int x=20;
int y=10;
printf("\n before swapping values are %d %d",x,y);
x=x^y;
y=x^y;
x=x^y;
printf("\n after swapping values are %d %d",x,y);
return 0;
}
