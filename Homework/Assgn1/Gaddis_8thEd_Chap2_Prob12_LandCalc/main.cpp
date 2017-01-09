/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 4, 2017, 1:45 PM
 * Purpose:  Land Calculation
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
//Function Prototypes Here
const int CNVACFT=43560;//Conversion Acres to Feet
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare and Initialize all Variables Here
    int nAcres,nFt2;
    
    //Input or initialize values Here
    cout<<"This is a conversion program"<<endl;
    cout<<"from number of Acres to Feet squared"<<endl;
    cout<<"Input Number of Acres"<<endl;
    cin>>nAcres;
    //Process/Calculations Here
    nFt2=nAcres*CNVACFT;
    //Output Located Here
    cout<<"The number of Acres input = "<<nAcres<<endl;
    cout<<"Equivalent to "<<nFt2<<"(ft^2)"<<endl;
    
   
    //Exit
    return 0;
}

