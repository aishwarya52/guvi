#include<stdio.h>
  int main()
    {
        int b=10,a=2,temp;
        printf("Before swapping:%d %d",a,b);
       temp=a;
       a=b;
       b=temp;
       printf("\nAfter swapping:%d %d",a,b);
       return 0;
     }
