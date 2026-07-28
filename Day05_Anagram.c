#include<stdio.h>
#include<string.h>
void main()
{
  int i,j,t;
char str[100],str1[100];
printf("Enter the string str and str1\n");
scanf("%s %s",str,str1);
if(strlen(str)!=strlen(str1))
{
printf("strings are not anagram");
}
for(i=0;str[i];i++)
{
for(j=0;str[j];j++)
{
if(str[i]>str[j])
{
t=str[i];
str[i]=str[j];
str[j]=t;
}
if(str1[i]>str1[j])
{
t=str1[i];
str1[i]=str1[j];
str1[j]=t;
}
}
}
if((strcmp(str,str1))==0)
  printf("anagram");
else
  printf("not anagram");
}
