/**
 * 
 * Author: Robert Krency
 * Author: Austin Pringle
 * Author: Anthony Stepich
 * 
 * Assignment 3 for CSC 265.
 * 
 */

#include "set.h"
#include <iostream>


List::List() {
    arrayLength = 0;
    arraySize = 2;
    array = new int[arraySize];
}


List::~List(){
    delete [] array;
}


void List::insert(int data){

    // Check if the array is full and needs to be expanded
    if ( this->arrayLength == this->arraySize )
    {
        // Incraese the size by 2
        this->arraySize += 2;

        // Create a new array and copy values
        int* newArray = new int[this->arraySize];
        for (int i = 0; i < this->arrayLength; i++)
            newArray[i] = this->array[i];

        // Delete the old array
        delete [] this->array;

        // Set to new array
        this->array = newArray;
    }

    // Add the data to the List
    this->array[ this->arrayLength ] = data;
    this->arrayLength++;

}


void List::remove(int data){

    int i=0;
    
    // While the current index does not equal the input data and we have elements left in the list
    for ( i; this->array[i] != data && i < arrayLength; i++);

    // Check if we reached the end of the list
    if ( i >= arrayLength )
        return;

    // The element at index equals the data
    arrayLength--;
    while(i < arrayLength)
    {
        this->array[i] = this->array[i+1];
        i++;
    }

}


int List::getLength() const {return this->arrayLength;}


void List::printList() const{

    // If the list is empty, print that.
    if (this->arrayLength == 0)
        std::cout << "Empty List" << std::endl;

    // Print each element on its own line
    for (int i = 0; i < this->arrayLength; i++)
        std::cout << this->array[i] << std::endl;

}

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