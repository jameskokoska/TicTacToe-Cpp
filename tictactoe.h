
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
