#include <stdio.h>

void hollowRectangle(int row, int column) {
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= column; j++) {
            if (i == 1 || i == row|| j == 1 || j == column)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

int main() {
    int a,b;
    printf("Enter the number of row and column : \n");
    scanf("%d%d",&a,&b);
    hollowRectangle(a,b);
    return 0;
}
