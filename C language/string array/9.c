#include <stdio.h>
#include <string.h>

int main() {
    char s1[100],s2[100];
    int i,j;
    printf("Enter the string =");
    gets(s1);
    printf("String 1 = %s\n",s1);
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]>=65&&s1[i]<=90)
        {
            s1[i]=s1[i]+32;
        }
        else if(s1[i]>=97&&s1[i]<=122)
                {
                    s1[i]=s1[i]-32;
                }
    }
    printf("required result is = %s\n",s1);

    return 0;
}
