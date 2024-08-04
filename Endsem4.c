/* program using command line arguments*/
#include<stdio.h>  // header file ,  using it so that we can use its functions during the execution of program
#include<stdlib.h>
int main(int argc,char *argv[])  // argc and argv are passed as parameters inside the main function. argc is number of command line arguments and argv is pointer that represents the arguments
{
    if(argc==1) // condition for checking command line arguments
    {
        printf("No command line argument present..");
    }    
    int num1,num2,temp;  // declaration of variables
    num1=atoi(argv[1]);
    num2=atoi(argv[2]);
    temp=num1;
    num1=num2;          // swaping the numbers
    num2=temp;
    printf("\n After swaping ,first number is: %d\n",num1);
    printf("after swaping , second number is: %d\n",num2);  // print out of the numbers


}  // closing braces