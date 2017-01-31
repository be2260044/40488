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
float cltzSrs(float);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float srsVal=0;
    int myVal;
    
    //Initialize
    cout<<"What is your starting value?"<<endl;
    cin>>srsVal;
    
    //Process/Calculations Here
    myVal=cltzSrs(srsVal);
    
    //Output Located Here
    cout<<"The Final number in the series is"<<myVal<<endl;

    //Exit
    return 0;
}
float coltzSrs(float srsVal){
    //Declare and initialize variable
    float series=srsVal;
    //Loop the series
    for(int term=1;series>=1;term++){
        if(static_cast<int>(series)%2==0){
            series/=2;
        }
        else{
            series=(series*3+1);
        }
        cout<<series<<endl;
    }return series;
}
