#include<stdio.h>
#include<conio.h>
int main()
{
int g,n=0,i;
printf("enter the value");
scanf("%d",&g);
for(i=1;i<=g;i++)
{
if(g%i==0)
{
printf("prime");
}
else
{
printf("composite number");
}
return 0;
}
}
