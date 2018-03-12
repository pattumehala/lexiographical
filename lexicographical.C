#include<stdio.h>
#include<string.h>
int main()
{
int n,i,j,temp;
char a[20];
printf("enter the string:");
scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("%s",a);
return 0;
}
