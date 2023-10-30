#include <stdio.h>
int main (){
    int a[5]={100,206,300,409,509};
    int *p[5]={a,a+1,a+2,a+3,a+4};
    int **pp=p;
    pp++;
    printf("%d",**pp);











return 0;
}