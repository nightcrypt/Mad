# include <stdio.h>
int main(){
    int a[20][20],i,j,row,colm,sum=0,m=0,b[20][20],c[20][20];
    printf("enter number of row\n");
    scanf("%d",&row);
    printf("enter the number of column\n");
    scanf("%d",&colm);
    printf("enter the value for matrix\n");
    for (i=0;i<row;i++)
    {
        for(j=0;j<colm;j++)
        {
            scanf("%d",&a[i][j]); 
        }
    }
    printf("matrix 1 \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<colm;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    /* for(i=0;i<row;i++)
    {
        for(j=0;j<colm;j++)
        {
            sum+=a[i][j];
        }
    }*/
   /* printf("Sum of all element is : %d\n",sum);
    sum=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<colm;j++)
        {
            sum+=a[i][j];
        }
        printf("sum of %d row is : %d\n",i+1,sum);
        sum=0;
    }
    sum=0;
    for (j=0;j<colm;j++)
    {
        for(i=0;i<row;i++)
        {
            sum+=a[i][j];
        }
        printf("sum of %d column is : %d\n",j+1,sum);
        sum=0;
    }
    sum=0;
    for(i=0;i<row;i++)
    {
        sum+=a[i][i];
        m+=a[i][row-i-1];
    }
    printf("Sum of main diagonal is: %d\n",sum);
    printf("Sum of off diagonal is : %d\n",m);*/
    printf("enter the coefficent for new matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<colm;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("matrix 2 \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<colm;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    // sum of matrix 1 and 2
    printf("Sum of matrix 1 and 2 \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<colm;j++)
        {
            printf("%d\t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }


    return 0;
}