/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 11, 2017, 1:20 PM
 * Purpose:  MPG
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
    float mlsDrvn;//total miles able to be driven on a single tank of gas
    float totGlns,//amount of gallons the car can hold
            MPG;//miles per gallon
    //Input or initialize values Here
    cout<<"How many miles can you drive on a single tank of gas?"<<endl;
    cin>>mlsDrvn;
    cout<<"How many gallons does can your gas tank hold?"<<endl;
    cin>>totGlns;
    
    //Process/Calculations Here
    MPG=mlsDrvn/totGlns;
    //Output Located Here
    cout<<"Your car gets "<<MPG<<" Miles per Gallon!"<<endl;

    //Exit
    return 0;
}

