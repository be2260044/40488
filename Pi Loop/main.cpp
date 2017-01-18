/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 16, 2017, 6:30 PM
 * Purpose:  Template
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
    const unsigned int numTerms=10000000;
    double pi=0.0;
    for(int n=0;n<=numTerms;++n){
        pi+= 4*pow(-1,n)/(2*n+1);
        cout<<setprecision(35)<<endl;
        cout<<"n = "<<n<<", pi  = "<<pi<<endl;
    }
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<setprecision(150)<<endl;
    cout<<"Pi = "<<pi<<endl;

    //Exit
    return 0;
}

