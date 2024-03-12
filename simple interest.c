#include<stdio.h>
main()
{
 float p,t,r,si,tot_amt;
 printf("enter values of p t and r\n");
 scanf("%f%f%f",&p,&t,&r);
 si=p*t*r/100;
 tot_amt=p+si;
 printf("total amount=%f",tot_amt);
}
