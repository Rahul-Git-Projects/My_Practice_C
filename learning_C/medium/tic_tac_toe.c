/*Making a tic tac toe game using c*/
#include <stdio.h>
#include <stdbool.h>

char board[3][3];

void reset_board()
{
    char v = '1';
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++, v++)
            board[i][j] = v;
}

void board_generator()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c\t", board[i][j]);
            if (j == 2)
                printf("\n");
        }
    }
}

int board_fill()
{
    int count = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            switch (board[i][j])
            {
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                count++;
                break;
            }
    return count;
}

void player1()
{
    char user_input;
    printf("Player 1: X: \n");
    scanf(" %c", &user_input);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (user_input == board[i][j])
            {
                board[i][j] = 'X';
                goto placed1;
            }
        }
    }
placed1:;
}

void player2()
{
    char user_input;
    printf("\nPlayer 2: O: \n");
    scanf(" %c", &user_input);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (user_input == board[i][j])
            {
                board[i][j] = 'O';
                goto placed2;
            }
        }
    }
placed2:;
}

int game_progression()
{
    reset_board(); // <-- ensures a fresh board every time you run the game
    bool game_active = true;

    while (game_active)
    {
        player1();
        board_generator();

        for (int i = 0; i < 3; i++)
        {
            if (board[i][0] == 'X' && board[i][1] == 'X' && board[i][2] == 'X')
            {
                printf("Player 1 won the game congrats!");
                game_active = false;
                goto after_player2;
            }
        }

        if (board_fill() == 0)
        {
            game_active = false;
            break;
        }

        player2();
        board_generator();

        for (int i = 0; i < 3; i++)
        {
            if (board[i][0] == 'O' && board[i][1] == 'O' && board[i][2] == 'O')
            {
                printf("Player 2 won the game congrats!");
                game_active = false;
                goto after_player2;
            }
        }

        if (board_fill() == 0)
        {
            game_active = false;
            break;
        }

    after_player2:;
    }

    return 0;
}

int main()
{
    game_progression();
    return 0;
}
