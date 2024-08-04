// Initialisation of structure
#include<stdio.h>
typedef struct
{
    char c;
    int x;
    double d;
}Mystruct;
int main(void)
{  Mystruct s = { 'a',123,456.789};
   printf("Variable s of type struct Mystruct is declared.\n");
   printf("Member c has value of: %c\n",s.c);
   printf("value of x is: %d\n",s.x);
   printf("value of d is: %.3f\n",s.d);


}