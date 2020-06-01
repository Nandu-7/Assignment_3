#include <stdio.h>
   void main()
    {
      int vowel=0,consonant=0,space=0,i;
      char str[100]; 
       printf("Enter a string :");
       gets(str);
       for(i=0;str[i]!='\0';i++)
       {
       if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
       {
         vowel++;
        }
       else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
       {
        consonant++;
         }
        else 
        {
         
         space++;
        }
      }
        printf("vowels:%d\n",vowel);
        printf("consonants:%d\n",consonant);
        printf("white spaces: %d",space);
}
