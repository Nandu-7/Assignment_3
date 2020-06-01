#include<stdio.h>
  
int main()
{
    int a[20],i,item,n;
    printf("Enter the number of elements");
    scanf("%d",&n);
     
    printf("Enter array elements:n");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
     
    printf("nEnter element to search:");
    scanf("%d",&item);
     
    for(i=0;i<n;++i)
        if(a[i]==item)
            break;
     
    if(i<n)
        printf("Element found at index %d",i);
    else
        printf("Element not found");
  
    return 0;
    
    }
