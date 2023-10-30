#include <stdio.h>
#include <string.h>
int main(){
    char s1[100],s2[100];
    int i,j,c=0;
    printf("Enter the string = ");
    gets(s1);
    gets(s2);
    printf("String 1 = %s\n",s1);
    printf("String 2 = %s\n",s2);
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]>='a'&&s1[i]<='z')
        {
           s1[i] = s1[i]-32;
        }
    }
    printf("Required result = %s\n",s1);
    i=0;
    for(i=0;s2[i]!='\0';i++)
    {
        if (s2[i]>=65&&s2[i]<=90)
        {
            s2[i]=s2[i]+32;
        }
    }
    printf("required result = %s\n",s2);





    return 0;
}