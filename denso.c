#include<stdio.h>
main()
{
int a,a1,b,count=0;
scanf("%d%d",&a,&b);
count=a;
while(a>0)
{
count=count+(a*(100-b)/100);
a=((100-b)*a)/100;
}
printf("%d",count);
}
