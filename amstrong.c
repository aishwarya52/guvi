#include<stdio.h>
#include<math.h>
int main()
{
    int n=0,num,t,temp,a=0,number;
    scanf("%d",&num);
    number=num;
    while(number!=0)
    {
        t=number/10;
        n++;
    }
    while(number!=0)
    {
        temp=number%10;
        a=a+(pow(temp,n));
        number=number/10;
    }
    if(a==num)
    {
        printf("The number is amstrong");
    }
    else
    {
        printf("The number is not an amstrong number");
    }
    return 0;
}
