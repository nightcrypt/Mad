#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
    char first[100],second[100];
    int i;
    printf("Enter the string = ");
    gets(first);
    for(i=0;first[i]!='\0';i++)
    {
        second[i]=first[i];
    }
    second[i]='\0';
    printf("\nString 1 = %s",first);
    printf("\nString 2 = %s",second);
    getch();

    return 0;
}