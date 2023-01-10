#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

char square[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

int winCondition_check();
void tic_tac_toe();

//Introduction
intro()
{
    system("color 0f");
    system("cls");
    printf("\n\n\n\n\t\t\t    COMPUTER PROGRAMMING PROJECT");
    printf("\n\n\t\t\t\t    GAME_ZONE");
    printf("\n\n\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\n\n\t\t\t\t    Designed By");
    printf("\n\n\t\t Vijeet     Akash     Bhawesh     Manish     Sahil\n\n");
    getch();
}

// A function to design the board of the snake and ladder
void gameBoard(int curp, char player[4])
{
    int i, j, t, c, sft = 0, diceNum, pos1, pos2, pos3, pos4;

    printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("  \t\tSNAKE & LADDER \t\t       \n");
    printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
                    
    for (i = 10; i > 0; i--)  // In this loop the conditions get satisfied alternately to print each row
    {
        t = i - 1;
        if ((sft % 2) == 0)
        {
            c = 0;
            for (j = 10; j >= 1; j--)
            {
                diceNum = (i * j) + (t * c++);

                if (curp == diceNum)
                    printf("%s\t", player); // will replace number in the board with the player's symbol
                else
                    printf("%d\t", diceNum);
            }
            sft++;
        }
        else
        {
            c = 9;
            for (j = 1; j <= 10; j++)
            {
                diceNum = (i * j) + (t * c--);

                if (curp == diceNum)
                    printf("%s\t", player);
                else
                    printf("%d\t", diceNum);
            }

            sft++;
        }
        printf("\n\n");
    }
    printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
}

int main()
{

    int dice_number;
    srand(time(0));    
    dice_number = rand() % 6 + 1;      // generating random dice number
    int i, cur_pos1 = 0, cur_pos2 = 0, cur_pos3 = 0, cur_pos4 = 0, cur_pos5 = 0;
    char p1[4], p2[4], p3[4], p4[4], p5[4];
    int total = 21, person, computer;
    char ch;
    int o = 0;
    int player = 1, j, choice;
    char mark;
    int game;
    intro();
    while (o==0)                    // loop to always bring back to the menu
    {
        system("color 1e");
        system("cls");
        printf("\n\n\tWelcome to the GAME_ZONE !!!\n\n");
        printf("\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
        printf("\n||\t\tChoose a game \t\t     ||\n||\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\t\t     ||\n");
        printf("||\tPress [1] to Play 21 Matchsticks     ||\n");
        printf("||\tPress [2] to Play Tic-Tac-Toe \t     ||\n");
        printf("||\tPress [3] to Play Snake & Ladder     ||\n");
        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
        scanf("%d", &game);
        cur_pos1 = 0, cur_pos2 = 0, cur_pos3 = 0, cur_pos4 = 0;
        if (game == 1)              // 1st Game | 21 MATCHSTICKS     
        {
            system("color e0");
            while (1)
            {
                
                system("cls");
                printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("  \t\t21 Matchsticks \t\t       \n");
                printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("\nThere are 21 Matches. You have to pick either 1,2,3 or 4.\n");
                printf("Computer will also do the same.\n");
                printf("The one who will be left with one matchstick loses!\n");
                printf("\nCan you beat the champion CPU ? Lets see !!\n\n");
                printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("Number of Match sticks left = %d\n\t\t\t      \xcd\xcd\n", total);
                printf("Pick 1 or 2 or 3 or 4 matches = ");
                scanf("%d", &person);

                if (person > 4 || person < 1)
                    continue;

                total -= person;

                printf("\nNumber of matches left = %d\n\t\t\t \xcd\xcd\n", total);

                computer = 5 - person;                //it's magic!!

                printf("Out of which computer picked up %d\n", computer);

                total -= computer;

                if (total == 1)
                {
                    printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    printf("\nNumber of matches left = %d\n\t\t\t \xcd\xcd\n", total);
                    printf("\n\n>> Sorry!! :( You lost the Game.\n\nPress Any Key to go back to Menu.");
                    total = 21;
                    break;
                }
                getch();
            }
            getch();
            system("cls");
        }
        else if (game == 2)         // 2nd Game | TIC TAC TOE        
        {
            system("color a0");
            do
            {
                system("cls");
                printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("  \t\tTIC-TAC-TOE   \t\t       \n");
                printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
                tic_tac_toe();
                player = (player % 2) ? 1 : 2;

                printf("Player %d, enter a number:  ", player);
                scanf("%d", &choice);

                mark = (player == 1) ? 'X' : 'O';

                if (choice == 1 && square[0] == '1')
                    square[0] = mark;

                else if (choice == 2 && square[1] == '2')
                    square[1] = mark;

                else if (choice == 3 && square[2] == '3')
                    square[2] = mark;

                else if (choice == 4 && square[3] == '4')
                    square[3] = mark;

                else if (choice == 5 && square[4] == '5')
                    square[4] = mark;

                else if (choice == 6 && square[5] == '6')
                    square[5] = mark;

                else if (choice == 7 && square[6] == '7')
                    square[6] = mark;

                else if (choice == 8 && square[7] == '8')
                    square[7] = mark;

                else if (choice == 9 && square[8] == '9')
                    square[8] = mark;

                else
                {
                    printf("Invalid move! Please Mark another Index Number. \n");

                    player--; // this will retain that player's chance on wrong move
                    getch();
                }
                j = winCondition_check();

                player++;
            } while (j == 0);

            if (j == 1)
            {
                system("cls");
                printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("  \t\tTIC-TAC-TOE   \t\t       \n");
                printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
                tic_tac_toe();
                printf(">> Player %d Wins !!!\n\nPress Any Key to go back to Menu.", --player);
                getch();
                for(int i=0, ja=49; i<9; i++, ja++)               // j = 1 ASCII Value
                    square[i] = ja;
                }
            else
            {
                system("cls");
                printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                printf("  \t\tTIC-TAC-TOE   \t\t       \n");
                printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
                tic_tac_toe();
                printf(">> Game Draw\n\nPress Any Key to go back to Menu.");
                getch();
                for(int i=0, ja=49; i<9; i++, ja++)               // j = 1 ASCII Value
                    square[i] = ja;
            }
        }
        else if (game == 3)         // 3rd Game | SNAKE & LADDER     
        {
            system("color f0");
            system("cls");
            printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
            printf("  \t\tSNAKE & LADDER \t\t       \n");
            printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
            printf(" Watch out every move you make, keep away from the snake!\n ");
            printf("Search for the ladder to reach the goal faster!\n");
            printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
            printf("Player 1 Enter your tag \n");
            scanf("%s", &p1);
            printf("Player 2 Enter your tag \n");
            scanf("%s", &p2);
            printf("Player 3 Enter your tag \n");
            scanf("%s", &p3);
            printf("Player 4 Enter your tag \n");
            scanf("%s", &p4);
            char ch;
            while (cur_pos1 < 100 && cur_pos2 < 100 && cur_pos3 < 100  && cur_pos4 < 100 )
            {
                printf("Snakes: | 25 to 3  | 56 to 48 | 59 to 1  | 69 to 32 | 83 to 57 | 91 to 73 | 94 to 26 | 99 to 80 |\n");
                printf("Ladder: | 4 to 14  | 9 to 31 | 20 to 38  | 28 to 84 | 36 to 44 | 42 to 63 | 51 to 67 | 62 to 81 | 71 to 90 |\n");

                printf("Choose your option\n");
                printf("[1] Player 1 plays\t");
                printf("[2] Player 2 plays\t");
                printf("[3] Player 3 plays\t");
                printf("[4] Player 4 plays\t\n");

                scanf("%s", &ch);

                switch (ch)
                {

                case '1':
                    dice_number = rand() % 6 + 1;
                    system("cls");
                    cur_pos1 = dice_number + cur_pos1;
                    int flag = dice_number;
                    if (cur_pos1 < 100)       // below are all the conditions when player 1 encounter snakes or ladders
                    {
                        if (cur_pos1 == 25)
                        {
                            gameBoard(3, p1);
                            cur_pos1 = 3;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 25 to %d\n", cur_pos1);
                            getch();
                            system("cls");
                        }
                        if (cur_pos1 == 56)
                        {
                            gameBoard(48, p1);
                            cur_pos1 = 48;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 56 to %d\n", cur_pos1);
                            getch();
                            system("cls");
                        }
                        if (cur_pos1 == 59)
                        {
                            gameBoard(1, p1);
                            cur_pos1 = 1;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 59 to %d\n", cur_pos1);
                            getch();
                            system("cls");
                        }
                        if (cur_pos1 == 69)
                        {
                            gameBoard(32, p1);
                            cur_pos1 = 32;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 69 to %d\n", cur_pos1);
                            getch();
                            system("cls");
                        }
                        if (cur_pos1 == 83)
                        {
                            gameBoard(57, p1);
                            cur_pos1 = 57;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 83 to %d\n", cur_pos1);
                            getch();
                            system("cls");
                        }
                        if (cur_pos1 == 91)
                        {
                            gameBoard(73, p1);
                            cur_pos1 = 73;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 91 to %d\n", cur_pos1);
                            getch();
                            system("cls");
                        }
                        if (cur_pos1 == 94)
                        {
                            gameBoard(26, p1);
                            cur_pos1 = 26;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 94 to %d\n", cur_pos1);
                            getch();
                            system("cls");
                        }
                        if (cur_pos1 == 99)
                        {
                            gameBoard(80, p1);
                            cur_pos1 = 80;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 99 to %d\n", cur_pos1);
                            getch();
                            system("cls");
                        }
                        if (cur_pos1 == 4)
                        {
                            gameBoard(14, p1);
                            cur_pos1 = 14;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 4 to %d\n", cur_pos1);
                            getch();
                            system("cls");
                        }
                        if (cur_pos1 == 9)
                        {
                            gameBoard(31, p1);
                            cur_pos1 = 31;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 9 to %d\n", cur_pos1);
                            getch();
                            system("cls");
                        }
                        if (cur_pos1 == 20)
                        {
                            gameBoard(38, p1);
                            cur_pos1 = 38;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 20 to %d\n", cur_pos1);
                            getch();
                            system("cls");
                        }
                        if (cur_pos1 == 28)
                        {
                            gameBoard(84, p1);
                            cur_pos1 = 84;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 28 to %d\n", cur_pos1);
                            getch();
                            system("cls");
                        }
                        if (cur_pos1 == 36)
                        {
                            gameBoard(44, p1);
                            cur_pos1 = 44;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 36 to %d\n", cur_pos1);
                            getch();
                            system("cls");
                        }
                        if (cur_pos1 == 42)
                        {
                            gameBoard(63, p1);
                            cur_pos1 = 63;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 42 to %d\n", cur_pos1);
                            getch();
                            system("cls");
                        }
                        if (cur_pos1 == 51)
                        {
                            gameBoard(67, p1);
                            cur_pos1 = 67;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 51 to %d\n", cur_pos1);
                            getch();
                            system("cls");
                        }
                        if (cur_pos1 == 62)
                        {
                            gameBoard(81, p1);
                            cur_pos1 = 81;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 62 to %d\n", cur_pos1);
                            getch();
                            system("cls");
                        }
                        if (cur_pos1 == 71)
                        {
                            gameBoard(90, p1);
                            cur_pos1 = 90;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 71 to %d\n", cur_pos1);
                            getch();
                            system("cls");
                        }

                        else
                        {
                            gameBoard(cur_pos1, p1);
                        }
                        printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    }
                    
                    else if (cur_pos1 > 100)
                    {
                        gameBoard(cur_pos1-flag, p1);
                        cur_pos1 = cur_pos1-flag;
                        printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                        printf("\nHmmm... Can't Exceed 100 !!\nTry Again\n", cur_pos1);
                        getch();
                        system("cls");
                        gameBoard(cur_pos1, p1);
                    }
                    
                    else if (cur_pos1 == 100)
                    {

                        printf("\n>> Player 1 won!\n\nPress Any Key to go back to Menu.\n\n");
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    }
                    printf("\nPlayer 1 position is %d\n\n", cur_pos1);
                    printf("Player 2 position is %d\n\n", cur_pos2);
                    printf("Player 3 position is %d\n\n", cur_pos3);
                    printf("Player 4 position is %d\n\n", cur_pos4);
                    
                    break;
                case '2':
                    dice_number = rand() % 6 + 1;
                    system("cls");
                    cur_pos2 = dice_number + cur_pos2;
                    flag = dice_number;
                    if (cur_pos2 < 100)     // below are all the conditions when player 2 encounter snakes or ladders
                    {
                        if (cur_pos2 == 25)
                        {
                            gameBoard(3, p2);
                            cur_pos2 = 3;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 25 to %d\n", cur_pos2);
                            getch();
                            system("cls");
                        }
                        if (cur_pos2 == 56)
                        {
                            gameBoard(48, p2);
                            cur_pos2 = 48;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 56 to %d\n", cur_pos2);
                            getch();
                            system("cls");
                        }
                        if (cur_pos2 == 59)
                        {
                            gameBoard(1, p2);
                            cur_pos2 = 1;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 59 to %d\n", cur_pos2);
                            getch();
                            system("cls");
                        }
                        if (cur_pos2 == 69)
                        {
                            gameBoard(32, p2);
                            cur_pos2 = 32;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 69 to %d\n", cur_pos2);
                            getch();
                            system("cls");
                        }
                        if (cur_pos2 == 83)
                        {
                            gameBoard(57, p2);
                            cur_pos2 = 57;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 83 to %d\n", cur_pos2);
                            getch();
                            system("cls");
                        }
                        if (cur_pos2 == 91)
                        {
                            gameBoard(73, p2);
                            cur_pos2 = 73;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 91 to %d\n", cur_pos2);
                            getch();
                            system("cls");
                        }
                        if (cur_pos2 == 94)
                        {
                            gameBoard(26, p2);
                            cur_pos2 = 26;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 94 to %d\n", cur_pos2);
                            getch();
                            system("cls");
                        }
                        if (cur_pos2 == 99)
                        {
                            gameBoard(80, p2);
                            cur_pos2 = 80;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 99 to %d\n", cur_pos2);
                            getch();
                            system("cls");
                        }
                        if (cur_pos2 == 4)
                        {
                            gameBoard(14, p2);
                            cur_pos2 = 14;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 4 to %d\n", cur_pos2);
                            getch();
                            system("cls");
                        }
                        if (cur_pos2 == 9)
                        {
                            gameBoard(31, p2);
                            cur_pos2 = 31;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 9 to %d\n", cur_pos2);
                            getch();
                            system("cls");
                        }
                        if (cur_pos2 == 20)
                        {
                            gameBoard(38, p2);
                            cur_pos2 = 38;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 20 to %d\n", cur_pos2);
                            getch();
                            system("cls");
                        }
                        if (cur_pos2 == 28)
                        {
                            gameBoard(84, p2);
                            cur_pos2 = 84;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 28 to %d\n", cur_pos2);
                            getch();
                            system("cls");
                        }
                        if (cur_pos2 == 36)
                        {
                            gameBoard(44, p2);
                            cur_pos2 = 44;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 36 to %d\n", cur_pos2);
                            getch();
                            system("cls");
                        }
                        if (cur_pos2 == 42)
                        {
                            gameBoard(63, p2);
                            cur_pos2 = 63;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 42 to %d\n", cur_pos2);
                            getch();
                            system("cls");
                        }
                        if (cur_pos2 == 51)
                        {
                            gameBoard(67, p2);
                            cur_pos2 = 67;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 51 to %d\n", cur_pos2);
                            getch();
                            system("cls");
                        }
                        if (cur_pos2 == 62)
                        {
                            gameBoard(81, p2);
                            cur_pos2 = 81;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 62 to %d\n", cur_pos2);
                            getch();
                            system("cls");
                        }
                        if (cur_pos2 == 71)
                        {
                            gameBoard(90, p2);
                            cur_pos2 = 90;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 71 to %d\n", cur_pos2);
                            getch();
                            system("cls");
                        }

                        else
                        {
                            gameBoard(cur_pos2, p2);
                        }
                        printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    }

                    else if (cur_pos2 > 100)
                    {
                        gameBoard(cur_pos2-flag, p2);
                        cur_pos2 = cur_pos2-flag;
                        printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                        printf("\nHmmm... Can't Exceed 100 !!\nTry Again\n", cur_pos2);
                        getch();
                        system("cls");
                        gameBoard(cur_pos2, p2);
                    }
                    
                    else if (cur_pos2 == 100)
                    {

                        printf("\n>> Player 2 won!\n\nPress Any Key to go back to Menu.\n\n");
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    }
                    printf("\nPlayer 1 position is %d\n\n", cur_pos1);
                    printf("Player 2 position is %d\n\n", cur_pos2);
                    printf("Player 3 position is %d\n\n", cur_pos3);
                    printf("Player 4 position is %d\n\n", cur_pos4);
                    
                    break;
                case '3':
                    dice_number = rand() % 6 + 1;
                    system("cls");
                    cur_pos3 = dice_number + cur_pos3;
                    flag = dice_number;
                    if (cur_pos3 < 100)      // below are all the conditions when player 3 encounter snakes or ladders
                    {
                        if (cur_pos3 == 25)
                        {
                            gameBoard(3, p3);
                            cur_pos3 = 3;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 25 to %d\n", cur_pos3);
                            getch();
                            system("cls");
                        }
                        if (cur_pos3 == 56)
                        {
                            gameBoard(48, p3);
                            cur_pos3 = 48;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 56 to %d\n", cur_pos3);
                            getch();
                            system("cls");
                        }
                        if (cur_pos3 == 59)
                        {
                            gameBoard(1, p3);
                            cur_pos3 = 1;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 59 to %d\n", cur_pos3);
                            getch();
                            system("cls");
                        }
                        if (cur_pos3 == 69)
                        {
                            gameBoard(32, p3);
                            cur_pos3 = 32;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 69 to %d\n", cur_pos3);
                            getch();
                            system("cls");
                        }
                        if (cur_pos3 == 83)
                        {
                            gameBoard(57, p3);
                            cur_pos3 = 57;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 83 to %d\n", cur_pos3);
                            getch();
                            system("cls");
                        }
                        if (cur_pos3 == 91)
                        {
                            gameBoard(73, p3);
                            cur_pos3 = 73;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 91 to %d\n", cur_pos3);
                            getch();
                            system("cls");
                        }
                        if (cur_pos3 == 94)
                        {
                            gameBoard(26, p3);
                            cur_pos3 = 26;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 94 to %d\n", cur_pos3);
                            getch();
                            system("cls");
                        }
                        if (cur_pos3 == 99)
                        {
                            gameBoard(80, p3);
                            cur_pos3 = 80;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 99 to %d\n", cur_pos3);
                            getch();
                            system("cls");
                        }
                        if (cur_pos3 == 4)
                        {
                            gameBoard(14, p3);
                            cur_pos3 = 14;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 4 to %d\n", cur_pos3);
                            getch();
                            system("cls");
                        }
                        if (cur_pos3 == 9)
                        {
                            gameBoard(31, p3);
                            cur_pos3 = 31;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 9 to %d\n", cur_pos3);
                            getch();
                            system("cls");
                        }
                        if (cur_pos3 == 20)
                        {
                            gameBoard(38, p3);
                            cur_pos3 = 38;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 20 to %d\n", cur_pos3);
                            getch();
                            system("cls");
                        }
                        if (cur_pos3 == 28)
                        {
                            gameBoard(84, p3);
                            cur_pos3 = 84;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 28 to %d\n", cur_pos3);
                            getch();
                            system("cls");
                        }
                        if (cur_pos3 == 36)
                        {
                            gameBoard(44, p3);
                            cur_pos3 = 44;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 36 to %d\n", cur_pos3);
                            getch();
                            system("cls");
                        }
                        if (cur_pos3 == 42)
                        {
                            gameBoard(63, p3);
                            cur_pos3 = 63;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 42 to %d\n", cur_pos3);
                            getch();
                            system("cls");
                        }
                        if (cur_pos3 == 51)
                        {
                            gameBoard(67, p3);
                            cur_pos3 = 67;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 51 to %d\n", cur_pos3);
                            getch();
                            system("cls");
                        }
                        if (cur_pos3 == 62)
                        {
                            gameBoard(81, p3);
                            cur_pos3 = 81;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 62 to %d\n", cur_pos3);
                            getch();
                            system("cls");
                        }
                        if (cur_pos3 == 71)
                        {
                            gameBoard(90, p3);
                            cur_pos3 = 90;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 71 to %d\n", cur_pos3);
                            getch();
                            system("cls");
                        }

                        else
                        {
                            gameBoard(cur_pos3, p3);
                        }
                        printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    }
                    
                    else if (cur_pos3 > 100)
                    {
                        gameBoard(cur_pos3-flag, p3);
                        cur_pos3 = cur_pos3-flag;
                        printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                        printf("\nHmmm... Can't Exceed 100 !!\nTry Again\n", cur_pos3);
                        getch();
                        system("cls");
                        gameBoard(cur_pos3, p3);
                    }

                    else if (cur_pos3 == 100)
                    {

                        printf("\n>> Player 3 won!\n\nPress Any Key to go back to Menu.\n\n");
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    }
                    printf("\nPlayer 1 position is %d\n\n", cur_pos1);
                    printf("Player 2 position is %d\n\n", cur_pos2);
                    printf("Player 3 position is %d\n\n", cur_pos3);
                    printf("Player 4 position is %d\n\n", cur_pos4);
                    
                    break;
                case '4':
                    dice_number = rand() % 6 + 1;
                    system("cls");
                    cur_pos4 = dice_number + cur_pos4;
                    flag = dice_number;
                    if (cur_pos4 < 100)       // below are all the conditions when player 4 encounter snakes or ladders
                    {
                        if (cur_pos4 == 25)
                        {
                            gameBoard(3, p4);
                            cur_pos4 = 3;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 25 to %d\n", cur_pos4);
                            getch();
                            system("cls");
                        }
                        if (cur_pos4 == 56)
                        {
                            gameBoard(48, p4);
                            cur_pos4 = 48;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 56 to %d\n", cur_pos4);
                            getch();
                            system("cls");
                        }
                        if (cur_pos4 == 59)
                        {
                            gameBoard(1, p4);
                            cur_pos4 = 1;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 59 to %d\n", cur_pos4);
                            getch();
                            system("cls");
                        }
                        if (cur_pos4 == 69)
                        {
                            gameBoard(32, p4);
                            cur_pos4 = 32;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 69 to %d\n", cur_pos4);
                            getch();
                            system("cls");
                        }
                        if (cur_pos4 == 83)
                        {
                            gameBoard(57, p4);
                            cur_pos4 = 57;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 83 to %d\n", cur_pos4);
                            getch();
                            system("cls");
                        }
                        if (cur_pos4 == 91)
                        {
                            gameBoard(73, p4);
                            cur_pos4 = 73;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 91 to %d\n", cur_pos4);
                            getch();
                            system("cls");
                        }
                        if (cur_pos1 == 94)
                        {
                            gameBoard(26, p4);
                            cur_pos4 = 26;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 94 to %d\n", cur_pos4);
                            getch();
                            system("cls");
                        }
                        if (cur_pos1 == 99)
                        {
                            gameBoard(80, p4);
                            cur_pos4 = 80;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nOops! you stepped on Snake.\n>> From 99 to %d\n", cur_pos4);
                            getch();
                            system("cls");
                        }
                        if (cur_pos1 == 4)
                        {
                            gameBoard(14, p4);
                            cur_pos4 = 14;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 4 to %d\n", cur_pos4);
                            getch();
                            system("cls");
                        }
                        if (cur_pos1 == 9)
                        {
                            gameBoard(31, p4);
                            cur_pos4 = 31;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 9 to %d\n", cur_pos4);
                            getch();
                            system("cls");
                        }
                        if (cur_pos1 == 20)
                        {
                            gameBoard(38, p4);
                            cur_pos4 = 38;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 20 to %d\n", cur_pos4);
                            getch();
                            system("cls");
                        }
                        if (cur_pos1 == 28)
                        {
                            gameBoard(84, p4);
                            cur_pos4 = 84;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 28 to %d\n", cur_pos4);
                            getch();
                            system("cls");
                        }
                        if (cur_pos1 == 36)
                        {
                            gameBoard(44, p4);
                            cur_pos4 = 44;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 36 to %d\n", cur_pos4);
                            getch();
                            system("cls");
                        }
                        if (cur_pos1 == 42)
                        {
                            gameBoard(63, p4);
                            cur_pos4 = 63;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 42 to %d\n", cur_pos4);
                            getch();
                            system("cls");
                        }
                        if (cur_pos1 == 51)
                        {
                            gameBoard(67, p4);
                            cur_pos4 = 67;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 51 to %d\n", cur_pos4);
                            getch();
                            system("cls");
                        }
                        if (cur_pos1 == 62)
                        {
                            gameBoard(81, p4);
                            cur_pos4 = 81;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 62 to %d\n", cur_pos4);
                            getch();
                            system("cls");
                        }
                        if (cur_pos1 == 71)
                        {
                            gameBoard(90, p4);
                            cur_pos4 = 90;
                            printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                            printf("\nHurray!! you found a ladder.\n>> From 71 to %d\n", cur_pos4);
                            getch();
                            system("cls");
                        }

                        else
                        {
                            gameBoard(cur_pos4, p4);
                        }
                        printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    }

                    else if (cur_pos4 > 100)
                    {
                        gameBoard(cur_pos4-flag, p4);
                        cur_pos4 = cur_pos4-flag;
                        printf("\t\t\t\tDice = %d\n", dice_number);
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                        printf("\nHmmm... Can't Exceed 100 !!\nTry Again\n", cur_pos4);
                        getch();
                        system("cls");
                        gameBoard(cur_pos4, p4);
                    }

                    else if (cur_pos4 == 100)
                    {

                        printf("\n>> Player 4 won!\n\nPress Any Key to go back to Menu.\n\n");
                        printf("\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
                    }
                    printf("\nPlayer 1 position is %d\n\n", cur_pos1);
                    printf("Player 2 position is %d\n\n", cur_pos2);
                    printf("Player 3 position is %d\n\n", cur_pos3);
                    printf("Player 4 position is %d\n\n", cur_pos4);
                    
                    break;

                default:
                    printf("Incorrect choice.Try Again\n");
                }
            }
        getch();
        system("cls");
        }
        else                        // Invalid Input                 
        {
            printf("\n\nInvaid Input !! Please Select from either 1 or 2 or 3\n\n");
            getch();
        }
    }
    return 0;
}

int winCondition_check()            // function to check wheather same elements are present in a row or column or in a diagonal
{
    if (square[0] == square[1] && square[1] == square[2])
        return 1;

    else if (square[3] == square[4] && square[4] == square[5])
        return 1;

    else if (square[6] == square[7] && square[7] == square[8])
        return 1;

    else if (square[0] == square[3] && square[3] == square[6])
        return 1;

    else if (square[1] == square[4] && square[4] == square[7])
        return 1;

    else if (square[2] == square[5] && square[5] == square[8])
        return 1;

    else if (square[0] == square[4] && square[4] == square[8])
        return 1;

    else if (square[2] == square[4] && square[4] == square[6])
        return 1;

    else if (square[0] != '1' && square[1] != '2' && square[2] != '3' &&
             square[3] != '4' && square[4] != '5' && square[5] != '6' && square[6] != '7' && square[7] != '8' && square[8] != '9')

        return -1;
    else
        return 0;
}

void tic_tac_toe()                  // function to create the tic-tac-toe board
{

    printf("\nPlay Tic-Tac-Toe, conquer any column, diagonal or row !\n\n");
    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[0], square[1], square[2]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[3], square[4], square[5]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[6], square[7], square[8]);

    printf("     |     |     \n\n");
}
