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
        bool ableToInsert = (newElement >= 1) && (newElement <= itemCount + 1) {
            if (ableToInsert) {
                for (int pos = elementCount; pos >= newElement; pos--)
                    items[pos + 1] = items[pos];

                //insert new entry
                elements[newElement] = newEntry;
                elementCount++;
            }
            return ableToInsert;
        }
    }
    return true;
};


//NOT DONE
// Description: Remove an element.
// Postcondition: toBeRemoved is removed and elementCount has been decremented.
bool List::remove( const Patient& toBeRemoved )
{
    bool ableToRemove = (position >= 1) && (position <=elementCount);
    if (ableToRemove)
    {
        // Remove entry by shifting all entries after the one at 
        // position toward the beginning fo the array
        // (no shift if position == elementCount)
        for (int x = position; x < elementCount; x++)
            elements[x] = elements[x + 1];
            delete elements[x];
            elements[x] = nullptr;
            elementCount--; // Decrease count of entries
    } // end if
    return ableToRemove;
};

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
void List::printList()
{
    for (int x = 0; x < this -> capacity; x++){
        this -> elements[x].printPatient();

    }
<<<<<<< HEAD
};
=======
    
};
>>>>>>> origin/master
