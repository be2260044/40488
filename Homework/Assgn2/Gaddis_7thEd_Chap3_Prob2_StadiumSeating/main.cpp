/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 11, 2017, 1:41 PM
 * Purpose:  Stadium Seating
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
    short clsAPrc=15,//class A seat cost (in $'s)
            clsBPrc=12,//class B seat cost (in $'s)
            clsCPrc=9;//class C seat cost (in $'s)
            
    float txSales,//ticket sales (in $'s)
            numATix,numBTix,numCTix;//# of tickets sold for each class
    //Input or initialize values Here
    cout<<"How many tickets in class A were sold?"<<endl;
    cin>>numATix;
    cout<<"How many tickets in class B were sold?"<<endl;
    cin>>numBTix;
    cout<<"How many tickets in class C were sold?"<<endl;
    cin>>numCTix;
    //Process/Calculations Here
    txSales=clsAPrc*numATix+clsBPrc*numBTix+clsCPrc*numCTix;
    //Output Located Here
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"Total income generated = $"<<txSales<<endl;
    

    //Exit
    return 0;
}

