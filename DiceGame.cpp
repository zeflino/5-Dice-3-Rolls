//Zeferino Lino
//This is my own work

#include <iostream>
#include "Die.h" //other files
#include <iomanip> //setw 

using namespace std;

//function headers
void showDice(Die[]);
int getTotalScore(Die[]);

//main function
int main() {

    //loop in order to keep the program going
    bool keepPlaying = true;

    //char holding the user input
    char userInput;

    while (keepPlaying == true) {
        //creaing the array
        Die myDice[5];

        //rolling the die calling our .roll() function from Die.h
        for (int rollNum = 0; rollNum < 5; rollNum++) {
            myDice[rollNum].roll();
        }

        //printing the score
        showDice(myDice);
        int score = getTotalScore(myDice);

        cout << "\n\nWould you like to keep playing? y/n \n-> ";
        cin >> userInput;

        if (userInput == 'y') {
            keepPlaying = true;
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

int getTotalScore(Die total[]) {
    int totalScore = 0;
    for (int index = 0; index < 5; index++) {
        totalScore += total[index].getValue();
    }
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