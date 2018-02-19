#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,c,i,temp;
  printf("enter the number of terms");
  scanf("%d",&a,&b,&c);
  a=1;
  b=0;
  c=1;
  printf("fibonacci terms:\n");
  for(i=1;i<=terms;i++)
  {
    printf("%d",c);
    a=b;
    b=c;
    c=a+b;
  }
  return 0;
}
