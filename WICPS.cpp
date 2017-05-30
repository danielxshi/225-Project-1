//
//  WICPS.cpp
//  a1
//
//  Created by psl_ on 2017-05-19.
//  Copyright © 2017 psl_. All rights reserved.
//

//1 enter a new patient into the system
//2 remove a patient from the system
//3 search for a patient
//4 modify a patient's record (for example, adding the patient's information or making a change of address, etc...).
//5 print all its patients by ascending order of care card numbers.

#include <iostream>
#include <locale>
#include "List.cpp"
#include "List.h"
#include "Patient.cpp"
#include "Patient.h"

void menu();
string getCardNum();


// States all menu options
void menu (){
    std::cout << "1. Enter new patient into the system." << std::endl;
    std::cout << "2. Remove a patient from the system." << std::endl;
    std::cout << "3. Search for a patient." << std::endl;
    std::cout << "4. Modify a patient's record." << std::endl;
    std::cout << "5. Print all its patients by ascending order of care card numbers." << std::endl;
    std::cout << "6. Quit program." << std::endl;
    
}

string getCardNum(){
    const string ERROR = "CareCard number must be at least 10 numbers.";
    string ccNum = "0000000000";
    
    std::cout << "CareCard number of patient to add: ";
    cin >> ccNum;
    
    // verify size, if ccNum is empty, and if it is a digit
    locale loc;
    if (ccNum.size() != 10 || ccNum.empty() || isdigit(ccNum[0], loc)) {
        return ERROR;
    }
    
    return ccNum;
}

// enter in patient information
void getPatientInfo(List& registry) {
    string name = "";
    string address = "";
    string phone = "";
    string email = "";
    
    Patient newPatient(getCardNum());
    cout << "Enter patient name: ";
    cin >> name;
    cout << "Enter patient address: ";
    cin >> address;
    cout << "Enter patient phone number: ";
    cin >> phone;
    cout << "Enter patient email: ";
    cin >> email;
    
    newPatient.setName(name);
    newPatient.setAddress(address);
    newPatient.setPhone(phone);
    newPatient.setEmail(email);
}

//remove patient
void removePatient(List& registry) {
    getCardNum();
    
}

// 1, 2, 3, 4, 5 Options
int main() {
    std::cout << "Medical records for Walk-In System" << std::endl;
    menu();
    std::cout << "Choose your option: ";
    int input = 0;
    // receive input for menu option
    std::cin >> input;
    
    // 1 enter a new patient into the system
    if (input == 1) {
        getCardNum();
        insert(const Patient& newElement);
        // fix to actually input into list
        //getPatientInfo();
        
        
    // 2 remove a patient from the system
    } else if (input == 2){
        getCardNum();
        remove();
        
    // 3 search for a patient
    } else if (input == 3){
        getCardNum();
        
    // 4 modify a patient's record (for example, adding the patient's information or making a change of address, etc...).
    // search for patient first, then modify
    } else if (input == 4){
        Patient modPatient = getCardNum();
        Patient* realPatient = list.search(modPatient);
        getPatientInfo(realPatient);
    
    // 5 print all its patients by ascending order of care card numbers.
        //sort? then print
    } else if (input == 5){
        void printList();

    // 6 End program
    } else if (input == 6){
        std::cout << "Quitting program..." << std::endl;
        return -1;
    }
    
    return 0;
    
}
