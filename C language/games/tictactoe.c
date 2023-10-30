#include <stdio.h>

char board[3][3];
int i,j;
    
void printboard(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n");
    }
}



int main(){
    int row , column;
   int player =1;
   int moves=0;

    printf("\n~~Welcome to the game of Tic Tac Toe ~~");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            
            board[i][j]=' ';
           
        }
        printf("\n");
    }
    //print the board
   do{
    printboard(board);
    //player 1 for odd and 2 for even
    player =(moves%2==0)?1:2;
    printf("\nPlayer %d Enter the desire row and column : \n",player);
    scanf("%d%d",&row,&column);
    
    board[row][column] = (player == 1) ? 'X' : 'O';
    moves++;
    if(board[row][column]!=0||row<0||row>2||column<0||column>2)
    printf("invalid command\n");
    }while(1);

  
    
    



    
 
   
    
   return 0;
}