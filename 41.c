#include<stdio.h>
#include<string.h>
void main()
{
int i,n;
char a[70];
printf("enter the value of n and a");
scanf("%s%d",&a,&n);
printf("\n %s %d",a,n);
for(i=1;i<=n;i++)
{
printf("%s",a);
}
return 0;
}
