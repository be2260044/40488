/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 16, 2017, 6:30 PM
 * Purpose:  Mass and Weight
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float GRAVITY=9.8;//in meters/sec/sec
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float mass,//in kilograms
            weight;//in Newtons
    //Input or initialize values Here
    cout<<"This program calculates an objects weight given its mass"<<endl;
    cout<<"Enter the object's mass"<<endl;
    cin>>mass;
    
    //Process/Calculations Here
    weight=mass*GRAVITY;
    
    //Output Located Here
    cout<<"The object's weight is "<<weight<<" Newtons"<<endl;
    cout<<((weight>1000)?"This object is too heavy":
        (weight<10)?"This object is too light":"")<<endl;

    //Exit
    return 0;
}

