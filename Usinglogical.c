#include<stdio.h>
int main(void)
{ char sex,ms;
  int age;
  printf("Enter age,sex,and marital status:");
  scanf("%d %c %c",&age,&sex,&ms);
  if((ms=='M')||(ms=='U'&&sex=='M'&&age>30)||(ms=='U'&&sex=='F'&&age>25))
    printf("Driver is insured");
  else
   printf("Driver is not insured");

}