//Game.h
#ifndef GAME_H
#define GAME_H
#include <string> 
#include "RPG.h"
#include <set>
using namespace std; 

class Game{
    public:
        //constructors
        Game();
        ~Game(); 
        void generatePlayers(int n); 
        int selectPlayer(); 
        void endRound();
        void battleRound(); 
        void gameLoop(); 
        void printFinalResults(); 
    
    private: 
        vector<RPG*> players; 
        set<int> live_players; 

};
#endif