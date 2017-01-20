/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 17, 2017, 11:05 AM
 * Purpose:  Grades with For Loop
 */

//System Libraries Here
#include <iostream>//input/output library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
 
    //Declare and initialize local Variables Here
    unsigned int numSum, sum=0;
   
    
    
    //Input or initialize values Here
    cout<<"This program sums the number "
            "from 1 to whatever number you choose."<<endl;
    cout<<"What number do you want the sum to? (MUST BE A POSITIVE INTEGER)"
            <<endl;
    cin>>numSum;
    while (numSum<1){
        cout<<"That is not a valid input, please enter "
                "a number greater than 0"<<endl;
        cin>>numSum;
    }
    for(int numb=1;numb<=numSum;numb++){
        //assign a grade and add to the average
        //score and grade are local to the while group
        sum+=numb;
        
        //Process/Calculations Here
        cout<<numb<<"     "<<sum<<endl;
    
        //Output Located Here
         
        
    };
    cout<<"Sum of integers from 1 to "<<numSum<<" = "<<sum<<endl;
    //calculate and output the average
    
    //Exit
    return 0;
}

