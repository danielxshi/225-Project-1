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
#include <string>
#include "List.h"
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

// get card number from user
string getCardNum(){
    const string ERROR = "CareCard number must be at least 10 numbers.";
    string ccNum = "0000000000";

//    std::cout << "Please enter the carecard number of patient: ";
    cin >> ccNum;
    
    // verify size, if ccNum is empty, and if it is a digit
    locale loc;
    if (ccNum.size() != 10 || ccNum.empty() || isdigit(ccNum[0], loc)) {
        return ERROR;
    }
    
    return ccNum;
}

// enter in patient information
// probably don't need this but test before deleting

//Patient getPatientInfo(){
//    string name = "";
//    string address = "";
//    string phone = "";
//    string email = "";
//    
//    std::cout << "Please enter the carecard number of patient to add: " << std::endl;
//    Patient newPatient(getCardNum());
//    
//    std::cout << "Enter patient name: ";
//    std::cin >> name;
//    std::cout << "Enter patient address: ";
//    std::cin >> address;
//    std::cout << "Enter patient phone number: ";
//    std::cin >> phone;
//    std::cout << "Enter patient email: ";
//    std::cin >> email;
//    
//    newPatient.setName(name);
//    newPatient.setAddress(address);
//    newPatient.setPhone(phone);
//    newPatient.setEmail(email);
//    
//    return newPatient;
//}

// enters in patient information
//
void enterPatient (List* registry){
    string name = "";
    string address = "";
    string phone = "";
    string email = "";
    
    std::cout << "Please enter the carecard number of patient to add: " << std::endl;
    Patient newPatient(getCardNum());
    
    std::cout << "Enter patient name: ";
    getline(cin >> ws, name);
    std::cout << "Enter patient address: ";
    getline(cin >> ws, address);
    std::cout << "Enter patient phone number: ";
    getline(cin >> ws, phone);
    std::cout << "Enter patient email: ";
    getline(cin >> ws, email);
    
    newPatient.setName(name);
    newPatient.setAddress(address);
    newPatient.setPhone(phone);
    newPatient.setEmail(email);
    
    registry->insert(newPatient);
}

//remove patient NOT DONE
bool removePatient(List* registry){
    std::cout << "Please enter the carecard number of patient to remove: " << std::endl;
    string card = getCardNum();
    Patient patient(card);
    
    return registry -> remove(patient);
}

//search patient NOT DONE
void searchPatient (List* registry){
    std::cout << "Please enter the carecard number of patient to search for: " << std::endl;
    string card = getCardNum();
    
    Patient patient(card);
    Patient* curPatient = registry->search(patient);
    
    //check if patient exists
    if (curPatient == NULL) {
        std::cout << "No Patients Found under that carecard number." << std::endl;
    } else {
        // print patient information
        std::cout << "Patient found: " << std::endl;
        patient = *curPatient;
        patient.printPatient();
    }
    
}

// modify patient NOT DONE
void modify (List* registry){
    
}

void printPatient (List* registry){
    registry->printList();
}

// 4, 5 NOT DONE - mainly just copy pasted things for now
//need to run testing
// testcases: test if digits can be entered in name, chars can be entered in phone, larger than 10 for carecard, search for non-existing patient, search for patient that exists. check that prints in ascending order
// we may need to put this in a while loop so the program keeps running unless the user hits quit (6th option)

int main() {
    List* registry = new List();
    
    std::cout << "Medical records for Walk-In System" << std::endl;
    menu();
    std::cout << "Choose your option: ";
    int input = 0;
    // receive input for menu option
    std::cin >> input;

    //1 enter a new patient into the system
    if (input == 1) {
        // double check that this works
        enterPatient(registry);
        
    //2 remove a patient from the system
    } else if (input == 2){
        removePatient(registry);
        
    //3 search for a patient
    } else if (input == 3){
        searchPatient(registry);
        
    //4 modify a patient's record (for example, adding the patient's information or making a change of address, etc...).
    // search for patient first, then modify
    } else if (input == 4){
        // need to finish modify function
        // may need to create switch/if statement(s) asking what they want to modify
        
        // get care card number that user wants to modify
        // menu to modify name, address, phone, email (either switch or if statements, see void menu for example
        // use setters to set whatever needs to be edited, ie. patient.setName(name);
        
    
    //5 print all its patients by ascending order of care card numbers.
    } else if (input == 5){
        //print list as it should be sorted
        // need to fix if list is empty cout " List is empty"
        registry->printList();
        
    } else if (input == 6){
        std::cout << "Quitting program..." << std::endl;

        return -1;
    }
    
    return 0;
    
}
