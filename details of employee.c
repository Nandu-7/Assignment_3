#include <stdio.h>
 
 struct emp{
 
    char name[30];
    int id;
    int salary;
 
};
 
int main()
{
    int i, n;
 
     
     printf("Enter the number of employees\n");
     scanf("%d",&n);
     struct emp employee[n];
     printf("Enter %d Employee Details \n \n",n);
     for(i=0; i<n; i++)
     {
 
        printf("Employee %d:- \n",i+1);
        
        printf("Name: ");
        scanf("%s",&employee[i].name);
       
        printf("Id: ");
        scanf("%d",&employee[i].id);
       
        printf("Salary: ");
        scanf("%d",&employee[i].salary);
 
        printf("\n");
    }
 
    //Displaying Employee details
 
    printf("-------------- All Employees Details ---------------\n");
 
    for(i=0; i<n; i++){
 
        printf("Name \t: ");
        printf("%s \n",employee[i].name);
 
        printf("Id \t: ");
        printf("%d \n",employee[i].id);
 
        printf("Salary \t: ");
        printf("%d \n",employee[i].salary);
 
        printf("\n");
    }
 
    return 0;
 
}
