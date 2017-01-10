
/* 
 * File:   main.cpp
 * Author: Bradley Erwin   
 * Created on January 3, 2017, 12:16 PM
 * Purpose: Calculate the paycheck
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as Pi, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    // declare Variables
    float hrsWrkd,//Hours worked in (hrs)
            payRate,//Pay Rate in $'s/hr
            payChck;//Pay check in $'s
    //Input Values
    cout<<"This program calculates your Paycheck"<<endl;
    cout<<"Your hours worked and pay rates are required"<<endl;
    cout<<"Input your hours worked"<<endl;
    cin>>hrsWrkd;
    cout<<"Input your pay rate in $'s"<<endl;
    cin>>payRate;
    //Process by mapping inputs to outputs
    payChck=payRate*hrsWrkd;
    //Output Values
    cout<<"Your paycheck = $"<<payChck<<endl;
    //Exit Program
    return 0;
}

