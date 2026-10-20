//RPG.H
#ifndef RPG_H
#define RPG_H
#include <string>
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
        bool isAlive() const; 
        void setHitsTaken(int new_hits);
        
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

/*******************Extended Function**************************/
/** 
 * @brief updates name
 *
 * @param name
 * 
 */
void RPG::setName(string name){
    
}

/** 
* @brief increase RPG's experience by 50
*        After updating, if RPG's experience is >= 100.0, increase
*        RPG's level by 1, reset their experience to 0, and increase
*       their luck by 0.1 
*/
void RPG::updateEXPlevel(){

}