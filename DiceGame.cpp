//Zeferino Lino
//This is my own work

#include <iostream>
#include "Die.h" //other files
#include <iomanip> //setw 
#include "Dice.cpp" //including the other file containing the contents

using namespace std;

//function headers
void showDice(Die[]);

//main function
int main() {

    //loop in order to keep the program going
    bool keepPlaying = true;

    //char holding the user input
    char userInput;

    //total rolls
    int totalRolls = 1;

    while (keepPlaying == true) {
        //creaing the array of 5 indexes
        Die myDice[5];

        //rolling the die calling our .roll() function from Die.h
        for (int rollNum = 0; rollNum < 5; rollNum++) {
            myDice[rollNum].roll();
        }

        //printing the results to the user
        showDice(myDice);

        cout << "\nThis was roll " << totalRolls << "/3. You have " << (3 - totalRolls) << " left!" << endl;

        if (totalRolls == 3) {
            keepPlaying = false;
            break;
        }

        cout << "\nWould you like to keep playing? y/n \n-> ";
        cin >> userInput;

        //asking user if they want to play again
        if (userInput == 'y') {
            keepPlaying = true;
            totalRolls++;
        }

        else if (userInput == 'n') {
            keepPlaying = false;
            cout << "Okay, have a great day!!" << endl;
        }

        else {
            cout << "Sorry, " << userInput << " is not a valid input. Please try again later!" <<endl;
            keepPlaying = false;
        }
    }

    return 0;
}

int getTotalScore(Die myDice[]) {
    
    int totalScore = 0;

    

    return totalScore;
}

void showDice(Die myDice[]) {
    //loops in order to print out the final result
    cout << "\nDie: " << setw(4);
    for (int index = 1; index < 6; index++) {
        cout<< index << " ";
    }
    cout << endl;
    cout << "Result: ";
    for (int index = 0; index < 5; index++) {
        cout << myDice[index].getValue() << " ";
    }
}