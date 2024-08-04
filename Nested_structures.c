#include<stdio.h>
struct address
{
    char phone[15];
    char city[25];
    int pin;
};
struct emp
{
    char name[25];
    struct address a;
};
int main()
{
  struct emp e={"Anshuman","8707420494","Prayagraj",212111};
  printf("\nname=%s phone=%s",e.name,e.a.phone);
  printf("\ncity=%s pin=%d",e.a.city,e.a.pin);  
}