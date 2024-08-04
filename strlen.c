// strlen reads number of characters in a given string.. it does not count null character
#include<stdio.h>
#include<string.h>
int xstrlen(char *s)
{
    int length=0;
    while(*s!='\0')
    {
        length++;
        s++;
    }
    return(length);
}
int main()
{
  char arr[]="Bamboozled";
  int len1,len2;
  len1=xstrlen(arr);
  len2=xstrlen("Humpty Dumpty");
  printf("\nstring=%s and length=%d",arr,len1);
  printf("\nstring=%s and length=%d","Humpty Dumpty",len2);

}