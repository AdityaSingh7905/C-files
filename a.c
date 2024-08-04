#include<stdio.h>
typedef struct Mystruct Mystruct;
struct Mystruct
{
    char c;
    int x;
    double d;
};
void myfunction(Mystruct *myparam)
{   printf("Member c has a value: %c\n",myparam->c);
    printf("Member x has a value: %d\n",myparam->x);
    printf("Member d has a value: %.3f\n",myparam->d);

}
int main(void)
{  Mystruct s = { 'A',123,456.789};
   myfunction(&s);
  
}