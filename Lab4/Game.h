//Game.h
#ifndef GAME_H
#define GAME_H
#include <string> 
#include<vector>
#include <set>
#include "RPG.h"

using namespace std; 

class Game{
    public:
        //constructors
        Game();
        ~Game(); 
        void generatePlayers(int n); 
        int selectPlayer(); 
        void endRound(RPG *winner, RPG *loser, int loserindex);
        void battleRound(); 
        void gameLoop(); 
        void printFinalResults(); 
    
    private: 
        vector<RPG*> players; 
        set<int> live_players; 

};
#endif