#include <iostream> 
#include "Charmander.h" 
#include <stdio.h> 
/**
 * @brief  Construct a new Charmander :; Charmander Object
 * 
 */
Charmander::Charmander() : Pokemon() {
    type.push_back("Fire");
    skills.push_back("Growl");
    skills.push_back("Scratch");

    cout<<"Default Constructor (Charmander)\n";
}

/**
 * @brief Construct a new charmander :: Charmander Object
 * 
 * @param name 
 * @param hp 
 * @param att
 * @param def
 * @param t 
 */
Charmander::Charmander(string name, int hp, int att, int def, vector<string> s)
 Pokemon(name, hp, att, def, t){
    type = t; 
    skills = s; 
    cout <<"Overloaded Constructor (Charmander)\n"; 
 }

 /**
  * @brief says what a charmander says 
  * 
  */