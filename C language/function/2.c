#include <stdio.h>
int mohit(int x , int y)
{
    int result ;
    result = x+y;
    return result;
}

int main(){
    int x,y,result;
    printf("Enter the number \n");
    scanf("%d%d",&x,&y);
    result = mohit(x,y);
    printf("required result %d",result);
    return 0;
}
