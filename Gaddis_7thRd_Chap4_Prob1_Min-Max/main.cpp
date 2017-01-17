/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 16, 2017, 3:40 PM
 * Purpose:  Minimum/Maximum
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float number1,number2;
    string result;
    //Input or initialize values Here
    cout<<"This program determines which "
            "number that you enter is bigger?"<<endl;
    cout<<"Enter 2 numbers"<<endl;
    cin>>number1>>number2;
    //Process/Calculations Here
    if (number1>number2)     result=" is bigger than ";
    else if (number2>number1)result=" is smaller than ";
    else                     result=" is equal to ";
    //Output Located Here
    cout<<number1<<result<<number2<<endl;

    //Exit
    return 0;
}

