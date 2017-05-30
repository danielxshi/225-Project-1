//
//  patient.cpp
//  a1
//
//  Created by psl_ on 2017-05-19.
//  Copyright © 2017 psl_. All rights reserved.
//

#include "Patient.h"
#include <cctype>
#include <iostream>


const string TBE = "To be entered";


// Default Constructor
// Description: Create a patient with a care card number of "0000000000".
// Postcondition: All data members set to "To be entered",
//                except the care card number which is set to "0000000000".
Patient::Patient()
{
    name = TBE;
    address = TBE;
    phone = TBE;
    email = TBE;
    careCard = "0000000000";
};

// Parameterized Constructor
// Description: Create a patient with the given care card number.
// Postcondition: If aCareCard does not have 10 digits, then care card is set to "0000000000".
//                All other data members set to "To be entered".
Patient::Patient(string aCareCard)
{
    name = TBE;
    address = TBE;
    phone = TBE;
    email = TBE;
    careCard = aCareCard;

};

// Getters and setters
// Description: Returns patient's name.
string Patient::getName() const
{
    return name;
};

// Description: Returns patient's address.
string Patient::getAddress() const
{
    return address;
};

// Description: Returns patient's phone number.
string Patient::getPhone() const
{
    return phone;
};

// Description: Returns patient's email.
string Patient::getEmail() const
{
    return email;
};

// Description: Returns patient's care card number.
string Patient::getCareCard() const
{
    return careCard;
};

// Description: Sets the patient's name.
void Patient::setName(const string aName)
{
    if (!aName.empty() && isalpha(aName[0])){
        name = aName;
    }else{
        std::cout << "Please enter a name using no digits. " << std::endl;
    }
};

// Description: Sets the patient's address.
void Patient::setAddress(const string anAddress)
{

    if (!anAddress.empty()){
        address = anAddress;
    }
};

// Description: Sets the patient's phone number.
void Patient::setPhone(const string aPhone)
{
    if (!aPhone.empty() && isdigit(aPhone[0])){
        phone = aPhone;
    } else{
        std::cout << "Please enter a phone number with only digits. " << std::endl;
    }
};

// Description: Sets the patient's email.
void Patient::setEmail(const string anEmail)
{
    if (!anEmail.empty()){
        email = anEmail;
    }
};

// Overloaded Operators
// Description: Comparison operator. Compares "this" Patient object with "rhs" Patient object.
//              Returns true if both Patient objects have the same care card number.
bool Patient::operator==(const Patient & rhs)
{
    if (careCard == rhs.careCard) {
        return true;
    } else
    return false;
};

// Description: Greater than operator. Compares "this" Patient object with "rhs" Patient object.
//              Returns true if the care card number of "this" Patient object is > the care card number of "rhs" Patient object.
bool Patient::operator>(const Patient & rhs)
{
    if (careCard > rhs.careCard) {
        return true;
    } else
        return false;
};

// Description: Prints the content of "this" patient.
void Patient::printPatient( )
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Address: " << address << std::endl;
    std::cout << "Phone: " << phone << std::endl;
    std::cout << "Email: " << email << std::endl;
    
};
