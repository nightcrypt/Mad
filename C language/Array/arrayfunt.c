#include <stdio.h>
int new(int a[], int size)
{
    for(int i=0;i<=size;i++)
    {
        a+=2;
    }
    return a;
}
int main (){
    int a[15],b;
    printf("Enter the number :");
    scanf("%d",&a);
    b=new(a,10);
    printf("Your result %d\n",b);
}