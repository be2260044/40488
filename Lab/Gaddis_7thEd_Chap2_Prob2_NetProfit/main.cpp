/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 09, 2017, 12:54 PM
 * Purpose:  Template
 * const unsigned char PERCENT=100;//conversion to percent
//Function Prototypes Here

//Program Execution Begins Here

 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const unsigned char PERCENT=100;
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    
    //Input or initialize values Here
    unsigned char pctPrft=62;//Percent of gross sales that is profit
    int totSals=4600000;//Total amount of sales
    int netSals;
    //Process/Calculations Here
    netSals=totSals*pctPrft/PERCENT;//Calculation for net sales
    //Output Located Here
    cout<<"This program calculates the net"<<endl;
    cout<<"profit of a particular company."<<endl;
    cout<<"The gross sales of the company = $"<<totSals<<endl;
    cout<<"The company makes "<<static_cast<int>(pctPrft)<<"% profit."<<endl;
    cout<<"The net profit of the company = $"<<netSals<<endl;

    //Exit
    return 0;
}

