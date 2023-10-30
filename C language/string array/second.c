#include <stdio.h>
int main(){
    char name[100];
    int i,sum1=0,sum2=0;
    printf("Enter the string value\n");
    fgets(name,100,stdin);
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]>=65&&name[i]<=90)
        {
            sum1++;
        }
        else if (name[i]>=97&&name[i]<=122)
        {
            sum2++;
        }
    }
    printf("Number of lower case characte is : %d\n",sum1);
    printf("Number of upper case character is : %d\n",sum2);


    return 0;
}