/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 09, 2017, 10:50 PM
 * Purpose:  Average of Values
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
    unsigned char a=28;
    unsigned char b=32;
    unsigned char c=37;
    unsigned char d=24;
    unsigned char e=33;
    float sum;
    float average;
    //Input or initialize values Here
    
    //Process/Calculations Here
    sum=a+b+c+d+e;
    average=sum/5;
    //Output Located Here
    cout<<"This program was designed to average values"<<endl;
    cout<<"The values are "<<static_cast<int>(a)<<", "<<static_cast<int>(b)<<
            ", "<<static_cast<int>(c)<<", "<<static_cast<int>(d)<<", "<<
            static_cast<int>(e)<<endl;
    cout<<"The sum of these values is "<<sum<<endl;
    cout<<"The average of these 5 values is "<<average<<endl;

    //Exit
    return 0;
}

