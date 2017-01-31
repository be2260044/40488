/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 16, 2017, 6:30 PM
 * Purpose:  Template
 */

//System Libraries Here
#include <iostream>
#include <cmath>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float myWay(float,int);
float yourWay(float,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int nTerms;//Number of terms in the series
    float x;//Value in the series
    float myRes;//My result
    float yourRes;//Your Result
    
    //Input or initialize values Here
    cout<<"Calculate a series"<<endl;
    cout<<"Input 2 terms"<<endl;
    cout<<"The value and number of terms"<<endl;
    cin>>x>>nTerms;
    
    //Process/Calculations Here
    myRes=myWay(x,nTerms);
    yourRes=yourWay(x,nTerms);
    
    //Output Located Here
    cout<<"My Res = "<<myRes<<" compared to exact result = "<<sin(x)<<endl;
    cout<<"Your Res = "<<yourRes<<" compared to exact result = "<<sin(x)<<endl;

    //Exit
    return 0;
}

float yourWay(float x,int nTerms){
    //Declare and initialize
    float series=x;
    int sign=1;
    
    //Series for loop
    for(int cnt=2,n=3;cnt<=nTerms;cnt++,n+=2){    
        //Calculate the factorial
        int fact=1;
        for(int i=1;i<=n;i++){
            fact*=i;
        }
        //Calculate the series
        sign*=-1;
        series+=(sign*pow(x,n)/fact);
        
    }
    return series;
}

float myWay(float rad,int nTerms){
    //Declare Variable
    float sin=rad,delta=rad;
    
    //Loop for the series
    for(int cnt=2,fact=3;cnt<=nTerms;cnt++,fact+=2){
        delta*=-rad*rad/(fact*(fact-1));//-x^2/(i*(i-1))
        sin+=delta;   
    }
    return sin;
}