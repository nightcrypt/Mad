#include <stdio.h>
int main (){
    int a ,b;
    int *p;
    a=10;
    b=20;
    p=&a;
    printf("address of : %d\n",&p);
    printf("valuse of : %d\n",*p);


return 0;

}