#include<stdio.h>
main()
{
int reverse(int n);
int n,r;
printf("enter the value of n");
scanf("%d",&n);
r=reverse(n);
printf("reversed number=%d\n",r);
}
int reverse(int n)
{
int dig,r;
while(n!=0)
{
dig=n%10;
r=r*10+dig;
n=n/10;
}
return(r);
}
