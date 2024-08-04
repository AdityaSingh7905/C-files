#include<stdio.h>
int main(void)
{ int arr[5]={10 ,20 ,30 ,40 ,50};

      arr[0]=11;    // change the first value

      arr[4]=55;    // change the last value
      for(int i=0;i<5;i++)
      {
          printf("%d \t",arr[i]);
      }

}