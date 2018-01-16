#include <stdio.h>
{
   Char c;
   printf("Enter a character":");
   scanf ("%c",&c);
          
   if(c>'a'&&c <='z')||(c>='A'&&c <='Z'))
      printf ("%cis an alphabet.",c);
   else
      printf("%c is not an alphabet."c);
   return0;
}
