#include<stdio.h>
#include<string.h>
int main()
{
    char string[50],word[20],pattern[30],result[80];
    printf("\nEnter data in the given string,word and pattern:");
    gets(string);
    scanf("%s",word);
    scanf("%s",pattern);
    printf("\nWhat you have entered is:");
    printf("\nString is: %s",string);
    printf("\nWord which you want to replace: %s",word);
    printf("\nPattern which is replaced with word: %s",pattern);
    int i=0,p=0,a=0,b=0;
    while(string[i]!='\0')
    {    if(string[i]==word[p])
         {  if(!a)
              b=i;
            p++;
           if(word[p]=='\0')
              break;
            a=1;
         }
         else
         {
             p=0,a=0,b=0;
         }  
         i++;     
    }
    printf("\nb= %d a= %d",b,a);
    if(word[p]=='\0'&&a==1)
    {  int i;  
      for( i=0;i<b;i++)
     {  
         result[i]=string[i];
      }
      for(int j=0;j<strlen(pattern);j++)
     { 
        result[i]=pattern[j];
        i++;
      }
      for (int k=b+strlen(word);k<strlen(string);k++)
     { 
        result[i]=string[k];
        i++;
      }
     
      printf("\nString after replacing word with pattern is:");
      printf("%s",result);
     
    }
    else
     printf("\n%s is not present in the given string- %s",word,string);
}