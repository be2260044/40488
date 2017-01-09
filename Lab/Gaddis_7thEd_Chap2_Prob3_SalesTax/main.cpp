/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 09, 2017, 01:18 PM
 * Purpose:  Sales Tax
 * const int CNVACFT=43560;//Conversion Acres to Feet
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
    unsigned char stTxPct=4;//state tax percent
    unsigned char ctTxPct=2;//county tax percent
    
    unsigned int prchase,stateTx,cntyTx,totTx,totPric;
    //Input or initialize values Here
    cout<<"This is a program that calculates sales tax"<<endl;
    cout<<"The State tax is "<<static_cast<int>(stTxPct)<<"%"<<endl;
    cout<<"The County tax is "<<static_cast<int>(ctTxPct)<<"%"<<endl;
    //Process/Calculations Here
    stateTx=prchase*stTxPct/PERCENT;
    cntyTx=prchase*ctTxPct/PERCENT;
    totTx=stateTx+cntyTx;
    totPric=prchase+totTx;
    //Output Located Here
    cout<<"Intput Purchase Price in $'s"<<endl;
    cin>>prchase;
    cout<<"Purchase Price = $"<<prchase<<endl;
    cout<<"Tax = $"<<totTx<<endl;
    cout<<"Total Price = $"<<totPric<<endl;

    //Exit
    return 0;
}

