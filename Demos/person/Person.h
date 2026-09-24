
#ifndef PERSON_H 
#define PERSON_H; 
#include <string>
using namespace std; 


class Person{ 
    public:


    //constant 
    void updateName{string new_name}; 
    void updateName{string new_name}; 


    string getName() const; 
    int getAge() const; 
    string getOccupation() const; 
    bool getLivesinIE() const; 
    bool isOlderThan(Person a) const; 

    private:
        string name; 
        int age; 
        string occupation;
        boollivesInIE;
}
#endif;