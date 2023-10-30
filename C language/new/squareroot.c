#include <stdio.h>
int main(){
    int num;
    float b,squarert;
    printf("Enter the number : ");
    scanf("%d",&num);
    squarert=num/2;
    b=0;
    while(squarert!=b)
    {
        b=squarert;
        printf("value of b %f\n",b);
        squarert=(num/b + b) /2;
        printf("value of squrert %f\n",squarert);
    }
    printf("square root of %d is %f",num,squarert);






    return 0;
}