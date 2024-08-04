// array of pointers for the string
#include<stdio.h>
int main()
{
  /*  char names[][10]={"akshay","parag","raman","srinivas","gopal","rajesh"};
    printf("\nOriginals:%s %s",&names[2][0],&names[3][0]);
    for(int i=0;i<10;i++)
    {
        char t;
        t=names[2][i];
        names[2][i]=names[3][i];
        names[3][i]=t;
    }
    printf("\nNew:%s %s",&names[2][0],&names[3][0]); */
    char *names[]={"akshay","parag","raman","srinivas","gopal","rajesh"};
    printf("\nOriginals: %s %s",names[2],names[3]);
    char *temp;
    temp=names[2];
    names[2]=names[3];
    names[3]=temp;
    printf("\nNew: %s %s",names[2],names[3]);
}