#include <stdio.h>

void area(int a){
    int b;
    b=a*a;
    printf("Area of square is : %d",b);
}
void area(int a, int b)
{
    int c;
    c=a*b;
    printf("Area of rectangle is : %d",c);
}
void area(float a)
{
    float b,c;
    c=3.14;
    b=c*a*a;
    printf("Area of circle is : %f",a);

}
int main (){
    int a;
    float c,b;
    printf("Enter value of a and b : ");
    scanf("%d%d",&a,&b);
    area (a);





return 0;
}