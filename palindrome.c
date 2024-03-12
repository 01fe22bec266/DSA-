#include<stdio.h>
main()
{
 int palindrome(int n);
 int n,p;
 printf("enter the number\n");
 scanf("%d",&n);
 p=palindrome(n);
 printf("%d",p);
 }
  int palindrome(int n)
  {
  int dig,rev=0;
  while(n!=0)
  {
  dig=n%10;
  rev=rev*10+dig;
  n=n/10;
  }
  if(n==rev)
  printf("the number is palindrome");
  else
  printf("the number is not palindrom");
  }
