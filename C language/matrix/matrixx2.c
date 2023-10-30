# include <stdio.h>
# include <math.h>

int main(){
    int a[20][20],b[20][20],row,colm,i,j;
    int flag=1;
    printf("Enter the row and column respectively \n");
    scanf("%d%d",&row,&colm);
    printf("Enter matrix 1 \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<colm;j++)
        {
            a[i][i]=1;
        }
       
    }
    printf("Matrix 1\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<colm;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of matrix is :\n");
    for (j=0;j<colm;j++)
    {
        for(i=0;i<colm;i++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    /* printf("Enter matrix 2 \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<colm;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Matrix 2\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<colm;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }*/
   /* for(i=0;i<row;i++)
    {
        for (j=0;j<colm;j++)
        {
            if(a[i][j]!=b[i][j])
            {
                flag=0;
                break;
            }
        }
    }
    if (flag==1)
    {
        printf("Matrix are equal\n");
    }
    else{
        printf("Matrixes are not equal\n");
    }*/
   
    return 0;
}