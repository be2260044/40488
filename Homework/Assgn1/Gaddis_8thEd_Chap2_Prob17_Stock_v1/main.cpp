/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 4, 2017, 12:07 PM
 * Purpose:  Stock Calculation
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const unsigned char PERCENT=100;//conversion to percent
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare and Initialize all Variables Here
    unsigned char stkPrce=35;//Units of $'s/share
    unsigned short nShares=750;//Number of shares
    unsigned char comishn=2;//Percent Commission
    unsigned short stkPaid,comPaid,totPaid;
    
    //Input or initialize values Here
   
    //Process/Calculations Here
    stkPaid=stkPrce*nShares;//Amount paid for stock purchase in$'s
    comPaid=stkPaid*comishn/PERCENT;//Commission on stock purchase in $'s
    totPaid=stkPaid+comPaid;//Total paid in $'s
    //Output Located Here
    cout<<"Stock Price/Share =   $"<<static_cast<int>(stkPrce)<<"/share"<<endl;
    cout<<"Number of Shares =   $"<<nShares<<" shares"<<endl;
    cout<<"Commission              "<<static_cast<int>(comishn)<<"%"<<endl;
    cout<<"Stock Price Paid = $"<<stkPaid<<endl;
    cout<<"Commission Paid =    $"<<comPaid<<endl;
    cout<<"Total Paid =       $"<<totPaid<<endl;
   
    //Exit
    return 0;
}

