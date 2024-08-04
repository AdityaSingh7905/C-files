#include<stdio.h>
#include<string.h>
struct employee
{
    char name[10];
    int age;
    float salary;
};
int main()
{
    struct employee e1={"Aditya",18,100000};
    struct employee e2,e3;
    /* piece-meal copying*/
    strcpy(e2.name,e1.name);
    e2.age=e1.age;
    e2.salary=e1.salary;
    /* copying all elements at one go*/
    e3=e2;
    printf("\n%s %d %f",e1.name,e1.age,e1.salary);
    printf("\n%s %d %f",e2.name,e2.age,e2.salary);
    printf("\n%s %d %f",e3.name,e3.age,e3.salary);   
}