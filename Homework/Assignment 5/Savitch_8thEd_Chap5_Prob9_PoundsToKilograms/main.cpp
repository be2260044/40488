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
float lbsInpt();
float cnvCalc(float);
float kgOtpt(float);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char choice;
    int ounces=0;
    float kilograms=0.0f,
            grams=0.0f,
            pounds=0.0f;
    
    //Loop on the menu
    do{
            //Input or initialize values Here
            cout<<"Pounds/Ounces to Metric Conversions"<<endl;
            cout<<"Would you like to do a conversion?"<<endl;
            cout<<"Type 1 to do a conversion or anything else to exit"<<endl;
            cin>>choice;

            //Switch to determine the problem
        switch(choice){
            case '1':{float pounds=lbsInpt();
            float kilograms=cnvCalc(pounds);
            kgOtpt(kilograms);
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
//inputs: weight (pounds, ounces)
//outputs: weight (kilograms, grams)
//******************************************************************************
float lbsInpt(){
    float pounds, ounces;
    cout<<"How many pounds?"<<endl;
    cin>>pounds;
    cout<<"How many ounces?"<<endl;
    cin>>ounces;
    
    return pounds+ounces/16.0;
}

//000000001111111111222222222233333333334444444444555555555566666666667777777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************** Problem 1 ***********************************
//description: what is the process i.e. mapping from i to o
//inputs: datatype, range/validity, units, description
//outputs: datatype, range/validity, units, description
//******************************************************************************
float cnvCalc(float pounds){
    float kilograms=pounds/2.2046;
    return kilograms;
}

//000000001111111111222222222233333333334444444444555555555566666666667777777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************** Problem 1 ***********************************
//description: what is the process i.e. mapping from i to o
//inputs: datatype, range/validity, units, description
//outputs: datatype, range/validity, units, description
//******************************************************************************
float kgOtpt(float kilograms){
    cout<<"The length is "<<kilograms<<" kilograms or "
            <<kilograms*1000<<" grams"<<endl;
}




