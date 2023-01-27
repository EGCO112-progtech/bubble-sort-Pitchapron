#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

int isprime(int x)
{
  int d,c;
  if(x==1) c=0;
  else
  {
    for(d=2;d<x;d++)
    {
      if(x%d==0){
        c=0;
        break;
      }
      else c=1;
    }
  }
  return c;
}

int main(int argc, char *argv[]) 
{
  int *a,N,p,n;
  int i,j,new_number;
  N=argc-1;
  a=(int*)malloc(sizeof(int)*N);
  int *prime =(int*)malloc(sizeof(int)*N);
  for(i=0,j=0;i<N;i++)
    {
      a[i]=atoi(argv[i+1]);
      p=isprime(a[i]);
      if(p)
      {
        prime[j]=a[i];
        j++;
      }
    }
  n=j;
  if(n==0) printf("NO prime\n");
  display(prime,n);
  bubbleSort(prime,n); 
   //insertion(a,n);

  // selectionSort(a,N);
   display(prime,n);
 return 0;
}


