#include<stdio.h>
int main(void)
{  long long int num;
     int rem,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a0=0;
    printf("Enter the required number:");
    scanf("%lld ",&num);
    for(int i=0;i<16;i++)
{    rem=num%10;
     switch(rem)
     {
        case 0:
               a0++;
               break;
        case 1:
               a1++;
               break;
        case 2:
               a2++;
               break;
        case 3:
               a3++;
               break;
        case 4:
               a4++;
               break;
        case 5:
               a5++;
               break;
        case 6:
               a6++;
               break;
        case 7:
               a7++;
               break;
        case 8:
               a8++;
               break;
        case 9:
               a9++;
               break;
      }
     num=num/10;
          }
        printf("No. of zeros are: %d \n",a0);
        printf("no. of ones are: %d \n",a1);
        printf("no. of twos are: %d \n",a2);
        printf("no. of threes are: %d \n",a3);
        printf("no. of fours are: %d \n",a4);
        printf("no. of fives are: %d \n",a5);
        printf("no. of sixes are: %d \n",a6);
        printf("no. of sevens are: %d \n",a7);
        printf("no. of eights are: %d \n",a8);
        printf("no.of nines are: %d \n",a9);
              }