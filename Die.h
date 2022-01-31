#ifndef DIE_H
#define DIE_H

class Die {
private: 
    //# of sides on the die
    int sides;
    //face-value of the die
    //1 <= value < sides
    int value;
public: 
    //initialize sides to 6
    //initialize value to 0
    Die();
    //initialize the sides with the parameter
    //initialize the value to 0
    Die(int);
    //roll the die
    void roll();
    //return the face-value of the die
    int getValue();
};

#endif