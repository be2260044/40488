/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 16, 2017, 6:15 PM
 * Purpose:  Body Mass Index
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const int bmiCnst=703;//BMI constant for the conversion
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float weight,//person's weight in lbs
            height,//person's height in inches
            BMI;//body mass index
    string result;
    //Input or initialize values Here
    cout<<"This program calculates Body Mass Index"<<endl;
    cout<<"Enter your weight (in pounds)"<<endl;
    cin>>weight;
    cout<<"Enter your heigh (in inches)"<<endl;
    cin>>height;
    //Process/Calculations Here
    BMI=weight*bmiCnst/(height*height);
    if (BMI>25)                    result="overweight";
    else if (BMI<=25 && BMI>=18.5) result="at optimal weight";
    else                           result="underweight";
    //Output Located Here
    cout<<setprecision(1)<<fixed<<endl;
    cout<<"Your BMI is "<<BMI<<endl;
    cout<<"According to the Body Mass Index, "
            "you are "<<result<<endl;
           

    //Exit
    return 0;
}

