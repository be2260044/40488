/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 11, 2017, 3:47 PM
 * Purpose:  Average Test Scores
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float test1,test2,test3,test4,test5,avgScor;//tests 1-5 and average (in %)
    //Input or initialize values Here
    cout<<"Input your 5 test scores here (in %)"<<endl;
    cin>>test1>>test2>>test3>>test4>>test5;
    //Process/Calculations Here
    avgScor=(test1+test2+test3+test4+test5)/5;
    //Output Located Here
    cout<<setprecision(1)<<fixed<<endl;
    cout<<"Your Average Test score is "<<avgScor<<"%"<<endl;

    //Exit
    return 0;
}

