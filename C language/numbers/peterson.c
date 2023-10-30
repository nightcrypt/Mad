#include <stdio.h>
int main(){
    int a,b,c=0,d,i,fact=1;
    printf("Enter the number you desire : ");
    scanf("%d",&a);
    d=a;
    while (d>=1)
    {
        b=d%10;
        for(i=1;i<=b;i++)
        {
            fact*=i;
        }
        c+=fact;
        fact=1;
        d/=10;
    }
    if (c==a)
    {
        printf("this is peterson number \n");

    }
    else 
    {
        printf("this is not peterson number \n");
    }
    return 0;
}