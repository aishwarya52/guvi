#include<stdio.h>
int main()
  {
   long long n;
   int count=0;
   scanf("%ld",&n);
 while(n!=0)
   {
   n=n/10;
   count++;
   }
   printf("number of digits %d",count);
}
