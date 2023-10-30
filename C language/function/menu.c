#include <stdio.h>
void bankmenu(){
    printf("\nBank Menu\n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Balance\n");
    printf("4. Exit\n");
}
int main ()
{
    double balance = 0.0,amount;
    int choice;
    
   do
   {
     bankmenu();
     printf("Enter your choice : ");
     scanf("%d",&choice);
     switch(choice)
      {
        case 1 : 
          printf("Enter the amount to deposit : ");
          scanf("%lf",&amount);
          if(amount<0)
        {
            printf("Entered amount is not correct\n");

        }
        else
        {
            balance+=amount;
            printf("Deposit of $%lf is successful\n",amount);
        }
        break;
        case 2 :
        printf("Enter the amount for withdrawal : ");
        scanf("%lf",&amount);
        if (amount<0)
        {
            printf("Entered amount is incorrect \n");

        }
        else if (amount>balance)
        {
            printf("insufficent funds\n");
        }
        else 
        {
            balance-=amount;
            printf("withdrawal of $%lf is successful\n",amount);

        }
        break;
        case 3:
        printf("Your current balance is $%lf\n",balance);
        break;
        case 4:
        printf("Thanks for chossing us\n");
        break;
        default:
        printf("invalid command\n");
        break;
    }
   }
    while(choice!=4);
    


    return 0;
}