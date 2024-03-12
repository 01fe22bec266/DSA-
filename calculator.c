#include<stdio.h>
main()
{
int n1,n2,ch,sum,sub,mul,div;
printf("enter 2 numbers and choice\n");
scanf("%d%d%d",&n1,&n2,&ch);
if(ch==1)
{
sum=n1+n2;
printf("sum=%d",sum);
}
else if(ch==2)
{
sub=n1-n2;
printf("difference=%d",sub);
}
else if(ch==3)
{
mul=n1*n2;
printf("product=%d",mul);

}
else if(ch==4)
{
div=n1/n2;
printf("division=%d",div);

}
else
{
printf("invalid choice\n");
}

}


