#include<stdio.h>
int count(int n)
{
	if(n==0)
		return 0;
	return 1+count(n/10);
}
int power(int base,int exp)
{
	if(exp==0)
		return 1;
	return base *power(base,exp-1);
}
int amstrong(int n,int powerval)
{
	if(n==0)
		return 0;
	int digit=n%10;
	return power(digit,powerval)+amstrong(n/10,powerval);
}
int main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	int digits=count(num);
	int sum=amstrong(num,digits);
	if(sum==num)
		printf("armstrong");
	else
		printf("not armstrong");
}
