/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 10, 2017, 12:42 PM
 * Purpose:  Debt Per Person
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float debt16,debt08,usPop16,usPop08,dtPer16,dtPer08;
    //Input or initialize values Here
    cout<<"What was the National Debt (in $'s) in 2016?"<<endl;
    cin>>debt16;
    cout<<"What was the National Debt (in $'s) in 2008?"<<endl;
    cin>>debt08;
    cout<<"Enter the total US population (in # of people) in 2016"<<endl;
    cin>>usPop16;
    cout<<"Enter the total US population (in # of people) in 2008"<<endl;
    cin>>usPop08;
    //Process/Calculations Here
    dtPer16=debt16/usPop16;
    dtPer08=debt08/usPop08;
    //Output Located Here
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"The debt per person in 2008 = $"<<dtPer08<<endl;
    cout<<"The debt per person in 2016 = $"<<dtPer16<<endl;

    //Exit
    return 0;
}

