#include <stdio.h>
int main(){
    char first[100],second[100];
    int i,j,sum1=0,sum2=0;
    printf("Enter string 1st : \n");
    fgets(first,100,stdin);
    printf("Enter second string :\n");
    fgets(second,100,stdin);
  
    for(i=0;first[i]!='\0';i++)
    {
        sum1++;
    }
    for(j=0;second[j]!='\0';j++)
    {
        sum2++;
    }
      if(sum1==sum2)
    {
        printf("both string are equal\n");
    }
    else{
        printf("both string are not equal\n");

    }






    return 0;
}