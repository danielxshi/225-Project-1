//
//  List.cpp
//  a1
//
//  Created by psl_ on 2017-05-22.
//  Copyright © 2017 psl_. All rights reserved.
//

#include <iostream>
#include "List.h"

static const int MAX_ELEMENTS = 3; // Small capacity so can test when data collection becomes full
// As we are testing the code of our assignment, we can change the value given to this constant.
Patient elements[MAX_ELEMENTS];    // Data structure with capacity of MAX_ELEMENTS
int elementCount;                  // Current element count in element array
int capacity;

//isEmpty

isEmpty();

// Default constructor
List::List()
{
    elementCount = 0;
    capacity = 0;
};

// Description: Returns the total element count currently stored in List.
// pg 152 displayBag(bagPtr);
int List::getElementCount() const
{  
    return elementCount; 
};

// Alternative soln to getElementCount
// int List::getElementCount() const
// {  
//     std::cout << "The list contains " << elementCount->getElementCount()
//               << " items:" << std::endl;
//     std::vector<std::string> elementCount = elementCount->List.elementCount;
//     int elementCount = elements.size(); 
// };

// getLength() {
//     task: gets the number of entries in this list
//     input: none
//     output: the integer number of entries currently in the list
// }


//NOT DONE
// Description: Insert an element.
// Precondition: newElement must not already be in data collection.
// Postcondition: newElement inserted and elementCount has been incremented.
bool List::insert(const Patient& newElement)
{

    // Check if there is room in the list by comparing the amount of elements currently 
    // in store to the capacity of the list
    if (this -> elementCount >= this -> capacity) {
        std::cout << "There is no room to insert." << std::endl;
        return false;
    }
    
    // go through each element
    for (int x = 0; x <= this -> capacity; x++) {
        // check if newElement is already in collection
        if (newElement.getCareCard() == this -> elements[x].getCareCard()) {
            std::cout << " This patient already exists in the collection." << std::endl;
            return false;
        }
        
        // if newElement carecard is smaller than current in array, insert into database
        if (newElement.getCareCard() < this -> elements[x].getCareCard()) {
            // compare newEntry with elements from the list
            // newEntry is larger than the element then keep moving down the list
            // if it isn't then place the element down 
            // newlyShiftedEntries = this.elements[x + 1];

            elements[elementCount] = newElement;
            elementCount++;

        for (int i = 0; i < elementCount; ++i)
        {
            //if it is the last element then no shift
            if (newElement.getCardCard > elements[x].getCareCard) {
                elements[x] = newElement; 
            }
            else {
                for (int i = elementCount; i >= elements[x]; i--)
                {
                    elements[x + 1] = newElement;
                }
            }
            elementCount++;
        }
        return true;
};


//NOT DONE
// Description: Remove an element.
// Postcondition: toBeRemoved is removed and elementCount has been decremented.
bool List::remove(const Patient& toBeRemoved) {
    for(int i = 0; i < elementCount; ++i){
        if(elements[i] == toBeRemoved){ //If target element exists in the list
            
            for(int j = i; j < elementCount; ++j){ 
                elements[j] = elements[j + 1];
            }

            elementCount--;
            return true;
        }
    }

    //If the element was not contained in target list:
    return false;
}

// Description: Remove all elements.
void List::removeAll()
{
    elementCount = 0;
};

// Description: Search for target element.
//              Returns a pointer to the element if found,
//              otherwise, returns NULL.
Patient* List::search(const Patient& target)
{
    for (int x = 0; x < this -> capacity; x++) {
        // if this carecard is the current element, return pointer to element
        if (target.getCareCard() == this -> elements[x].getCareCard()) {
            return &this -> elements[x];
        }
    }
    return NULL;
};

// Description: Prints all elements stored in List.
void List::printList( )
{
    for (int x = 0; x < this -> capacity; x++){
        this -> elements[x].printPatient();
    }
};