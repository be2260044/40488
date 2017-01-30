/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 24, 2017, 1:35 AM
 * Purpose:  Query the digits
 */

//System Libraries Here
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

        
//Function Prototypes Here
bool qryDigt(int,int);//Query the digits

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    char digit;
    int number;
    
    //Input or initialize values Here
    cout<<"This program finds a digit"<<endl;
    cout<<"input a single digit"<<endl;
    cin>>digit;
    
    //Generate a random number
    number=rand();
    
    //Output the Roman Numeral
    if(qryDigt(number,digit-48)){
        cout<<digit<<" was found in "<<number<<endl;
    }else{
        cout<<digit<<" was not found in "<<number<<endl;
    }
  
    //Exit
    return 0;
}
//000000001111111111222222222233333333334444444444555555555566666666667777777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************** Find a Digit in the Number ******************************
//Description: Query a number and compare results
//Inputs:
//      number -> 
//Outputs:
//      true -> If the digit is found
bool qryDigt(int number,int digit){
    //loops until you find the digit or exit
    do{
        if (number%10==digit)return true;
        number/=10;
        
    }while(number!=0);
    return false;
   
}