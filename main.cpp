//main.cpp
#include "Person.h"
#include <iostream> 
using namespace std; 



int main()
{

    Person bob = Person ("Bob", 100, "retired", true);
    printf("Name : %s Age: %i Occupation: %s Lives in IE: %i", bob.getName(), bob.getAge(), bob.getOccupation(), bob.getLivesinIE()));
    return 0;
}