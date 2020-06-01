#include<stdio.h>
int fact(int n);
void main()
 {
   int n; 
   printf("Enter a natural number\n");
   scanf("%d",&n); 
   printf("The factorial of the given number is %d",fact(n));
 }
int fact(int n) 
 {
  int i; 
  int fact=1;
  if(n>1)
    {
      for(i=2;i<=n; i++)
        {
           fact=fact*i;
         }
   return(fact);
    }
 }
