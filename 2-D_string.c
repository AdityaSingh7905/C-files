#include<stdio.h>
#include<string.h>
int main()
{
  char masterlist[7][10];
  for(int i=0;i<7;i++)
  {
      scanf("%s",&masterlist[i][0]);
  }
  int flag=0,a;
  char yourname[10];
  printf("\nEnter your name:");
  scanf("%s",yourname);
  for(int i=0;i<=6;i++)
  {
      a=strcmp(&masterlist[i][0],yourname);
      if(a==0)
      {
          printf("Welcome,you can enter the palace");
          flag=1; // flag is used to keep record of whether the control reach inside the if or not
          break;
      }
  }
  if(flag==0)
    printf("Sorry,you are a trespasser");
}