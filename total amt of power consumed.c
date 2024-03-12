#include<stdio.h>
main()
{
int units;
float tot_amt;
printf("enter units\n");
scanf("%d",&units);
if(units>=0&&units<=100)
{
tot_amt=1*units;
printf("%f",tot_amt);
}
else if(units>=101&&units<=200)
{
tot_amt=units*1.5;
printf("tot_amt=%f",tot_amt);
}
else if(units>=201&&units<=450)
{
tot_amt=2*units;
printf("tot amt=%f",tot_amt);
}
else
{
tot_amt=2.5*units;
printf("tot amt=%f",tot_amt);

}
}
