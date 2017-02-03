/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on Jan 31, 2016, 12:47 AM
 * Purpose:  sales
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float getSls(string);
void fndHst(float, float, float, float);//Find highest

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float sthEast,nthEast,nthWest,sthWest;//Regions
    
    
    //Input or initialize values Here
    cout<<"This program compares four division's sales and determines which "
            "(of SouthEast, SouthWest, NorthWest and NorthEast) "
            "had the greatest sales for the quarter."<<endl;
      
    //Process/Calculations Here

    //Output Located Here
    nthEast=getSls("NorthEast");
    sthEast=getSls("SouthEast");
    nthWest=getSls("NorthWest");
    sthWest=getSls("SouthWest");
   
    fndHst(nthEast,sthEast,nthWest,sthWest);

    //Exit
    return 0;
}
//******************************************************************************
//******************************************************************************
float getSls(string division){
    float result;
    do{
        cout<<"What is "<<division<<"'s quarterly sales "
                "figure in dollars?"<<endl;
        cin>>result;
    }while(result<=0);
    return result; 
}
//******************************************************************************
//******************************************************************************

void fndHst(float nthEast,float sthEast,float nthWest,float sthWest){
    
    float sales=nthEast;
    string division=" ";
    
    if (sthEast>sales){sales=sthEast; 
        division="SouthEast";}
    if (nthWest>sales){sales=nthWest;
        division="NorthWest";}
    if (sthWest>sales){sales=sthWest;
        division="SouthWest";}
    if (nthEast>sales){sales=nthEast;
        division="NorthEast";}
    
    //Output the Highest Value
    cout<<"The "<<division<<" division has the highest sales at $"<<sales<<endl;    
}