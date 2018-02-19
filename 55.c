#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,d;
  printf("enter the number:");
  scanf("%d",&a,&b);
  d=a*b;
  if(d%2==0)
  {
    printf("the number is even");
  }
  else
  {
    printf("the number is odd");
    
  }
  return 0;
  }
