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

/*******************Extended Function**************************/
/** 
 * @brief updates name
 *
 * @param name
 * 
 */
void setName(string name){
    this -> name = name; 
}


/** 
* @brief increase RPG's experience by 50
*        After updating, if RPG's experience is >= 100.0, increase
*        RPG's level by 1, reset their experience to 0, and increase
*       their luck by 0.1 
*/
void updateEXPLevel(){
    exp += 50; 
    if (exp>=100){
        level = level+1; 
        exp = 0; 
        luck += 0.1; 
    }
}

/**
 * @brief Hits or misses the opponent at random. Luck is a form of defense.
 *        The higher the opponent's luck, the more likely the attack will miss.
 *        If the attack is a hit, opponent's hits taken should increment by 1.
 *        Add last couple of lines to complete
 * 
 * @param opponent: RPG* 
 */
void attack(RPG*opponent){

    random_device rd; 
    mt19937 gen(rd()); //seed with random 
    uniform_real_distribution<double> dis(0.0,1.0);

    float rand_num = dis(gen); 

    //Create a bool called hit 
    // hit is true if random_num>HIT-FACTOR*opponent's luck 
    //if hit is true, call updateHitsTaken() to increase opponent's hits_taken
    bool hit = false; 
    if (rand_num > HIT_FACTOR * (*opponent).getLuck()){
        hit = true; 
    }
    if(hit){ //(hit==true)
        (*opponent).setHitsTaken((*opponent).getHitsTaken()+1); 
    }
}

/** 
 * @brief Prints in the format: 
 * "Name: NPC_X Hits Taken: X Luck: 0.X00000 EXP: X0.0000 Level: X Status: Alive or Dead"
 */
void printStats(){
    printf("Name: %s Hits Taken: %i Luck: %f EXP: %f Level: %i Status: ", name.c_str(), hits_taken, luck, exp, level);
}

/**
 * @brief Destroy the RPG::RPG object
 * Already completed
 */
~RPG()
{
}

};
#endif
