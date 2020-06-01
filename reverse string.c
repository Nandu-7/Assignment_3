#include <stdio.h>
#include <string.h>
void reverse(char str[100])
{ int i,n;
  char temp;
  n=strlen(str);
  for(i=0;i<n/2;i++)
    {   temp=str[i];
         str[i]=str[n-i-1];
         str[n-1-i]=temp;
     }
}
int main()
{
  char str[100];

  printf("Enter the string \n"); 
  gets(str);
  reverse(str);
  printf("Reversed string is=%s\n",str);
}
