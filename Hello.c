#include<stdio.h>
int Fib(int n);
int main()

{

   int a;
   printf("Enter the value of n: ");
   scanf("%d", &a);

   int p = Fib(a);
   printf("The %d th number of the series is: %d", a, p);

   return 0;
}

int Fib(int n)
{
   if(n == 1)
   {
      return 0;
   }
   if(n == 2)
   {
      return 1;
   }
   
   int NumNm1 = Fib(n-1);
   int NumNm2 = Fib(n-2);
   int Num = NumNm1 + NumNm2;

   return Num;
}