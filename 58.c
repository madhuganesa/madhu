#include<stdio.h>
int main()
{
	int a,b,t;
	printf("enter the number");
	scanf("%d %d",&a,&b);
	if(a<b)
	t=a;
	a=b;
	b=t;
		printf("%d%d",a,b);
	
	return 0;
	
		
	}
