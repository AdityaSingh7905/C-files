#include<stdio.h>
int main(void)
{  int yr,dofyr,nofdays;
   printf("Enter the required year");
   scanf("%d",&yr);
   if(yr<1990)
   {  dofyr=1990-yr;
      if(yr%4==0)
      {  nofdays=dofyr*366;
         if(nofdays%7==0)
           printf("Monday");
         if(nofdays%7==1)
           printf("Tuesday");
         if(nofdays%7==2)
           printf("Wednesday");
         if(nofdays%7==3)
           printf("Thursday");
         if(nofdays%7==4)
           printf("friday");
         if(nofdays%7==5)
           printf("Saturday");
         if(nofdays%7==6)
           printf("Sunday");
           }
      else
      {  nofdays=dofyr*365;
        if(nofdays%7==0)
          printf("Monday");
        if(nofdays%7==1)
          printf("Tuesday");
        if(nofdays%7==2)
          printf("Wednesday");
        if(nofdays%7==3)
          printf("Thursday");
        if(nofdays%7==4)
          printf("Friday");
        if(nofdays%7==5)
          printf("Saturday");
        if(nofdays%7==6)
          printf("Sunday");
          }          

     }
   else
   {
      dofyr=yr-1990;
       if(yr%4==0)
       {  nofdays=dofyr*366;
          if(nofdays%7==0)
           printf("Monday");
          if(nofdays%7==1)
           printf("Tuesday");
         if(nofdays%7==2)
           printf("Wednesday");
         if(nofdays%7==3)
           printf("Thursday");
         if(nofdays%7==4)
           printf("friday");
         if(nofdays%7==5)
           printf("Saturday");
         if(nofdays%7==6)
           printf("Sunday");
           }
      else
      {  nofdays=dofyr*365;
        if(nofdays%7==0)
          printf("Monday");
        if(nofdays%7==1)
          printf("Tuesday");
        if(nofdays%7==2)
          printf("Wednesday");
        if(nofdays%7==3)
          printf("Thursday");
        if(nofdays%7==4)
          printf("Friday");
        if(nofdays%7==5)
          printf("Saturday");
        if(nofdays%7==6)
          printf("Sunday");
          }          

   }
}