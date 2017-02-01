/* 
  File:   main.cpp
  Author: Bradley Erwin
  Created on February 01, 2017, 10:40 AM
  Purpose:  Calculate savings per year
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
void  savings(int [],float [],float,float,int);
void  prntAry(int [],float [],int);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=144;
    int nYears=SIZE/2+1;
    int year[SIZE]={};//Initialize the entire array to 0
    float balance[SIZE]={};
    
    //Input values
    float intRate=0.06f;
    float gift=2.0e4;
    
    //Process by mapping inputs to outputs
    savings(year,balance,gift,intRate,nYears);
    
    //Output values
    prntAry(year,balance,nYears);

    //Exit stage right!
    return 0;
}

void  prntAry(int year[],float balance[],int n){
    cout<<"Year   Balance"<<endl;
    cout<<fixed<<setprecision(2)<<endl;
    for(int i=0;i<n;i++){
        cout<<setw(3)<<year[i]<<" $"<<setw(10)<<balance[i]<<endl;
    }
    cout<<endl;
}

void  savings(int y[],float b[],float p,float intRate,int nYears){
    //initialize array
    y[0]=0;
    b[0]=p;
    
    //Loops each year to fill array
    for(int year=1;year<nYears;year++){
        y[year]=year;
        b[year]=b[year-1]*(1+intRate);
    }
}