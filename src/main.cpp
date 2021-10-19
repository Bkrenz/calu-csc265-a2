/**
 * 
 * Author: Robert Krency
 * Author: Austin Pringle
 * Author: Anthony Stepich
 * 
 * Assignment 2 for CSC 265.
 * 
 */

#include <iostream>
#include "set.h"

using namespace std;

int getInputValue();

int main(){

    // Init
    bool continueMenu = true;
    int menuInput = 0;
    int input = 0;
    bool useSet = false;

    // Display the Menu
    cout << endl << "Would you like to use a List or Set?" << endl;
    cout << "1. List" << endl;
    cout << "2. Set" << endl;

    // Get the Input
    cout << "Please make a selection from the menu: ";
    while(!(cin >> menuInput) || cin.peek() != '\n' && menuInput > 0 && menuInput < 3)
    {
        cout << "Please make a selection from the menu: ";
        cin.clear();
        cin.ignore(30000, '\n');            
    }

    // Init the list
    List *numList = (menuInput == 1) ? new List() : new Set();

    // While the system should continue running
    while(continueMenu)
    {
        // Display the Menu
        cout << endl << endl << "Menu:" << endl;
        cout << "1. Insert a Value" << endl;
        cout << "2. Remove a Value" << endl;
        cout << "3. Print the List" << endl;
        cout << "4. Quit" << endl;

        // Get the Input
        cout << "\nPlease make a selection from the menu: ";
        while(!(cin >> menuInput) || cin.peek() != '\n' && menuInput > 0 && menuInput < 5)
        {
            cout << "Please make a selection from the menu: ";
            cin.clear();
            cin.ignore(30000, '\n');
        }

        // Process Input
        switch(menuInput) 
        {
            case 1: // Insert a Value
                input = getInputValue();
                cout << endl << "Inserting value " << input << " into the list..." << endl;
                numList->insert(input);
                break;

            case 2: // Remove a Value
                input = getInputValue();
                cout << endl << "Removing value " << input << " from the list..." << endl;
                numList->remove(input);
                break;

            case 3: // Print the List
                cout << endl << "Printing the list..." << endl;
                numList->printList();
                break;

            case 4: // Quit
                continueMenu = false;
                break;

            default: // Error in input
                cout << "Error; try again." << endl;
        }
    }

    // Quit the program
    cout << endl <<"Thank you, come again!" << endl;
    return 0;
}

/**
 *  getInputValue() 
 *      Description: Gets an input integer from the user
 *      Precondition: none
 *      Returns: an integer
 */
int getInputValue(){
    int value = 0;

    cout << "Please input an integer: ";
    while(!(cin >> value) || cin.peek() != '\n')
    {
        cout << "Please input an integer: ";
        cin.clear();
        cin.ignore(30000, '\n');            
    }

    return value;
}