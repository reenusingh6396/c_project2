#include<stdio.h>
#include<conio.h>
/*int checkwin();
void bord();
void computer(int );
void devil(int );*/
char sqr[9]={'1','2','3','4','5','6','7','8','9'};
/*void player_choice()
{
    int choice;
    printf("\n1.want to play with computer\n");
    printf("2.want to play with player\n");
    printf("3.want to play with evil computer\n");
    printf("4. want to exit\n");
    scanf("%d",&choice);
    game_moves(choice);*/
//}
void game_moves(int choose)
{
    int player =1,i,choice;
    char mark;
    if(choose==1)
    {  // int computer=2;
        do
        {
         bord();
         printf("player %d chance...",player);
         scanf("%d",&choice);
         if(player==1)
         {
              if(choice == 1 && sqr[0]=='1')
            {
            sqr[0]='X';
            computer(choice);

            }
         else if(choice == 2 &&sqr[1]=='2')
            {
                sqr[1]='X';
                computer(choice);
            }
         else if(choice == 3 &&sqr[2]=='3')
            {
                sqr[2]='X';
                computer(choice);
            }
         else if(choice == 4&&sqr[3]=='4')
            {
                sqr[3]='X';
                computer(choice);
            }
         else if(choice == 5&&sqr[4]=='5')
            {
                sqr[4]='X';
                computer(choice);
            }
         else if(choice == 6&&sqr[5]=='6')
            {
                sqr[5]='X';
                computer(choice);
            }
         else if(choice == 7&&sqr[6]=='7')
            {
                sqr[6]='X';
                computer(choice);
            }
         else if(choice == 8&&sqr[7]=='8')
           {
                sqr[7]='X';
                computer(choice);
           }
         else if(choice == 9&&sqr[8]=='9')
            {
                sqr[8]='X';
                computer(choice);
            }
         else
         {
             printf("invalid move...");

           //  player--;
             getch();
         }
         }


         i=checkwin();

    }while(i==-1);

 }
 if(choose==3)
    {
         do
        {
         bord();
         printf("player %d chance...",player);
         scanf("%d",&choice);
         if(player==1)
         {
                 if(choice == 1 && sqr[0]=='1')
                {
                sqr[0]='X';
                devil(choice);

                }
             else if(choice == 2 &&sqr[1]=='2')
                {
                    sqr[1]='X';
                    devil(choice);
                }
             else if(choice == 3 &&sqr[2]=='3')
                {
                    sqr[2]='X';
                    devil(choice);
                }
             else if(choice == 4&&sqr[3]=='4')
                {
                    sqr[3]='X';
                    devil(choice);
                }
             else if(choice == 5&&sqr[4]=='5')
                {
                    sqr[4]='X';
                    devil(choice);
                }
             else if(choice == 6&&sqr[5]=='6')
                {
                    sqr[5]='X';
                    devil(choice);
                }
             else if(choice == 7&&sqr[6]=='7')
                {
                    sqr[6]='X';
                    devil(choice);
                }
             else if(choice == 8&&sqr[7]=='8')
               {
                    sqr[7]='X';
                    devil(choice);
               }
             else if(choice == 9&&sqr[8]=='9')
                {
                    sqr[8]='X';
                    devil(choice);
                }
             else
             {
                 printf("invalid move...");

              // player--;
                 getch();
             }
                      i=checkwin();


         }
      }while(i==-1);
   player++;
}
    if(choose==2)
    {
        do
       {
        bord();
        player=(player % 2)? 1 : 2;
         printf("player %d chance...",player);
         scanf("%d",&choice);
         mark= (player==1)? 'X':'O';
         if(choice == 1 && sqr[0]=='1')
            sqr[0]=mark;
         else if(choice == 2 &&sqr[1]=='2')
            sqr[1]=mark;
         else if(choice == 3 &&sqr[2]=='3')
            sqr[2]=mark;
         else if(choice == 4&&sqr[3]=='4')
            sqr[3]=mark;
         else if(choice == 5&&sqr[4]=='5')
            sqr[4]=mark;
         else if(choice == 6&&sqr[5]=='6')
            sqr[5]=mark;
         else if(choice == 7&&sqr[6]=='7')
            sqr[6]=mark;
         else if(choice == 8&&sqr[7]=='8')
            sqr[7]=mark;
         else if(choice == 9&&sqr[8]=='9')
            sqr[8]=mark;
         else
         {
             printf("invalid move...");

             player--;
             getch();
         }
         i=checkwin();
         player++;
    }while(i==-1);
    player--;
  }
    bord();
    if(i==1)
        printf("------PLAYER %d WIN THE GAME------",player);
    else
        printf("------GAME DRAW------");
    getch();
}


void bord()
{
    system("cls");
    printf("\n\n               TIC TAC TOE               \n\n");
    printf("player 1 (x) - player 2 (0)\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", sqr[0], sqr[1], sqr[2]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", sqr[3], sqr[4], sqr[5]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", sqr[6], sqr[7], sqr[8]);

    printf("     |     |     \n\n");

}

int checkwin()//to check game win or not
{
    if(sqr[0]==sqr[1]&&sqr[1]==sqr[2])
       return 1;
    else if(sqr[0]==sqr[3]&&sqr[3]==sqr[6])
        return 1;
    else if(sqr[0]==sqr[4]&&sqr[4]==sqr[8])
        return 1;
    else if(sqr[3]==sqr[4]&&sqr[4]==sqr[5])
        return 1;
    else if(sqr[6]==sqr[7]&&sqr[7]==sqr[8])
        return 1;
    else if(sqr[1]==sqr[4]&&sqr[4]==sqr[7])
        return 1;
    else if(sqr[2]==sqr[5]&&sqr[5]==sqr[8])
        return 1;
    else if(sqr[2]==sqr[4]&&sqr[4]==sqr[6])
        return 1;
    else if(sqr[0]!='1'&&sqr[1]!='2'&&sqr[2]!='3'&&sqr[3]!='4'&&sqr[4]!='5'&&sqr[5]!='6'&&sqr[6]!='7'&&sqr[7]!='8'&&sqr[8]!='9')
        return 0;
    else
        return -1;
}

void computer(int chance)
{

        if(chance==1&&sqr[1]=='2')
            {
                 sqr[1]='O';
            }
        else if(chance==2&&sqr[2]=='3')
            sqr[2]='O';
        else if(chance==3&&sqr[4]=='5')
            sqr[4]='O';
        else if(chance==4&&sqr[4]=='5')
            sqr[4]='O';
        else if(chance==5&&sqr[5]=='6')
            sqr[5]='O';
        else if(chance==6&&sqr[6]=='7')
            sqr[6]='O';
        else if(chance==7&&sqr[7]=='8')
            sqr[7]='O';
        else if(chance==9&&sqr[7]=='8')
                    sqr[8]='O';
        else if(chance==6&&sqr[5]=='6')
                sqr[5]='O';
        else if(chance==8&&sqr[3]=='4')
            sqr[3]='O';
        else if(chance==7&&sqr[2]=='3')
            sqr[2]='O';
}
void devil(int move)
{
        if(move==1&&sqr[0]!='1'&&sqr[1]=='2'&&sqr[2]=='3')
                 sqr[1]='O';
       else if(move==2&&sqr[1]!='2'&&sqr[2]=='3')
            sqr[2]='O';
        else if(sqr[3]!='4'&&sqr[4]!='5'&&sqr[0]!='1'&&sqr[5]=='6'&&sqr[8]=='9'&&move==4||move==5||move==1)
           {
                sqr[5]='O';
                sqr[8]='O';
           }
        else if(move==4&&sqr[4]=='5')
            sqr[4]='O';
        else if(move==5&&sqr[5]=='6')
            sqr[5]='O';
        else if(move==6&&sqr[6]=='7')
            sqr[6]='O';
        else if(move==7&&sqr[6]!='7')
            {
               if(sqr[7]=='8')
                sqr[7]='O';
               else if(sqr[5]=='6')
                sqr[5]=='6';
            }
        else if(move==9&&sqr[7]=='8')
                    sqr[8]='O';
        else if(move==9&&sqr[5]=='6')
                sqr[5]='O';
        else if(move==8&&sqr[3]=='4')
            sqr[3]='O';
        else if(move==3&&sqr[4]=='5')
            sqr[4]='O';
        else if(move==4&&sqr[6]=='7')
            sqr[6]='O';
        else if(move==8&&sqr[2]=='3')
            sqr[2]='O';
        else if(move==7&&sqr[2]=='3')
            sqr[2]='O';
        else if(move==3&&sqr[7]=='8')
            sqr[7]='O';
}

int main()
{
    int choice;
    printf("\n\n          WELCOME TO MY GAME           \n\n");
    printf("\n1.want to play with computer\n");
    printf("2.want to play with player\n");
    printf("3.want to play with evil computer\n");
    printf("4. want to exit\n");
    scanf("%d",&choice);
    game_moves(choice);
    return 0;
}
