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
#include "List.cpp"
#include "Patient.cpp"

// States all menu options
void menu (){
    std::cout << "1. Enter new patient into the system." << std::endl;
    std::cout << "2. Remove a patient from the system." << std::endl;
    std::cout << "3. Search for a patient." << std::endl;
    std::cout << "4. Modify a patient's record." << std::endl;
    std::cout << "5. Print all its patients by ascending order of care card numbers." << std::endl;
    
}



int main() {
    std::cout << "Medical records for Walk-In System" << std::endl;
    menu();
    std::cout << "Choose your option: ";
    int input = 0;
    // receive input for menu option
    std::cin >> input;
    
    //1 enter a new patient into the system
    if (input == 1) {
        string ccNum = "";
        std::cout << "CareCard number of patient to add: ";
        cin >> ccNum;
    //  Patient(ccNum);
        
    //2 remove a patient from the system
    } else if (input == 2){
        string ccNum = "";
        std::cout << "CareCard number of patient to remove: ";
        cin >> ccNum;
        
    //3 search for a patient
        // search by carecard?
    } else if (input == 3){
        string ccNum = "";
        std::cout << "CareCard number of patient to remove: ";
        cin >> ccNum;
        
    //4 modify a patient's record (for example, adding the patient's information or making a change of address, etc...).
    // search for patient first, then modify
    } else if (input == 4){
        string ccNum = "";
        std::cout << "CareCard number of patient to search: ";
        cin >> ccNum;
    
    //5 print all its patients by ascending order of care card numbers.
        //sort? then print
    } else if (input == 5){
        string ccNum = "";
        std::cout << "CareCard number of patient to remove: ";
        cin >> ccNum;
    }
    
    return 0;
    
}
