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

    // Check if the data already exists
        // If it does not, call List::insert(data);
        // If it does exist, do nothing

    for (int i = 0; i < List::getLength(); i++)
        if (this->array[i] == data)
            return;

    List::insert(data);

}