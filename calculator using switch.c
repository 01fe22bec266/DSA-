#include<stdio.h>
main()
{
int n1,n2,sum,sub,mul,div,ch;
printf("enter 2 numbers\n");
scanf("%d%d",&n1,&n2);
printf("enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:sum=n1+n2;
printf("sum=%d",sum);
break;
case 2:sub=n1-n2;
printf("sub=%d",sub);
break;

case 3:mul=n1*n2;
printf("mul=%d",mul);
break;

case 4:div=n1/n2;
printf("div=%d",div);
break;
default:printf("invalid choice");
}
}

























