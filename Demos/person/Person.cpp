//Person.cpp 
#include "Person.h"

Person::Person(){
    name=""; 
    age=-1; 
    occupation="";
    livesInIE=false;
}

Person::Person(string name, int age, string occupation, bool IE){
    this->name=name; 
    this->age=age;
    this->occupation=occupation;
    livesInIE=IE;
    //private var = argument 
}
//updates name to new_name 
void Person::updateName(string new_name){
    name = new_name; 
}

void Person::updateAge(int new_age){
    age = new_age; 
}
void Person::updateOccupation(string new_occupation){
    occupation = new_occupation;
}

void Person::moveLocation(){
    livesInIE = ~livesInIE; 
}

string Person::getName() const{
    return name; 
}

int Person:: getAge() const{
    return age; 
}

string Person::getOccupation() const{
    return occupation;
}

bool Person::getLivesinIE() const{
    return livesInIE; 
}

/**
 * @brief  return true if our person is older than "a"
 * 
 * @param a 
 * @return true 
 * @return false 
 */


 bool Person::isOlderThan(Person a) const{
    if (age> a.getAge()){
        return true;
    }else{
        return false;
    }
    //return age >a.getage(): 
 }