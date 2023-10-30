#include <stdio.h>

void triangle(int size){
    for(int i=1;i<=size;i++)
    {
        for(int j=1;j<=size-i;j++)
        {    
            printf(" ")   ; 
        }
        for(int k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int a;
    printf("Enter the size you want : ");
    scanf("%d",&a);
    triangle(a);
    return 0;

}