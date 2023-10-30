#include <stdio.h>
#include <string.h>
int main(){
    char s1[100],s2[100];
    int i,j,s,c=0;
    printf("Enter the string = ");
    gets(s1);
    printf("String 1 = %s\n",s1);
    while(s1[c]!='\0')
    {
        c++;
    }
    for(i=1;i<c;i++)
    {
        for(j=1;j<c-i;j++)
        {
            int p=j+i-1;
            for(s=j;s<=p;s++)
            {
                printf("%s",p);

            }
            printf("\n");
        }
    }
    
 

    return 0;
}