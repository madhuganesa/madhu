#include<stdio.h>
#include<conio.h>
int main()
{
int num,i;
scanf("%d",&num);
for(i=0;i<=num;i++)
{
        if(num%i==0)
        scanf("%d",i);
}
return 0;
}
