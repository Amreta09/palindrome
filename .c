#include<stdio.h>
int main()
{
int a,rev=0,c,b;
scanf("%d",&a);
  b=a;
while(b!=0)
{
c=b%10;
rev=rev*10+c;
b=b/10;
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
