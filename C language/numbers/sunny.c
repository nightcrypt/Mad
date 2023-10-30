#include <stdio.h>

int main(){
    int a,b,d;
    float c;
    printf("Enter the number you desire : ");
    scanf("%d",&a);
    b=a+1;
    d=b/2;
    c=0;
    while(d!=c)
    {
        c=d;
        d=((b/c) +c)/2; 
    }
    if(b%d==0)
    {
        printf("it is a sunny number \n");
    }
    else 
    {
        printf("it is not a sunny number \n");
    }









    return 0;
}