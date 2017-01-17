/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 16, 2017, 10:30 PM
 * Purpose:  Software Sales
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
    float qntSld,//quantity sold
            cost1,cost2,cost3,cost4,cost5,result;
 
    //Input or initialize values Here
    cout<<"This program calculates the total cost of "
            "purchase with quantity discounts"<<endl;
    cout<<"Input the number of units sold"<<endl;
    cin>>qntSld;
    //Process/Calculations Here
    cost1=qntSld*99;
    cost2=(qntSld-9)*99*8/10+(9*99);
    cost3=(qntSld-19)*99*7/10+(10*99*8/10)+(9*99);
    cost4=(qntSld-49)*99*6/10+(30*99*7/10)+(10*99*8/10)+(9*99);
    cost5=(qntSld-99)*99/2+(50*99*6/10)+(30*99*7/10)+(10*99*8/10)+(9*99);
    if (qntSld>=100)     result=cost5;
    else if (qntSld>=50) result=cost4;
    else if (qntSld>=20) result=cost3;
    else if (qntSld>=10) result=cost2;
    else                 result=cost1;
    //Output Located Here
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"The cost of "<<qntSld<<" units is $"<<result<<endl;

    //Exit
    return 0;
}

