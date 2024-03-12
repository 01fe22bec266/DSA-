#include<stdio.h>
main()
{
int m;
printf("enter marks\n");
scanf("%d",&m);
if(m>=0&&m<=39)
{
printf("fail");
}
else if(m>=40&&m<=59)
{
printf("pass");

}
else if(m>=60&&m<=79)
{
printf("first class");
}
else if(m>=80&&m<=100)
{
printf("distinction");
}
else
{
printf("invalid marks");
}
}
