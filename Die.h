//# of sides on the die
int sides; 

//face-value of the die
//1 <= value < sides
int value;

/*initialize the sides with the parameter 
initialize the value to 0*/
Die(int);

/*initialize sides to 6
initialize value to 0*/
Die();

//roll the die and update value
void roll();

//return the face-value of the die
int getValue();
