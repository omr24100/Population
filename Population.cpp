// Population.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
File name: Population
Programmer: Olivia Ruiz
Date: 4/3/25
Requirements: Program that predicts the size of organisms population. Program will ask 
for starting number of organisms thier average daily increase
and the num ber of days they will muliply. 
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int startingPopulation;
    double dailyIncrease;
    int days;

    
    do {
        cout << "Enter the starting number of organisms (must be at least 2): ";
        cin >> startingPopulation;
        if (startingPopulation < 2) {
            cout << "The starting population must be at least 2. Please try again." << endl;
        }
    } while (startingPopulation < 2);

    
    do {
        cout << "Enter the average daily population increase (as a percentage, e.g., 10 for 10%): ";
        cin >> dailyIncrease;
        if (dailyIncrease < 0) {
            cout << "The daily population increase cannot be negative. Please try again." << endl;
        }
    } while (dailyIncrease < 0);

   
    do {
        cout << "Enter the number of days they will multiply (must be at least 1): ";
        cin >> days;
        if (days < 1) {
            cout << "The number of days must be at least 1. Please try again." << endl;
        }
    } while (days < 1);

    
    double population = startingPopulation;
    cout << fixed << setprecision(2); 
    cout << "\nDay\tPopulation Size" << endl;
    cout << "----------------------------" << endl;

    for (int i = 1; i <= days; i++) {
        cout << i << "\t" << population << endl;
        population += population * (dailyIncrease / 100);  
    }

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
