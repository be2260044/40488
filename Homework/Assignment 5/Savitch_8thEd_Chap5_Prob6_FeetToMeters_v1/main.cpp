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
int ftInpt(int,float,float,float);
float cnvCalc(int,float,float,float);
float mtrOtpt(float,float);

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
            case '1':{ftInpt(inchs,feet,meters,cntmtrs);}
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
int ftInpt(int inchs,float feet,float meters,float cntmtrs){
    cout<<"How many feet?"<<endl;
    cin>>feet;
    cout<<"How many inches?"<<endl;
    cin>>inchs;
    cnvCalc(inchs,feet,meters,cntmtrs);
}

//000000001111111111222222222233333333334444444444555555555566666666667777777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************** Problem 1 ***********************************
//description: what is the process i.e. mapping from i to o
//inputs: datatype, range/validity, units, description
//outputs: datatype, range/validity, units, description
//******************************************************************************
float cnvCalc(int inchs,float feet,float meters,float cntmtrs){
    feet+=inchs/12.0f;
    meters=feet*0.3048;
    cntmtrs=meters*100;
    mtrOtpt(meters,cntmtrs);
}

//000000001111111111222222222233333333334444444444555555555566666666667777777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************** Problem 1 ***********************************
//description: what is the process i.e. mapping from i to o
//inputs: datatype, range/validity, units, description
//outputs: datatype, range/validity, units, description
//******************************************************************************
float mtrOtpt(float meters,float cntmtrs){
    cout<<"The length is "<<meters<<" meters or "
            <<cntmtrs<<" centimeters"<<endl;
}




