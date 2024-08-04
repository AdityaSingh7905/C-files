#include<stdio.h>
int main(void)
{ int p,t;
  float r,si;
  printf("Enter the values of p,t,r");
  scanf("%d %d %f",&p,&t,&r);
  si= (p*r*t)/100;
   printf("%f",si);
   return 0;

}