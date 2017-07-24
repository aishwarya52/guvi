#include<stdio.h>
 
int main() 
{
   int *ptr1, *ptr2;
   int num1,num2,num;
 
    num1= &ptr1;
    num2= &ptr2;
    
   printf("\nEnter two numbers : ");
   scanf("%d %d", ptr1, ptr2);
   
   
   num = num1+num2;
 
   printf("Sum = %d", num);
   return 0;
}
