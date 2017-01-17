/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 16, 2017, 4:50 PM
 * Purpose:  Magic Dates
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
    short month,day,year;
    //Input or initialize values Here
    cout<<"Input the number of the month"<<endl;
    cin>>month;
    cout<<"Input the numerical day of the month"<<endl;
    cin>>day;
    cout<<"Input the last 2 digits of the year"<<endl;
    cin>>year;
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<month<<"/"<<day<<"/"<<year<<endl;
    cout<<((month*day==year)?"is a magic date":"is not a magic date")<<endl;

    //Exit
    return 0;
}

