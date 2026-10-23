//main.cpp 
#include <iostream>
#include "RPG.h"
#include "Game.h"

using namespace std; 

int main()
{
    // Create a Game Object
    Game my_game = Game(); 

    //Create num_players as an int and set it to 10
    int num_players = 10; 
    //Call generatePlayerss() with num_players as the parameter
    my_game.generatePlayers(num_players);
    //call gameLoop()
    my_game.gameLoop();
    //call printFinalResults()
    my_game.printFinalResults();
    return 0; 
}