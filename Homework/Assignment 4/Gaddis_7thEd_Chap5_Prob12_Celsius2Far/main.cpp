/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 19, 2017, 6:12 PM
 * Purpose:  Celsius to Fahrenheit Table
 */

//System Libraries Here
#include <iostream>//input/output library
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare and initialize local Variables Here
  float fhtTemp;//Celsius temp and Fahrenheit temp
    
    //Input or initialize values Here
    cout<<"This program converts temperatures from Celsius"
            " into Fahrenheit."<<endl;
    //Process/Calculations Here
    for(float clsTemp=0;clsTemp<=20;clsTemp++){
    fhtTemp=clsTemp*9/5+32;//temperature conversion
    //Output Located Here
    cout<<fixed<<setprecision(2);
    cout<<"Celsius = "<<clsTemp<<" degrees, "
            "when Fahrenheit = "<<fhtTemp<<" degrees"<<endl;
       
    }
    //Exit
    return 0;
}

