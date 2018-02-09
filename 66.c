#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,flag=0;
printf("enter the positive integer:");
scanf("%d",&n);
for(i=0;i<=2;i++)
{
if(n%1==0);
{
flag=1;
break;
}
}
if(flag==0);
printf("%d is a prime number\n);
return 0;
}

