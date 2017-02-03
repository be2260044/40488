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
void t24Inpt(int &,int &);         //Inputs military time
int cnvClc1(int,char &);           //Converts to standard time and adds A or P
void t12Otpt(int,int,int,char);    //Outputs standard time

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char choice,
            amPm;
    int milHrs=0,//Military time hours
            milMins=0,//Military time minutes
            stdHrs=0;
    
    //Loop on the menu
    do{
            //Input or initialize values Here
            cout<<"24 hour time format to 12 hour format conversion."<<endl;
            cout<<"Would you like to do a conversion?"<<endl;
            cout<<"Type 1 to do a conversion or anything else to exit"<<endl;
            cin>>choice;

            //Switch to determine the problem
        switch(choice){
            case '1':{
                t24Inpt(milHrs,milMins);//Input
            stdHrs=cnvClc1(milHrs,amPm);//Conversion set = to stdHrs
            t12Otpt(milHrs,milMins,stdHrs,amPm);//Output
            break;
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
void t24Inpt(int &hours,int &mins){
    cout<<"Please input the time in 24 hour format. "
            "Separate the hours and minutes with a space. "
            "(eg 14:45 would be input as 14 45)"<<endl;
    cin>>hours>>mins;
    
    //Validate time
    while(hours>23||mins>59){
     cout<<"Invalid input, make sure the hours are between 0-23"
             " and the minutes are between 0-59"<<endl;
     cin>>hours>>mins;
    }
}

//000000001111111111222222222233333333334444444444555555555566666666667777777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************** Problem 1 ***********************************
//description: what is the process i.e. mapping from i to o
//inputs: datatype, range/validity, units, description
//outputs: datatype, range/validity, units, description
//******************************************************************************
int cnvClc1(int hours,char &aP){
    if(hours>12){
        hours-=12;
        aP='P';}
    else{
        aP='A';}
    return hours;
}

//000000001111111111222222222233333333334444444444555555555566666666667777777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************************** Problem 1 ***********************************
//description: what is the process i.e. mapping from i to o
//inputs: datatype, range/validity, units, description
//outputs: datatype, range/validity, units, description
//******************************************************************************
void t12Otpt(int mHrs,int mMins,int sdHrs,char aP){
    cout<<mHrs<<":"<<mMins<<" is equivalent to "
            ""<<sdHrs<<":"<<mMins<<" "<<aP<<"M"<<endl;
}




