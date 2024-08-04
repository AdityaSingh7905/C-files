// strcpy copies content of string into another string
#include<stdio.h>
#include<string.h>
void xstrcpy(char *t,char *s)
{    while(*s!='\0')
{ 

    *t=*s;
     s++;
     t++;

}
    *t='\0';
}
int main()
{
  /*  char source[]="Sayonara";
    char target[25];
    strcpy(target,source);
    printf("\nsource string %s",source);
    printf("\ntarget string %s",target);  */
    char source[]="Sayonara";
    char target[25];
    xstrcpy(target,source);
    printf("\nsource string= %s",source);
    printf("\ntarget string= %s",target);

}