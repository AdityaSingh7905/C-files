#include<stdio.h>
int main(void)
{  char ch;
   printf("Enter the required character:");
   scanf("%c\n",&ch);
   if((ch>=0&&ch<=47)||(ch>=58&&ch<=64)||(ch>=91&&ch<=96)||(ch>=123&&ch<=127))
     printf("Special Symbol");
   if(ch>=65&&ch<=90)
     printf("A Capital letter");
   if(ch>=97&&ch<=122)
     printf("A Small Letter");
   if(ch>=48&&ch<=57)
     printf("Digit");

}