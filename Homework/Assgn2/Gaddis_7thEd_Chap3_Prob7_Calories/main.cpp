/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 12, 2017, 1:12 PM
 * Purpose:  How Many Calories?
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
    unsigned short numCkie;//numbers of cookies eaten
    float clPrCki,//calories per cookie
            calCons;//calories consumed
    //Input or initialize values Here
    cout<<"This program calculates how many calories "
            "that you consume while eating cookies."<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cin>>numCkie;
    //Process/Calculations Here
    clPrCki=300/4;
    calCons=numCkie*clPrCki;
    
    //Output Located Here
    cout<<"You consumed "<<calCons<<" calories from the cookies."<<endl;

    //Exit
    return 0;
}

