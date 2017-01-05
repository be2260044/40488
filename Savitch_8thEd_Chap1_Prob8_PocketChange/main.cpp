/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 05, 2017, 12:07 AM
 * Purpose:  Pocket Change
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
    const char quarter=25,//number of cents in coinage
                dime=10,
                nickel=5,
                penny=1;
    char nQrts,nDimes,nNickls,nPenies;
    unsigned short total;
           
    //Input or initialize values Here
    cout<<"This calculates the amount of you pocket change"<<endl;
    cout<<"How many Quarters, Nickels, Dimes, and Pennies"<<endl;
    cout<<"do you have in your pocket?"<<endl;
    cout<<"Type all in the same line i.e. 3 4 0 2"<<endl;
    cout<<"Maximum of any value must be less than 10"<<endl;
    cin>>nQrts>>nDimes>>nNickls>>nPenies;
    
     
    //Process/Calculations Here
    total=(nQrts-48)*quarter +
            (nDimes-48)*dime +
            (nNickls-48)*nickel +
            (nPenies-48)*penny;
    //Output Located Here
    cout<<"The coins in your pocket = "<<total<<" cents"<<endl;
    cout<<"The coins in your pocket = $"<<total/100.0f<<endl;

    //Exit
    return 0;
}

