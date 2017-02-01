/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 31, 2017, 1:00 PM
 * Purpose:  menu
 */

//System Libraries Here
#include <iostream>//input/output library
#include <cstdlib>//random number generator seed
#include <ctime>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float ftInpt();
float cnvCalc(float);
float mtrOtpt(float);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char choice;
    int inchs=0;
    float meters=0.0f,
            cntmtrs=0.0f,
            feet=0.0f;
    
    //Loop on the menu
    do{
            //Input or initialize values Here
            cout<<"Inches/Feet to Metric Conversions"<<endl;
            cout<<"Would you like to do a conversion?"<<endl;
            cout<<"Type 1 to do a conversion or anything else to exit"<<endl;
            cin>>choice;

            //Switch to determine the problem
        switch(choice){
            case '1':{float feet=ftInpt();
            float meters=cnvCalc(feet);
            mtrOtpt(meters);
            
            
                }
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice=='1');
    
    
    

    //Exit
    return 0;
}
//000000001111111111222222222233333333334444444444555555555566666666667777777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//********************************* Inputs *************************************
//description: Getting user inputs of measurements
//inputs: length (feet, inches)
//outputs: length (meters, centimeters)
//******************************************************************************
float ftInpt(){
    float feet, inchs;
    cout<<"How many feet?"<<endl;
    cin>>feet;
    cout<<"How many inches?"<<endl;
    cin>>inchs;
    
    return feet+inchs/12.0;
}

//000000001111111111222222222233333333334444444444555555555566666666667777777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************** Problem 1 ***********************************
//description: what is the process i.e. mapping from i to o
//inputs: datatype, range/validity, units, description
//outputs: datatype, range/validity, units, description
//******************************************************************************
float cnvCalc(float feet){
    float meters=feet*0.3048;

    return meters;
}

//000000001111111111222222222233333333334444444444555555555566666666667777777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************** Problem 1 ***********************************
//description: what is the process i.e. mapping from i to o
//inputs: datatype, range/validity, units, description
//outputs: datatype, range/validity, units, description
//******************************************************************************
float mtrOtpt(float meters){
    cout<<"The length is "<<meters<<" meters or "
            <<meters*100<<" centimeters"<<endl;
}




