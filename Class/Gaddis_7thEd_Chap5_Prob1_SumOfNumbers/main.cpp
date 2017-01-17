/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 17, 2017, 1:35 AM
 * Purpose:  Sum Of Numbers
 */

//System Libraries Here
#include <iostream>//input/output library
#include <iomanip>//for rounding and such
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
   
    //Declare and initialize local Variables Here
    unsigned int num2Sum;
    unsigned int sum=0;
    //Input or initialize values Here
    cout<<"This program adds the integers from 1 to "
            "whatever number that you choose"<<endl;
    cout<<"Which number would you like the sum up to?"
            " (must be a positive integer)."<<endl;
    cin>>num2Sum;
    for(unsigned int start=1;start<=num2Sum;start++){
        //assign a grade and add to the average
        //score and grade are local to the while group
        
        sum+=start;
        //Process/Calculations Here
        
    
        //Output Located Here
         
        
    };
    
    //calculate and output the average
    
    cout<<"The total sum of 1 to "<<num2Sum<<" = "<<sum<<endl;
    //Exit
    return 0;
}

