#include<stdio.h>
main()
{
float pur_amt,tot_amt,discount;
printf("enter pur_amt\n");
scanf("%f",&pur_amt);
if(pur_amt>=0&&pur_amt<=1000)
{
 tot_amt=pur_amt;
 printf("tot_amt=%f",tot_amt);

}
else if(pur_amt>=1001&&pur_amt<=5000)
{
discount=pur_amt*2/100;
tot_amt=pur_amt-discount;
printf("tot_amt=%f",tot_amt);
}
else if(pur_amt>=5001&&pur_amt<=10000)
{
discount=pur_amt*3/100;
tot_amt=pur_amt-discount;
printf("tot_amt=%f",tot_amt);
}
else if(pur_amt>=10000)
{
discount=pur_amt*5/100;
tot_amt=pur_amt-discount;
printf("tot_amt=%f",tot_amt);
}
}
