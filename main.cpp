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

    while(mainLoop == true){

    system("CLS");

    cout << "Chosen Number: " << chosenNumber << endl;
    cout << "Current Number: " << currentNumber << endl;

    if(currentNumber % 2 == 0){

    cout << "\nNumber is even";
    cout << "\nDividing by 2";

    currentNumber = currentNumber / 2;

    }else{

    cout << "\nNumber is odd";
    cout << "\nMultiplying by 3 and adding 1";

    currentNumber = currentNumber * 3;
    currentNumber = currentNumber + 1;

    }

    Sleep(delay);



    }

}
