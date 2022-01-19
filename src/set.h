/**
 * 
 * Author: Robert Krency
 * Author: Austin Pringle
 * Author: Anthony Stepich
 * 
 * Assignment 3 for CSC 265.
 * 
 */

/**
 *  Class List
 *      Defines a list with appropriate functions for removing and inserting elements, and printing the list
 *  
 *  void insert(const int data)
 *      description: Inserts a value at the end of the list
 *      precondition: none
 *      postcondition: The data input is added to the end of the list
 * 
 *  void remove(const int data)
 *      description: Removes the first occurrence of the input data, if it exists, and shifts all data in the list to the left
 *      precondition: none
 *      postcondition: Data removed if exists
 * 
 *  void printList() const 
 *      description: Prints the list, with each element on a new line
 *      precondition: none
 *      postcondition: List printed to output
 * 
 */

#ifndef __LIST_H__
#define __LIST_H__

class List {

    public:
        List();
        ~List();
        virtual void insert(const int data);
        void remove(const int data);
        void printList() const;
        int getLength() const;

    private:
        int arrayLength;
        int arraySize;

    protected:
        int* array;

};

class Set : public List {

    public:
        Set();

        /**
         *  void insert(int data)
         *      description:
         *          inserts the input data into the list if an equivalent 
         *          piece of data does not already exist
         *  
         */
        virtual void insert(int data);

};

#endif