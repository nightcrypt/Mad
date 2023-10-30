#include <stdio.h>

int main (){
    int a, b=0,c;
    printf("Enter your number :");
    scanf("%d",&a);
    while (a>=1){
        c=a%10;
        b=b*10+c;
        a=a/10;
    }
    printf("Reversed number is : %d\n",b);










    return 0;
}