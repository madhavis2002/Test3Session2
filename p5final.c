/*
#include <stdio.h>
#include<math.h>
int input()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}

void init_array(int n, int a[n])
{
  for(int i=0;i<n;i++)
    a[i] = i;
  a[1]=0;
}

void ets(int n, int a[n])
{
  int i=0;
   /* Find next non-zero number */ /*
  while(i<sqrt(n)){
   for(;a[i]==0 ;i++);
   for(int k=i+i;k<n;k += i)
     a[i] = 0;
   i++;
  }
}


void display(int n, int a[n])
{
  for(int i=0;i<n;i++)
    if(a[i]!=0)
      printf("%d ",a[i]);
  printf("\n");
}

int main()
{
  int n;
  n=input();
  int a[n];
  init_array(n,a);
  ets(n,a);
  display(n,a);
  return 0;
}
*/
#include<stdio.h>
#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the array size\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n])
{ int i;  
  for(i=0;i<n;i++)
  {
  printf("enter the array element %d\n",i);
  scanf("%d",&a[i]);
  }
}
int find_largest(int n, int a[n])
{ 
  int i,largest=0;
  for(i = 0;i<n;i++)
   if (a[i] > a[largest])
      largest = i;
  return largest;
}
void out_put(int n, int a[n], int largest)
{
printf("Largest element is present at index %d and its value is %d.\n",largest,a[largest]);
}
int main()
{
  int largest,n;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  largest=find_largest(n,a);
  out_put(n,a,largest);
  return 0;
}