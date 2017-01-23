/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 23, 2017, 11:00 AM
 * Purpose:  Pi dif ways
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float PI=4*atan(1);//Geometric identity
const int MAXRND=pow(2,31)-1;//Largest random number

//Function Prototypes Here
float piSeres(int);
float piRand(int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int nTerms;
    float piRnd,piSrs;
    float pctErC,pctErS;
    //Input or initialize values Here
    cout<<"Estimate PI"<<endl;
    cout<<"Input the number of terms"<<endl;
    cin>>nTerms;
    
    //Process/Calculations Here
    piSrs=piSeres(nTerms);
    piRnd=piRand(nTerms);
    pctErC=(PI-piRnd)/PI*100;
    pctErS=(PI-piSrs)/PI*100;
    //Output Located Here
    cout<<"Pi from the Math Library ="<<PI<<endl;
    cout<<"Pi approximated using random numbers ="<<piRnd<<endl;
    cout<<"Pi error = "<<pctErC<<"%"<<endl;
    cout<<"Pi approximated using infinite series ="<<piSrs<<endl;
    cout<<"Pi error = "<<pctErS<<"%"<<endl;
    //Exit
    return 0;
}

float piSeres(int nTerms){
    //declare variables
    int sign=-1;
    float pi=1;
    //loop the series
    for(int term=2,div=3;term<=nTerms;term++,div+=2){
        pi+=(sign/static_cast<float>(div));
        sign*=-1;
    }
    return 4*pi;
}


float piRand(int nDarts){
    //Declare variables
    int inCircl=0;
    //Loop and count how many darts fell inside circle
    for(int dart=1;dart<=nDarts;dart++){
        float x=static_cast<float>(rand())/MAXRND;//Random num 0-1  
        float y=static_cast<float>(rand())/MAXRND;//Random num 0-1
        if(x*x+y*y<1)inCircl++;
    }
    //Return to pi estimate
    return 4.0f*inCircl/nDarts;
}