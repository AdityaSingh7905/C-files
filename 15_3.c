#include<stdio.h>
typedef struct Mystruct Mystruct;
struct Mystruct
{
    char c;
    int x;
    double d;
};
int main(void)
{  Mystruct s;
   printf("Variable s of type Mystruct is declared.\n");

}
// Another method for creating alias for structure type
/*typedef struct
{  char c;
   int x;
   double d;
   }Mystruct;
 int main(void)
 {
     Mystruct s;
     printf("Variable s of type Mystruct is declared.\n");
 }  */