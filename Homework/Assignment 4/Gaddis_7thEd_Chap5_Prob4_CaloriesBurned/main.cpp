/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 19, 2017, 1:19 PM
 * Purpose:  Calories Burned
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
    float clsBrnd;//calories burned
    
    //Input or initialize values Here
    cout<<"This table shows how many calories are burned "
                 "while on the treadmill over time"<<endl;
    for(int minsRan=2;minsRan<=6;minsRan++){//starts at 2 to get 10 min as first
        clsBrnd=minsRan*5*3.9;//burns 3.9 calories for every minute ran
                              //uses 5 to get results in increments of 5 minutes
        cout<<"After "<<minsRan*5<<" minutes ran, you burned "
                <<clsBrnd<<" calories total"<<endl; 
       
    }
    
    
    
    //Exit
    return 0;
}

