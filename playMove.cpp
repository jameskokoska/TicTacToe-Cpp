//
//  playMove.cpp
//  TicTacTo
//
//  Updated by Tarek Abdelrahman on 2019-06-07.
//  Created by Tarek Abdelrahman on 2018-05-15.
//  Copyright © 2018-2019 Tarek Abdelrahman. All rights reserved.
//
#include <iostream>
#include "tictactoe.h"
#include "gameState.h"
using namespace std;

void playMove(gameState& game_state) {
    int clickRow = 0;
    int clickCol = 0;
    clickRow = game_state.get_clickedRow();
    clickCol = game_state.get_clickedColumn();
    int turnLetter = 0;
    //Reverse the starting player below, because the X player always starts,
    //but the turn switches when the program starts which changes the 
    //first starting turn
    if(game_state.get_turn()==false){
        turnLetter = 1;
    } else {
        turnLetter =-1;
    }
    
    //If the player clicks an empty space, it is a valid move, play a letter
    //Pass into game board
    if(game_state.get_gameBoard(clickRow,clickCol)==0){
        game_state.set_gameBoard(clickRow,clickCol,turnLetter);
    }
    
    //Check for the game over conditions, the winCode also checks if the game
    //is over when someone wins
    game_state.get_winCode();
    if(game_state.get_gameOver()==true){
        game_state.get_winCode();
    }

    
    return;
}

