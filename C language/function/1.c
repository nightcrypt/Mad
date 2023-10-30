#include <stdio.h>

double newopt(double x, double y, char operate){
    switch (operate){
        case '+': return x+y;
        case '-': return x-y;
        case '*': return x*y;
        case '/': return x/y;
        default : printf("Invalid Command");
        break;
    }
}
int main(){
    double x,y, result,i;
    char operate;
    printf("Enter the number of your choice \n");
    scanf("%lf%lf",&x,&y);
    printf("Enter the symbol which you want to use +,-,*,/ \n");
    scanf("%c",&operate);
    result = newopt(x,y,operate);
    printf("required result is =  %lf",result);
    
  
return 0;




}
