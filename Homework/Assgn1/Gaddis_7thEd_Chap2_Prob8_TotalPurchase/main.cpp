/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 10, 2017, 05:07 PM
 * Purpose:  Total Purchase
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const char PERCENT=100;
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float a=12.95,b=24.95,c=6.95,d=14.95,e=3.95;//a-e corresponds with Items 1-5, respectively
    float subTtl,tax,ttlPrch;//subtotal, taxes, total purchase
    float taxRt=6;
    //Input or initialize values Here
    cout<<"The items being purchased cost as followed: "<<endl;
    cout<<"Item 1   = $"<<a<<endl;
    cout<<"Item 2   = $"<<b<<endl;
    cout<<"Item 3   = $ "<<c<<endl;
    cout<<"Item 4   = $"<<d<<endl;
    cout<<"Item 5   = $ "<<e<<endl;
    //Process/Calculations Here
    subTtl=a+b+c+d+e;
    tax=subTtl*taxRt/PERCENT;
    ttlPrch=subTtl+tax;
    //Output Located Here
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"Subtotal = $"<<subTtl<<endl;
    cout<<"Tax ("<<static_cast<int>(taxRt)<<"%) = $ "<<tax<<endl;
    cout<<"Total    = $"<<ttlPrch<<endl;
    

    //Exit
    return 0;
}

