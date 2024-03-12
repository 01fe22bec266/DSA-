
#include<stdio.h>
int main()
{
int num;
void x(int num);
printf("enter number\n");
scanf("%d",&num);
x(num);
}
void x(int num)
{
if(num%2==0)
printf("%d is even\n",num);
else
    printf("%d is odd\n",num);
}
