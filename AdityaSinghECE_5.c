#include<stdio.h>
#include<string.h>
int main()
{ 
   char text[50],ch,*ptr;
   int a;
   printf("\nEnter the data in the string:");
   gets(text);
   printf("\nEnter the character you want to be deleted from the given string:");
   scanf("%c",&ch);
   printf("\nOriginal String: %s",text);
   ptr=text; // stores base address of the string
   for(int i=0;i<50;i++)
   {   if(*ptr==ch)
        *ptr=' ';
        ptr++;

   }
   printf("\nNew string is: %s",text);
}