#include<stdio.h>
int main(void)
{ int arr[5]={1 ,2 ,3 ,4,5};
  size_t arrcount= sizeof(arr)/sizeof(arr[1]);
  printf("Total number of elements in array is: %ld\n",arrcount);


}