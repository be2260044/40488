/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 30, 2017, 12:19 PM
 * Purpose:  Collatz Conjecture
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
    unsigned long srsVal;
    int nTerms=0;
    const int arraySz=100;
    int srsAry[arraySz]={};
    
    //Initialize
    cout<<"What is your starting value?"<<endl;
    cin>>srsVal;
    
    //Process/Calculations Here
 
    //Loop the series
    do{
        for(int term=2;srsVal!=1;term++){
            srsAry[term-2]=srsVal;
            if(srsVal%2==0){
                srsVal/=2;
            }
            else{
                srsVal=(srsVal*3+1);
            }
            nTerms=term;
            cout<<srsAry[term-2]<<" ";
        }
    }while(srsVal!=1);
    //Output Located Here
    cout<<"1"<<endl;
    cout<<"The number of terms in the series is "<<nTerms<<endl;
    
    //Exit
    return 0;
}
