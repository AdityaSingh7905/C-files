#include<stdio.h>
#include<time.h>   // for clock()
void PrintArray(int A[],int n)
{  for(int i=0;i<n;i++)
     { 
       printf("%d\t",A[i]);
      }
      printf("\n");
}
void Merge(int A[],int low,int mid,int high)
{
  int i,j,k;
  int B[100];
  i=low;
  j=mid+1;
  k=low;
  while(i<=mid&&j<=high)
  {   if(A[i]<A[j])
       {  B[k]=A[i];
          i++;
          k++;
        }
       else
       {  B[k]=A[j];
          j++;
          k++;
        } 
   }
  while(i<=mid)
  {  B[k]=A[i];
     i++;
     k++;
  }
  while(j<=high)
  {  B[k]=A[j];
     j++;
     k++;

  }
  for(int i=low;i<=high;i++)
    { 
       A[i]=B[i];
    }
}
void Merge_Sort(int A[],int l,int h)
{
  int mid;
  if(l<h)
  {   mid=(l+h)/2;
      Merge_Sort(A,l,mid);
      Merge_Sort(A,mid+1,h);
      Merge(A,l,mid,h);
   }
}
int main()
{   int n;
    printf("\nEnter the no. of elements you want in the array:");
    scanf("%d",&n);
    int A[n];
    double time_spent=0.0;
    printf("\nEnter the elements to be sorted:");
    for(int i=0;i<n;i++)
      { 
         // scanf("%d",&A[i]);
         A[i]=rand()%100;
       }
    printf("\nArray elements before sorting:"); 
    PrintArray(A,n);
    //to store the execution time of code
    clock_t begin=clock();
    Merge_Sort(A,0,n-1);
    clock_t end=clock();
    // to calculate total no. of seconds, divide (total no. of ticks=end-begin) by CLOCKS_PER_SEC..
    time_spent+=(double)(end-begin)/CLOCKS_PER_SEC;
    printf("\nThe elapsed time is %f seconds",time_spent);
    printf("\nArray elements after sorting:");
    PrintArray(A,n);   
   
    
}