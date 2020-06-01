#include<stdio.h>
#define C_SIZE 100
union address
  {
      char name[C_SIZE],House_Name[C_SIZE],city[C_SIZE],state[C_SIZE],pin[C_SIZE];
  }s;
void main()
  {
      union address s;
      printf("Enter Name : ");
      scanf("%s",s.name);
      printf("Enter House Name : ");
      scanf("%s",s.House_Name);
      printf("Enter City : ");
      scanf("%s",s.city);
      printf("Enter State : ");
      scanf("%s",s.state);
      printf("Enter Pin Code : ");
      scanf("%s",s.pin);
      printf("\nDetails \n");
      printf("\nName : %s\nHouse Name : %s\nCity Name: %s\nState : %s\nPin Code : %s",s.name,s.House_Name,s.city,s.state,s.pin);
  }  
