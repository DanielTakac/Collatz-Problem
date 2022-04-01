#include <iostream>
#include <windows.h>
using namespace std;

int currentNumber;
int chosenNumber;
int delay;

bool mainLoop = true;

int main(){

    cout << "Choose a number: ";
    cin >> chosenNumber;

    cout << "\nChoose the delay between calculations (in ms): ";
    cin >> delay;

    currentNumber = chosenNumber;

    system("CLS");

    while (mainLoop) {

        system("CLS");

        cout << "Chosen Number: " << chosenNumber << endl;
        cout << "Current Number: " << currentNumber << endl;

        if (currentNumber % 2 == 0) {

            cout << "\nNumber is even";
            cout << "\nDividing by 2";

            currentNumber /= 2;

        } else {

            cout << "\nNumber is odd";
            cout << "\nMultiplying by 3 and adding 1";

            currentNumber *= 3;
            currentNumber++;

        }

        Sleep(delay);

    }

}
