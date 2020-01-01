//
//  tictacto.h
//  TicTacTo
//
//  Created by Tarek Abdelrahman on 2019-06-06.
//  Copyright © 2019 Tarek Abdelrahman. All rights reserved.
//
//  ECE244 Student: Do NOT modify this file

#ifndef tictacto_h
#define tictacto_h

// Some basic definitions for the game
#define X     1
#define O    -1
#define Empty 0

#define boardSize 3

// Forward declaration of the class gameState.h
class gameState;

// The prototype of the playMove function
void playMove(gameState&);

#endif /* tictacto_h */
