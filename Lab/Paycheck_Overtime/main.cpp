/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 11, 2017, 12:21 PM
 * Purpose:  Paycheck with Overtime
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
    float hrsWrkd,//hours works (in hours)
            payRt,//pay rate (in $'s per hour)
            pyChckO,//pay check including overtime hours (in $'s)
            pyChck;//pay check (in $'s)
    //Input or initialize values Here
    cout<<"This program will calculate your paycheck before taxes"<<endl;
    cout<<"Enter the amount of hours that you worked."<<endl;
    cin>>hrsWrkd;
    cout<<"Enter your pay rate (in $'s per hour)."<<endl;
    cin>>payRt;
    //Process/Calculations Here
    pyChck=hrsWrkd*payRt;//calculate paycheck for regular time
    pyChckO=(40*payRt)+(hrsWrkd-40)*2*payRt;//calculate paycheck including overtime
    //Output Located Here
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"Your pay check = "<<endl;
    cout<<"$"<<((hrsWrkd<=40)?pyChck:pyChckO)<<endl;

    //Exit
    return 0;
}

