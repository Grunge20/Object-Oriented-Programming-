//Person.cpp 
#include "Person.h"
Person::Person(){
    name=""; 
    age=-1; 
    occupation="";
    livesInIE=false;

}

Person::Person(string name, int age, string occupation, bool livesinIE){
    this->name=name; 
    this->age=age;
    this->occupation=occupation;
    livesInIE=IE; 
}
//updates name to new_name 
void person ::updatenName(string new_name){
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

//**
 * @brief 
 * 
 * @param a
 * @return true 
 * @return false 
 */

 bool Person::isOlderThan(Person a) const{
    
 }