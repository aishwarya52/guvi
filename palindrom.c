#include<stdio.h>
#include<string.h>
  int main()
 {
char string1[10],string2[10];

   gets(string1);
   
 string2 = strrev(string1);
 
   if(string2==string1)
   {
 printf("no is palindrom");
}
 else 
 {
 printf("not palindrom");
 
 
}return 0;
}
