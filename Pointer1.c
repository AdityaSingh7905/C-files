#include<stdio.h>
int main(void)
{  int array[]={10,20,30,40,50};
   int *p= array;
   p=p+2;  // p now points at the third element//
   printf("The third element is :%d \n",*p);
   p+=1;  // p now points at fourth element
   printf("The fourth element is:%d \n",*p);
}