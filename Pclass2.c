#include<stdio.h>
int main(void)
{ int a,b,c;
  float sqarea,s;
  printf("Enter the sides of triangle:");
  scanf("%d %d %d ",&a,&b,&c);
  s=(a+b+c)/2;
  sqarea= (s*(s-a)*(s-b)*(s-c));
  printf("Square area of the triangle is : %f \n",sqarea);

    }