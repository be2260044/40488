/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 19, 2017, 6:12 PM
 * Purpose:  Distance Traveled
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
   int     tmeTrvd;//time traveled in hours
           
   float   mlsPrHr,//miles per hour 
           dstTrvd;//distance traveled in miles
    
            
   
    //Input or initialize values Here
    cout<<"This program calculates how much distance a vehicle "
                 "travels over a certain amount of time."<<endl;
    cout<<"How fast was the vehicle moving?"
            " (in miles per hour, and must be positive"<<endl;
    cin>>mlsPrHr;
    cout<<"How many hours did it travel?"<<endl;
    cin>>tmeTrvd;
    for(int time=1;time<=tmeTrvd;time++){
        dstTrvd=mlsPrHr*time;//distance=speed*time
        cout<<setprecision(2)<<fixed;
        cout<<"After hour #"<<time<<", the vehicle traveled "
                <<dstTrvd<<" miles."<<endl; 
       
    }
    
    
    
    //Exit
    return 0;
}

