#include <stdio.h>
void sum(int c , int d)
{
    int result;
    result = c+d;
    printf("required result \n%d",result);

}
int main (){
    int x,y;
    printf("Enter the number\n");
    scanf("%d%d",&x,&y);
    sum(x,y);
    return 0;
}