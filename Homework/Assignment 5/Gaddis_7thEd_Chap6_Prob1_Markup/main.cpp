/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on February 01, 2017, 8:13 PM
 * Purpose:  Wholesale Markup
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float calcRtl(float,float);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float whlsCst=0,
            pctMrkp=0,
            rtlCst=0;
    
    //Input or initialize values Here
    cout<<"This program converts wholesale price to retail price"<<endl;
    cout<<"What is the retail price (in $'s)? eg: 14.95"<<endl;
    cin>>whlsCst;
    cout<<"What is the markup percent? (in %)"<<endl;
    cin>>pctMrkp;
    
    //Validate inputs
    while(whlsCst<0){
        cout<<"Invalid  wholesale price, "
                "please enter a value greater than 0"<<endl;
        cin>>whlsCst;
    }
    while(pctMrkp<0){
        cout<<"Invalid  markup percent, "
                "please enter a value greater than 0"<<endl;
        cin>>pctMrkp;
    }
    //Process/Calculations Here
    rtlCst=calcRtl(whlsCst,pctMrkp);
    
    //Output Located Here
    cout<<"Markup Percentage:    "<<pctMrkp<<"%"<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"Wholesale Price:  $"<<whlsCst<<endl;
    cout<<"Retail Price:     $"<<rtlCst<<endl;
    
    //Exit
    return 0;
}

float calcRtl(float wc,float pm){
    float rlCst=0;
    pm/=100;
    rlCst=wc*(1+pm);
    return rlCst;
}