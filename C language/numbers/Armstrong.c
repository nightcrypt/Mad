#include <stdio.h>

int main (){
    int a, remainder,s=0,d;
    printf("Enter the number you desire : ");
    scanf("%d",&a);
    d=a;
    while(d>=1)
    {
        remainder=d%10;
        s+=remainder*remainder*remainder;
        d=d/10;
    }
    if (s==a)
    {
    printf("This number is Armstrong number\n");
    }
    else {
        printf("this number is not Armstrong number\n");
        
    }
}