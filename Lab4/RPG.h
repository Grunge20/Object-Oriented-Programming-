//RPG.H
#ifndef RPG_H
#define RPG_H
#include <string>
#include <random> 
using namespace std; 
const int INVETORY_SIZE = 10; 
const float HIT_FACTOR = 0.05; 
const int MAX_HITS_TAKEN = 3; 

class RPG{
    public: 
        //constructors 
        RPG();
        RPG(string name, int hits_taken, float luck, float exp, int level);
    
        //mutators 
        //A little embarassing but I completely forgot to update my RPG.h with the new mutators...
        //That's why my Game.cpp has been showing errors
        //There's also more reasons but that helped clear like 3 errors
        bool isAlive() const; 
        void setHitsTaken(int new_hits);
        void setName(string name);
        void updateExpLevel();
        void attack(RPG*opponent);
        void printStats(); 
        ~RPG(); 
       
        
        //accessors 
         string getName() const;
         int getHitsTaken() const; 
         float getLuck() const; 
         float getEXP() const; 
         int getLevel() const;

         //I COMPLETE THE REST





    private: 
        string name; 
        int hits_taken; 
        float luck; 
        float exp;
        int level;
        //complete the rest

};
#endif
