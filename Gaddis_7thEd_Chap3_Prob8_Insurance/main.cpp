/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 12, 2017, 1:30 PM
 * Purpose:  How Much Insurance?
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const char PERCENT=100;
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float rplcCst,//cost to replace the building
            minInsr;//minimum amount of insurance
            
    //Input or initialize values Here
    cout<<"This program calculates the minimum amount "
            "of insurance to buy for a building"<<endl;
    cout<<"How much would it cost to replace the building (in $'s)?"<<endl;
    cin>>rplcCst;
    
    //Process/Calculations Here
    minInsr=rplcCst*80/PERCENT;
    
    //Output Located Here
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"The minimum insurance that you should buy "
            "for this building is $"<<minInsr<<endl;

    //Exit
    return 0;
}

