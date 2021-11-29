/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Austin Mathew
 */

#include "std_lib_facilities.h"

int main() {
    cout << "Odd or Even?\n" << "Enter an Integer for evaluation: ";
    //Gives some instruction to user
    int input;
    cin>>input;
    //stores input from user

    if(input%2)//for odd numbers the remainder is 1 or -1, which acts as true
        cout<<"The value "<< input <<" is an odd number.";
    else//for even numbers the remainder is 0, which acts as false
        cout<<"The value "<< input <<" is an even number.";

    return 0;
}
