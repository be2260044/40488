/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 19, 2017, 10:50 PM
 * Purpose:  Penny Double
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int salary=1,totPay=0,maxDays;//Salary and Pay in pennies
    
    //Input or initialize values Here
    cout<<"This program calculates the value of doubling "
            "a penny every day over time"<<endl;
    cout<<"How many days would you like to calculate for?"<<endl;
    cin>>maxDays;
    //Validate Input
    while (maxDays>31||maxDays<1){//validating guess range
         cout<<"This is outside the range of valid numbers, "
            "enter a value between 1-31"<<endl;
            cin>>maxDays;
                    }   
    
    //Process/Calculations Here
    for(int day=1;day<=maxDays;day++,salary*=2){
        int cents=salary%100;//last 2 digits for pennies
        int dollars=(salary-cents)/100;//2 digits less for dollars
        totPay+=salary;
        cout<<"Salary for day "<<day<<" = $"<<dollars<<"."
                <<(cents<10?'0':'\0')<<cents<<endl;
        cents=totPay%100;
        dollars=(totPay-cents)/100;
        cout<<"     Total Pay for day "<<day<<" = $"<<dollars<<"."
                <<(cents<10?'0':'\0')<<cents<<endl;
        
    
    }
    //predicting results
        double sallDay=(pow(2,maxDays-1))/100;
        double totlDay=(pow(2,maxDays)-1)/100;
        cout<<fixed<<setprecision(2)<<endl;
        cout<<"Final Salary predicted = $"<<sallDay<<endl;
        cout<<"Final Total Pay predicted = $"<<totlDay<<endl;
 

    //Exit
    return 0;
}

