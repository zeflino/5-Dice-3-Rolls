#include "Die.h"
#include <iostream>

Die::Die() {
    //random seed
    srand(time(NULL));

    //initializing variables
    sides = 6;
    value = 0;
}

//initalize the sides
Die::Die(int sides) {
    sides = sides;
}

//roll
void Die::roll() {
    this->value = rand() % sides + 1;
}

//return the face-value of the die
int Die::getValue() {
    return value;
}