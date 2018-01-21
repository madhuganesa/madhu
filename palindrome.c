#include<stdio.h>
#include<conio.h>
voidmain()
{
intn,a,r,s=0;
clrscr();
printf("\n enter the number:");
scanf("%d",&n);
a=n;
while(n>0)
{
r=n%10;
s=s*10+r;
n=n/10;
}
}
