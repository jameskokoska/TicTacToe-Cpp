
#include <iostream>
#include "tictactoe.h"
#include "gameState.h"
using namespace std;

// Return the clicked row (0..boardSize-1)
int gameState::get_clickedRow(){
    return clickedRow;
}

// Return the clicked column (0..boardSize-1)
int gameState::get_clickedColumn(){
    return clickedColumn;
}

// Set the clicked row to value (0..boardSize-1)
// An invalid value is ignored and no action is taken
void gameState::set_clickedRow(int value){
    clickedRow = value;
    return;
}
 // Set the clicked column (0..boardSize-1)
// An invalid value is ignored and no action is taken
void gameState::set_clickedColumn(int value){
    clickedColumn = value;
    return;
}

// Get the moveValid value
bool gameState::get_moveValid(){
    return moveValid;
}
 // Set the moveValid variable to value
void gameState::set_moveValid(bool value){
    moveValid = value;
    return;
}
 // Get the gameOver value
bool gameState::get_gameOver(){
    //If the winCode has been set, the game is over
    if(winCode != 0){
        return true;
    }
    //Check if there are still playable spots
    for(int row = 0; row < boardSize; row++){
        for(int col = 0; col < boardSize; col++){
            if(gameBoard[row][col]==0){
                return false;
            }
        }
    }
    return true;
}
 // Set the gameOver variable to value
void gameState::set_gameOver(bool value){
    gameOver = value;
    return;
}
 // Get the winCode
int gameState::get_winCode(){
    //An array defining all the possible winning positions, in winCode order
    int winningConditions[8][3][2] = {
        {{0,0},{0,1},{0,2}},
        {{1,0},{1,1},{1,2}},
        {{2,0},{2,1},{2,2}},
        {{0,0},{1,0},{2,0}},
        {{0,1},{1,1},{2,1}},
        {{0,2},{1,2},{2,2}},
        {{0,0},{1,1},{2,2}},
        {{0,2},{1,1},{2,0}},
    };
    int totalInLineX = 0;
    int totalInLineO = 0;
    //Loop through the 3D list to determine if someone wins and winCode code
    for(int winCodeValue = 0; winCodeValue < 8; winCodeValue++){
        totalInLineX = 0;
        totalInLineO = 0;
        for(int row = 0; row < 3; row++){
            //Check if X or O has an occupied space, add it, find if equal to 
            //three in a row
            if(gameBoard[winningConditions[winCodeValue][row][0]][winningConditions[winCodeValue][row][1]]==1){
                totalInLineX++;
            } else if(gameBoard[winningConditions[winCodeValue][row][0]][winningConditions[winCodeValue][row][1]]==-1){
                totalInLineO++;
            }
            //Check if O or X has three in a row, return respective winCode
            if(totalInLineO==3 || totalInLineX==3){
                gameOver = true;
                winCode = winCodeValue;
                return winCodeValue+1;
            } 
        }
    }
    //Default case, example if board is full and tie, then nobody has won the game
    return 0;
}

// Set the winCode to value
// An invalid value is ignored and no action is taken
void gameState::set_winCode(int value){
    winCode = value;
    return;
}

// Get the value of turn
bool gameState::get_turn(){
    //Switch the current turn to the opposite
    if(turn == true){
        turn = false;
        return false;
    } else {
        turn = true;
        return true;
    }
}
// Set the value of turn
void gameState::set_turn(bool value){
    turn = value;
    return;
}

// Get the game board value at the board location at row and col
int gameState::get_gameBoard(int row, int col){
    return gameBoard[row][col];
}
// Set the game board value at the board location at row and col to value
// This method checks that row, col and value are valid and if not it
// performs no action
void gameState::set_gameBoard(int row, int col, int value){
    gameBoard[row][col] = value;
}
