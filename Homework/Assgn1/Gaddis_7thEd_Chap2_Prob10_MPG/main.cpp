/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 10, 2017, 3:54 PM
 * Purpose:  Miles per gallon
 * 350 miles 12 gallons...miles drive/gallonsused
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
    int mlsTvld=350;//Miles traveled
    float glnUsed=12,//Gallons used
            mpg;
    //Input or initialize values Here
    
    //Process/Calculations Here
    mpg=mlsTvld/glnUsed;
    //Output Located Here
    cout<<"This program calculates miles per gallon."<<endl;
    cout<<"The car traveled "<<mlsTvld<<" miles,"<<endl;
    cout<<"using "<<glnUsed<<" gallons total."<<endl;
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"The car gets "<<mpg<<" miles per gallon."<<endl;

    //Exit
    return 0;
}

