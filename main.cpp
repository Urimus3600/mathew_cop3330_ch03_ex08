#include "std_lib_facilities.h"

int main() {
    cout << "Odd or Even?\n" << "Enter an Integer for evaluation: ";
    int input;
    cin>>input;
    if(input%2)
        cout<<"The value "<< input <<" is an odd number.";
    else
        cout<<"The value "<< input <<" is an even number.";

    return 0;
}
