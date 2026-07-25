#include<stdio.h>
void main()
{
int i=0,j=1,k;
int n,sum=0;
printf("enter n series\n");
scanf("%d",&n);
printf("%d %d ",i,j);
for(i=0;i<=n;i++)
{
k=i+j;
printf("%d ",k);
sum=sum+k;
i=j;
j=k;
}
printf("\nsum=%d\n",sum);
}
