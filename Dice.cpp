//Zeferino Lino
//This is my own work

#include "Die.h"
#include <iostream>

Die::Die() {
    //random
    srand(time(NULL));

    sides = 6;
    value = 0;
}

//sides initialization
Die::Die(int sides) {
    sides = sides;
}

//rolling function
void Die::roll() {
    this->value = rand() % sides + 1;
}

//return the face up of the die
int Die::getValue() {
    return value;
}
