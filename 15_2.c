/* Declaration of variable by two different methods 
  Methods - 1 */
  /*#include<stdio.h>
  struct Mystruct
  {
      char c;
      int x;
      double d;
  }s;
  int main(void)
  {
      printf("Structure type struct Mystruct declared.\n");
      printf("Variable s of type struct Mystruct declared");

  } */
 // Method-2
 #include<stdio.h>
 struct Mystruct
 {
     char c;
     int x;
     double d;
 };
 int main(void)
 {
     printf("Structure type struct Mystruct declared.\n");
     struct Mystruct s;
     printf("variabe s of type struct Mystruct declared.\n");
      } 