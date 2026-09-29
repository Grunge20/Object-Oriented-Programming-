
#ifndef PERSON_H; 
#define PERSON_H; 
#include <string>
using namespace std; 


class Person{ 
    public:
        //constructor+destructors
        Person(); 
        Person(string name, int age, string occupation, bool livesinIE);
        //~person(); 

        //mutator functions 
        void updateName(string new_name); 
        void updateAge(int new_age); 
        void updateOccupation(string new_occupation); 
        void updateLivesinIE(bool new_livesinIE);
        void moveLocation(); 

        //accessor functions 
        string getName() const; 
        int getAge() const; 
        string getOccupation() const; 
        bool getLivesinIE() const; 
        bool isOlderThan(Person a) const; 



    private:
        string name; 
        int age; 
        string occupation;
        bool livesInIE;
}
#endif