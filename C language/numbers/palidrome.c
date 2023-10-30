#include <stdio.h>

int main (){
    int a, b=0,c,d;
    printf("Enter your number :");
    scanf("%d",&a);
    d=a;
    while (d>=1){
        c=d%10;
        b=b*10+c;
        d=d/10;
    }
    if(b==a){
    printf("This is a palindrome\n");
    }
    else {
        printf("This number is not an palindrome\n");

    }










    return 0;
}