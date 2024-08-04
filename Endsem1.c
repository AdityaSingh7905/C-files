/* Employee details using structures as pointers*/
#include<stdio.h>      // header file ,  using it so that we can use its functions during the execution of program
typedef struct         // typedef is a keyword used to create alias name for struct Employee
{
    int Eid;             // structure declaration
    long long int Adhar;
    long long int mob;
}Employee;
int main(void)
{    Employee e = { 211111,680185809256,9988776655};  // declaration and initialisation of variable e of the type struct Employee
     Employee *ps = &e;  // pointer declaration of type struct Employee and pointing to variable e
     printf("Employee id is: %d\n",ps->Eid);
     printf("Employee aadhar number is: %lld\n",ps->Adhar);  // print out of the employee details
     printf("Employee mobile number is: %lld\n",ps->mob);

}  //closing braces