/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 16, 2017, 10:53 PM
 * Purpose:  Template
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
    string result;
           
    //Input or initialize values Here
    cout<<"This is a game to guess a combination "
            "of coins to equal 1 dollar"<<endl;
    cout<<"Enter the amount of Quarters, Nickels, Dimes, and Pennies"<<endl;
    cout<<"Type all in the same line i.e. 3 4 0 2"<<endl;
    cout<<"Maximum of any value must be less than 10"<<endl;
    cin>>nQrts>>nDimes>>nNickls>>nPenies;
    
     
    //Process/Calculations Here
    total=(nQrts-48)*quarter +
            (nDimes-48)*dime +
            (nNickls-48)*nickel +
            (nPenies-48)*penny;
    if ((total/100.0f)==1) result="Congratulations, You Win!!!";
    else if ((total/100.0f)>1) result="Sorry, that is more than a dollar.";
    else if ((total/100.0f)<1) result="Sorry, that is less than a dollar.";
    //Output Located Here
    cout<<result<<endl;

    //Exit
    return 0;
}

