#include<stdio.h>
int main()
{
  /*  char name[]="ADITYA";
   int i=0;
   while(name[i]!='\0')
   {   printf("\n");
       printf("%c",name[i]);
       i++;
   }  */
   char name[]="ADITYASINGH";
   char *ptr;
   ptr=name; // store base address of the string
   while(*ptr!='\0')
   {
      printf("%c",*ptr);
      ptr++;
   }
}