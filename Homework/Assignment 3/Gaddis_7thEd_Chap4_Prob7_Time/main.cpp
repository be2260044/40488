/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 16, 2017, 8:40 PM
 * Purpose:  Time Calculator
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
    float minutes,hours,days,seconds,
            result1;//output for the amount of days, hours, etc
    string result2;//output for the units of days, hours, etc
    
    //Input or initialize values Here
    cout<<"This program will convert seconds into "
            "minutes, hours, or days."<<endl;
    cout<<"Enter the number of seconds."<<endl;
    cin>>seconds;
    
    //Process/Calculations Here
    minutes=seconds/60;
    hours=seconds/3600;
    days=seconds/86400;
    
    //Output Located Here
    if (seconds>=86400)    result1=days, result2=" day(s)";
    else if (seconds>=3600)result1=hours, result2=" hour(s)";
    else if (seconds>=60)  result1=minutes, result2=" minute(s)";
    else                  result1=seconds, result2=" second(s)";
    cout<<setprecision(2)<<fixed<<endl;
    cout<<seconds<<" seconds = "<<result1<<result2<<endl;
    //Exit
    return 0;
}

