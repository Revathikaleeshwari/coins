#include<stdio.h>
int main()
{
int a,b,s;
scanf("%d",&s);
if(s<3)
{
printf("%d",s);
}
if(s<5&&s>=3)
{
a=s%3+s/3;
printf("%d",a);
}
if(s>=5)
{
b=s%5+s/5;
printf("%d",b);
}
return 0;
}
