#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// 宣告各種狀態
enum GameStatus{CONTINUE, GAME_WON, GAME_LOSE}; //1
enum RoundStatus{DRAW, WON, LOSE}; //2
enum Shape{ROCK, PAPER, SCISSORS}; //3

//prototype
enum Shape computerPlayRandomShape(void); // 引用3, 取得COM玩家的出拳狀態
enum RoundStatus getRoundStastus(enum Shape, enum Shape); // 引用2
enum Shape converIntToShape(int);
char* getStringFromShape(enum Shape);

int main(void){
    srand(time(NULL));
    enum GameStatus gameStatus = CONTINUE; // Case CONTINUE, GAME_WON, GAME_LOSE
    int bestOfN = 3;
    int winThreshold = (bestOfN/2)+1;

    int playerWinCount = 0;
    int computerWinCount = 0;
    int roundNum = 0;
    
    while(CONTINUE == gameStatus)
    {
        printf("==============Round %d==============\n", roundNum++);
        printf("Enter 0(Rock), 1(Paper), 2(Scissors)");

        int playerShapeInt = -1;
        scanf("%d", &playerShapeInt);

        enum Shape playerShape = converIntToShape(playerShapeInt);// 取得玩家出拳
        enum Shape computerShape = computerPlayRandomShape();// 取得電腦出拳
        enum RoundStatus roundStatus = getRoundStastus(playerShape, computerShape); // 取得本局狀態

        switch(roundStatus)
        {
            case DRAW:
                printf("Draw!\n");
                break;
            case WON:
                printf("Player WON!\n");
                if(++playerWinCount == winThreshold){gameStatus = GAME_WON;}
                break;
            case LOSE:
                printf("Player LOSE!\n");
                if(++computerWinCount == winThreshold){gameStatus = GAME_LOSE;}
                break;
        }
    }
        switch(gameStatus)
        {
            case GAME_WON:
                printf(" **Best of %d game is WON by player!**\n", bestOfN);
                break;
            case GAME_LOSE:
                printf(" **Best of %d game is WON by computer!**\n", bestOfN);
                break;
            case CONTINUE:
                default:
                printf("**Error! should not reach here**\n");
        }
}

enum Shape computerPlayRandomShape(void) {
    return (enum Shape)(rand() % 3);
}

enum RoundStatus getRoundStastus(enum Shape playerShape, enum Shape computerShape)
{
    if(playerShape == computerShape) return DRAW;
    else if((playerShape == ROCK && computerShape == SCISSORS) || 
            (playerShape == PAPER && computerShape == ROCK) ||
            (playerShape == SCISSORS && computerShape == PAPER)) return WON;
    else return LOSE;
}

enum Shape converIntToShape(int shapeValue){return (enum Shape)shapeValue;} // 轉換int到enum

char* getStringFromShape(enum Shape shape)
{
    switch(shape)
    {
        case ROCK: return "ROCK";
        case PAPER: return "PAPER";
        case SCISSORS: return "SCISSORS";
        // default: return "Unknown Shape";
    }
    return "";
}