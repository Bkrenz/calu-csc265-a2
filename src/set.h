/**
 * 
 * Author: Robert Krency
 * Author: Austin Pringle
 * Author: Anthony Stepich
 * 
 * Assignment 2 for CSC 265.
 * 
 */

#ifndef __SET_H__
#define __SET_H__

#include "list.h"

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
        void insert(int data);

};

#endif