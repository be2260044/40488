/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 10, 2017, 12:42 PM
 * Purpose:  Debt Per Person
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
    float debt16=19.4e12,//http://www.polidiotic.com/by-the-numbers/us-national-debt-by-year/
            debt08=10e12,//http://www.polidiotic.com/by-the-numbers/us-national-debt-by-year/
            usPop16=320e6,//http://www.worldometers.info/world-population/us-population/
            usPop08=304e6,//https://fusiontables.google.com/DataSource?dsrcid=225439#rows:id=1
            dtPer16,
            dtPer08;
    //Input or initialize values Here
    
    //Process/Calculations Here
    dtPer16=debt16/usPop16;
    dtPer08=debt08/usPop08;
    //Output Located Here
    cout<<"The Total US Debt in 2016 was $"<<debt16<<endl;
    cout<<"The Total US Debt in 2008 was $"<<debt08<<endl;
    cout<<"The US Population in 2016 was  "<<usPop16<<" people"<<endl;
    cout<<"The US Population in 2008 was  "<<usPop08<<" people"<<endl;
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"The debt per person in 2008 = $"<<dtPer08<<endl;
    cout<<"The debt per person in 2016 = $"<<dtPer16<<endl;

    //Exit
    return 0;
}

