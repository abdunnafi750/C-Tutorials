#include<stdio.h>
int main()

{
   int a,b,c,n;
   a = 0;
   b = 1;
   printf("Enter the value of n: ");
   scanf("%d", &n);

   if(n == 1)
   {
      c = 0;
   }
   else if(n == 2)
   {
      c = 1;
   }
   else
   {
      for(int i = 3; i<=n; i++)
      {
         c = a+ b;
         a = b;
         b = c;
      }

   }

   printf("The %d th number of the series: %d",n,c);

   return 0;
}