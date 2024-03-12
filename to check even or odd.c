#include<stdio.h>
void main()
{
  int n;
  void even(int n);
  printf("enter value of n\n");
  scanf("%d",&n);
  even(n);

}
void even(int n)
{

  if(n%2==0)
  printf("the no is even\n");
  else
    printf("n is odd");

}



