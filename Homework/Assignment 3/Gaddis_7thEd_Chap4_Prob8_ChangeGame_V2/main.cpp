/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 16, 2017, 10:53 PM
 * Purpose:  Change Game
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
   short quarter=25,//number of cents in coinage
                dime=10,
                nickel=5,
                penny=1;
    int nQrts,nDimes,nNickls,nPenies;
    float total;
    string result;
           
    //Input or initialize values Here
    cout<<"This is a game to guess a combination "
            "of coins to equal 1 dollar"<<endl;
    cout<<"Enter the amount of Quarters, Dimes, Nickels, and Pennies"<<endl;
    cout<<"Type all in the same line i.e. 12 8 0 3"<<endl;
    cin>>nQrts>>nDimes>>nNickls>>nPenies;
    
    //Process/Calculations Here
    total=nQrts*quarter/100.0f +
            nDimes*dime/100.0f +
            nNickls*nickel/100.0f +
            nPenies*penny/100.0f;
    if (total==1) result="Congratulations, You Win!!!";
    else if (total>1) result="Sorry, that is more than a dollar.";
    else if (total<1) result="Sorry, that is less than a dollar.";
    //Output Located Here
    cout<<result<<endl;

    //Exit
    return 0;
}

