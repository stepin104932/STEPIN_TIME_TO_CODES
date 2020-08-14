#include<stdio.h>
#include<stdlib.h>
 int check_prime(int);

main()
{
   int n, result;
   scanf("%d",&n);
   if(n<=0)
   {
   printf("False");
   return 0;
   }
   result = check_prime(n);
   if ( result == 1 )
      printf("True");
   else
      printf("False");
   return 0;
}
