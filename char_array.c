#include<stdio.h>
int main(void)
{
   char myarray[]="Hello";   //Hello is a string constant,also called character string literal
   for(int i=0;i<5;i++) 
   {
      printf("%c",myarray[i]);
   }
}