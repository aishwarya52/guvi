
#include<stdio.h>
int main()
{
    int d,v,u,k=0,s,t,c=0,i,j,count=0;
    scanf("%d %d %d",&d,&M,&A);
    int B[v][2],C[d-1],S[d];
    for(i=0;i<v;i++)
{
    for(j=0;j<u;j++)
    {
        scanf("%d\t",&B[i][j]);
       
    }
}
for(i=0;i<d;i++)
{
    scanf("%d",&S[i]);
}
for(i=0;i<d;i++)
{
    t=i;
    for(j=0;j<2;j++)
    {
        s=j;
        if(B[i][j]==u&&j==0)
        {
            C[k]=B[i][j+1];
            k++;
            for(i=0;i<di++)
            {
                for(j=0;j<2;j++)
                {
                    if(B[i][j]==B[t][s+1]&&j==0)
                    {
                        C[k]=B[i][j+1];
                        k++;
                    }
                }
            }
        }
        j=s;
    }
    i=t;
}
for(i=0;i<k;i++)
{
    if(S[A-1]>S[C[i]-1])
    {
        count++;
    }
}
printf("%d",count);

   
}
