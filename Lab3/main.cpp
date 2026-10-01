//main.cpp 
#include <iostream> 
#include "RPG.h"
using namespace std; 

int main()
{
    RPG p1 = RPG("Wiz",0,0.2, 60, 1);
    RPG p2 = RPG(); 

    printf("%s Current Stats\n", p1.getName().c_str());
    printf("Hits taken: %i\t Luck: %f\t Exp:%f\t Level: %i\n", p1.getHitsTaken(), p1.getLuck(), p1.getEXP(), p1.getLevel());
    //Print the same for p2
    printf("%s Current Stats\n", p2.getName().c_str());
    printf("Hits taken: %i\t Luck: %f\t Exp: %f\t Level: %i\n", p2.getHitsTaken(), p2.getLuck(), p2.getEXP(), p2.getLevel());
    //CALL setHitsTaken(new_hit) on either p1 and p2 
    p2.setHitsTaken(5);
       
    //print out the hits_taken
     cout<<"\np2 hits taken "<<p2.getHitsTaken()<<endl; 
   
    //CALL isAlive() on both p1 and p2 
     cout<<"0 is dead, 1 is alive\n"; 
   

    return 0; 
}