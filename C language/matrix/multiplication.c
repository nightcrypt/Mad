#include <stdio.h>
int main(){
    int a[100][100],b[100][100],d[100][100];
    int i,k,j;
    int r,c;
    printf("Number of row : \n");
    scanf("%d",&r);
    printf("Enter the number of column :\n");
    scanf("%d",&c);
    printf("Enter the coefficent for matrix 1\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix 1\n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the coefficent for matrix 2\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Matrix 2\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
        {
             d[i][j]=0;
            for(j=0;j<c;j++)
            {
               
                for(k=0;k<c;k++)
                {
                    d[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
    printf("Multiplication of matrix 1 and 2 is :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",d[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
