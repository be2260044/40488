/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 19, 2017, 1:42 PM
 * Purpose:  Membership Fees Increase
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
    float memFees=2500;//membership fees
    
    //Input or initialize values Here
    cout<<"This table shows how much the membership fees "
                 "of a club increases over time"<<endl;
    for(int year=1;year<=6;year++){
        memFees*=1.04;//2500 starting, increasing by 4% each year
                              //uses 5 to get results in increments of 5 minutes
        cout<<setprecision(2)<<fixed;
        cout<<"After year "<<year<<", the membership fees will be $"
                <<memFees<<endl; 
       
    }
    
    
    
    //Exit
    return 0;
}

