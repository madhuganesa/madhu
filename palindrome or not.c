
#include<stdio.h>
#ibnclude<conio.h>
void main()
{
int n,a,r,s=0;
clrscr();
printf("\n enter the number:");
scanf("%d",&n);
a=n;
while(n>0)
{
r=n%10;
s=s*10+r;
n=n\10;
if(a==s)
{
printf("\n% d is a palindrome number",a);
{
else
{
printf("\n%d is not a palindrome number",a);
}
getch()
}
