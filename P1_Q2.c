
#include <stdio.h>

void main()
{
      float r, circum, area, PI=3.142;
      printf("please input radius..\n");
      scanf("%f",&r);

      circum=2*PI*r;
      area=PI*r*r;

      printf("circumference = %.2f\n",circum);
      printf("area = %.2f\n",area);

}