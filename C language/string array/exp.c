#include <stdio.h>
#include <string.h>
int main(){
    char strg1[100],strg2[100],strg3[100];
    int i,j;
    printf("Enter the string : \n");
    gets(strg1);
    gets(strg2);
    printf("\nString 1 = %s\nString 2 = %s\n",strg1,strg2);
    j=0;
   for (j=0;strg1[j]!='\0';j++){
    
   }
    for(i=0;strg2[i]!='\0';i++,j++)
    {
        strg1[j]=strg2[i];
    }
    strg1[j]='\0';
    printf("after conacating \n");
    puts(strg1);
    return 0;
}