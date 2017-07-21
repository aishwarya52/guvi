#include<stdio.h>
int main()
{
    int n,a[n][2],m;
    scanf("%d %d",&n,&m);
    {
    for(int i=0;i<n;i++)
			for(int j=0;j<2;j++)
				a[i][j]=n;
    }
				int cuts[n];
				for(int i=0;i<n;i++)
		{
			cuts[i]=a[i][0]-1;				//row-1
			cuts[i]+=((a[i][1]-1)*a[i][0]);	//(column-1)*row
		}
		for(int i=0;i<n;i++)
		printf("%d",&cuts[n]);
    
    return 0;
				
    
}
