#include<stdio.h>
int main()
{
int a,rev=0,c;
scanf("%d",&a);
while(a!=0)
{
c=a%10;
rev=rev*10+c;
a=a/10;
}
if(a==rev)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
