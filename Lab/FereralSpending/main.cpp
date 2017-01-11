/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 10, 2017, 12:15 PM
 * Purpose:  Federal Spending
 */

//System Libraries Here
#include <iostream>
#include<iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const char PERCENT=100;
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float fedBud=3.54e12,//http://federal-budget.insidegov.com/l/119/2016-Estimate
            milBud=598.5e9,//https://www.nationalpriorities.org/campaigns/military-spending-united-states/
            nasaBud=19.3e9,//https://en.wikipedia.org/wiki/Budget_of_NASA
            nBudPct,mBudPct;
    //Input or initialize values Here
    
    //Process/Calculations Here
    mBudPct=milBud/fedBud*PERCENT;
    nBudPct=nasaBud/fedBud*PERCENT;
    //Output Located Here
    cout<<"The total Federal Budget in 2016 was $"<<fedBud<<endl;
    cout<<"The US Military Budget in 2016 was   $"<<milBud<<endl;
    cout<<"NASA's Budget in 2016 was            $"<<nasaBud<<endl;
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"The Military's Budget is "<<mBudPct<<"% of the Federal Budget"<<endl;
    cout<<"NASA's Budget is         "<<nBudPct<<"% of the Federal Budget"<<endl;

    //Exit
    return 0;
}

