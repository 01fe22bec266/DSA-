#include<stdio.h>
#include<math.h>
main()
{
 float x1,x2,y1,y2,dist;
 printf("enter coordinates of mohan and sohan\n");
 scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
 dist=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
 printf("distance=%f",dist);
 }
