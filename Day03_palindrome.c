#include<stdio.h>
void main()
{
  char s[100];
  int i,j,len;
  printf("enter the string\n");
  scanf("%s",s);
  for(len=0;s[len];len++);
  for(i=0,j=len-1;i<=j;i++,j--)
{
char temp=s[i];
s[i]=s[j];
s[j]=temp;
}
if(s[i]==s[j])
  printf("string is a palindrome\n");
else
  printf("string is not palindrome\n");
}
