#include <stdio.h>
#include <string.h>

int main(){
   char s1[100],s2[100];
   int i,j,c=0;
   printf("Enter string = ");
   gets(s1);
   printf("string 1 = %s\n",s1);
   for(i=0;s1[i]!='\0';i++)
   {
    c++;
   }
   j=0;
   for(i=c-1;i>=0;i--)
   {
    s2[j]=s1[i];
    j++;
    
   }
   printf("Reverse of string is : %s\n",s2);
   
    return 0;
}