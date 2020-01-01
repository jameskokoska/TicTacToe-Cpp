
#ifndef gameState_h
#define gameState_h

#include "tictactoe.h"

class gameState {
private:
    int clickedRow;     // Game board row coordinate where mouse is clicked
    int clickedColumn;  // Game board column coordinate where mouse is clicked
    bool moveValid;     // Is the mouse click at the above coordinates a valid move?
    bool gameOver;      // Is the game over as a result of the mouse click
    int winCode;        // If the game is over, this is the win code
    bool turn;          // Whose turn is it
    int gameBoard[boardSize][boardSize]; // The game board
    
public:
    // Return the clicked row (0..boardSize-1)
    int get_clickedRow();     

    // Return the clicked column (0..boardSize-1)
    int get_clickedColumn();  
    
    // Set the clicked row to value (0..boardSize-1)
    // An invalid value is ignored and no action is taken
    void set_clickedRow(int value);     

    // Set the clicked column (0..boardSize-1)
    // An invalid value is ignored and no action is taken
    void set_clickedColumn(int value);  
    
    // Get the moveValid value
    bool get_moveValid();

    // Set the moveValid variable to value
    void set_moveValid(bool value);

    // Get the gameOver value
    bool get_gameOver();

    // Set the gameOver variable to value
    void set_gameOver(bool value);

    // Get the winCode
    int get_winCode();
    
    // Set the winCode to value
    // An invalid value is ignored and no action is takem
    void set_winCode(int value);
    
    // Get the value of turn
    bool get_turn();

    // Set the value of turn
    void set_turn(bool value);
    
    // Get the game board value at the board location at row and col
    int get_gameBoard(int row, int col); 

    // Set the game board value at the board location at row and col to value
    // This method checks that row, col and value are valid and if not it
    // performs no action
    void set_gameBoard(int row, int col, int value);
};

#endif /* gameState_h */
