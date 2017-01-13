/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 12, 2017, 7:41 PM
 * Purpose:  Exchange Rates
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
    const float ynPrDlr=115.04,//yen per dollar 115.04
            euPrDlr=0.94;//euro per dollar 0.94
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here 
    float usDlrs,//US dollars
            jpnYen,//Japanese yen
            euro;
    //Input or initialize values Here
    cout<<"This program converts US dollar values to"
           " Japanese Yen and Euros." <<endl;
    cout<<"How many dollars would you like to convert?"<<endl;
    cin>>usDlrs;
    //Process/Calculations Here
    jpnYen=usDlrs*ynPrDlr;
    euro=usDlrs*euPrDlr;
    //Output Located Here
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"All Values Are Equivalent:"<<endl;
    cout<<"US Dollars   = "<<usDlrs<<" Dollars."<<endl;
    cout<<"Japanese Yen = "<<jpnYen<<" Yen."<<endl;
    cout<<"Euros        = "<<euro<<" Euros."<<endl;

    //Exit
    return 0;
}

