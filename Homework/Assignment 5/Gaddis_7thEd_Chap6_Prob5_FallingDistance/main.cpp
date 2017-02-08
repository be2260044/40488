/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on February 02, 2017, 1:00 PM
 * Purpose:  Falling Distances
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float flngDst(int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float distnce;
    
    //Input or initialize values Here
   
    //Process/Calculations Here
   
    
    //Output Located Here
    cout<<"This program calculates the distance that an object will"
            "fall over a period of 10 seconds."<<endl;
    cout<<"Time (seconds):    Distance (meters):"<<endl;
    for(int time=1;time<=10;time++){
        cout<<setprecision(2)<<fixed;
        cout<<setw(3)<<time<<"                      "<<setw(6)
               <<flngDst(time)<<endl;
   }
    //Exit
    return 0;
}

float flngDst(int time){
    float dist;
    dist=9.8*time*time/2;
    return dist;
}