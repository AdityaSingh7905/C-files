#include<stdio.h>
int main()
{
    int hardness,carbon,tensile;
    printf("Enter the hardness,tensile strength and carbon content:");
    scanf("%d %d %d",&hardness,&tensile,&carbon);
   if((hardness>50)&&(carbon<0.7)&&(tensile>5600))
     printf("Grade is 10");
    else 
    {  if((hardness>50)&&(carbon<0.7))
        printf("Grade is 9");
    else 
   {   if((carbon<0.7)&&(tensile>5600))
        printf("Grade is 8");
       else
    {    if((hardness>50)&&(tensile>5600))
           printf("Grade is 7");
         else
         {   if((hardness>50)||(carbon<0.7)||(tensile>5600))
               printf("Grade is 6");
             else
                 printf("Grade is 5");
             }
    }

}         
}
}     