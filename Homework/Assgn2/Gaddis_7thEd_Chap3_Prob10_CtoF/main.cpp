/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 12, 2017, 1:45 PM
 * Purpose:  Celsius to Fahrenheit
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
    float clsTemp,fhtTemp;//Celsius temp and Fahrenheit temp
    
    //Input or initialize values Here
    cout<<"This program converts Celsius temperatures"
            " into Fahrenheit temperatures."<<endl;
    cout<<"What temperature would you like "
            "to convert (in degrees Celsius)?"<<endl;
    cin>>clsTemp;
    //Process/Calculations Here
    fhtTemp=clsTemp*9/5+32;
    //Output Located Here
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"The Fahrenheit equivalent temperature"
            " is "<<fhtTemp<<" degrees."<<endl;

    //Exit
    return 0;
}

