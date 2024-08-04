#include<stdio.h>
int main(void)
{
    int x=19;
    int *p=&x;
    printf("The value of a pointed-to-object is: %d\n",*p); 
    int arr[]={ 10,20,30,40,50};
     int *p1= arr;
     printf("The value of pointed element is: %d\n",*p1); 
    p1=p1+3;
    printf("The value of newly pointed element is: %d\n",*p1);
    p1=p1-1;
    printf("The value of a another newly pointed element is: %d\n",*p1);
    char *p2= "Hello World!";
    printf("String constant: %s\n",p2);
}