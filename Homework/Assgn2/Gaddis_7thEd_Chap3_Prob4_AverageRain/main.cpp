/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 11, 2017, 4:07 PM
 * Purpose:  Template
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
    string month1,month2,month3;//the name of each month
    float m1Rain,m2Rain,m3Rain,avgRain;//amount of rain (in inches)
    //Input or initialize values Here
    cout<<"This program will calculate the average rain over 3 months."<<endl;
    cout<<"Please enter the 3 months that you wish to find the average "
            "of, followed by their rainfall (in inches)."<<endl;
    cout<<"For example: January 18.5 February 2.3 March 3.2"<<endl;
    cin>>month1>>m1Rain>>month2>>m2Rain>>month3>>m3Rain;
    //Process/Calculations Here
    avgRain=(m1Rain+m2Rain+m3Rain)/3;
    //Output Located Here
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"The average rainfall for "<<month1<<", "<<month2<<", and "
            <<month3<<" is "<<avgRain<<" inches"<<endl;

    //Exit
    return 0;
}

