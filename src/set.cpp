/**
 * 
 * Author: Robert Krency
 * Author: Austin Pringle
 * Author: Anthony Stepich
 * 
 * Assignment 2 for CSC 265.
 * 
 */

#include "set.h"

Set::Set(){
    
}

void Set::insert(int data) {

    // Check if the data exists in the array
    for (int i = 0; i < List::getLength(); i++)
        if (this->array[i] == data)
            return;

    // Insert it
    List::insert(data);

}