//
//  List.cpp
//  a1
//
//  Created by psl_ on 2017-05-22.
//  Copyright © 2017 psl_. All rights reserved.
//

#include <stdio.h>
#include "List.h"

// Default constructor
List::List()
{
    
};

// Description: Returns the total element count currently stored in List.
int  List::getElementCount() const
{
    return elementCount;
};

// Description: Insert an element.
// Precondition: newElement must not already be in data collection.
// Postcondition: newElement inserted and elementCount has been incremented.
bool List::insert(const Patient& newElement)
{
    if (newElement) {
        <#statements#>
    }
};

// Description: Remove an element.
// Postcondition: toBeRemoved is removed and elementCount has been decremented.
bool List::remove( const Patient& toBeRemoved )
{
    
};

// Description: Remove all elements.
void List::removeAll()
{
    
};

// Description: Search for target element.
//              Returns a pointer to the element if found,
//              otherwise, returns NULL.
Patient* List::search(const Patient& target)
{
    
};

// Description: Prints all elements stored in List.
void List::printList( )
{
    
};
