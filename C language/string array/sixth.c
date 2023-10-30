#include <stdio.h>
#include <string.h>

int main(){
    char s1[100],s2[100];
    int i,j;
    int flag=0;
    printf("Enter the string :");
    gets(s1);
    j=strlen(s1);
    for(i=0;i<j;i++)
    {
        if(s1[i]!=s1[j-i-1])
        flag=1;
    }
    if (flag==1)
    {
        printf("it is not an a palindrome\n");

    }
    else{
        printf("it is an a palindrome\n");
    }
   
    return 0;
}