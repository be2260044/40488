/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 16, 2017, 10:00 PM
 * Purpose:  Roman Numeral Converter
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
    int numb;
    string result;
    //Input or initialize values Here
    cout<<"This program will convert a number "
            "between 1-10 to Roman Numerals"<<endl;
    cout<<"Enter a number between 1 and 10"<<endl;
    cin>>numb;
    //Process Calculations Here
    if      (numb==10)result="X";
    else if (numb==9) result="IX";
    else if (numb==8) result="VIII";
    else if (numb==7) result="VII";
    else if (numb==6) result="VI";
    else if (numb==5) result="V";
    else if (numb==4) result="IV";
    else if (numb==3) result="III";
    else if (numb==2) result="II";
    else if (numb==1) result="I";
    else             result="not a valid entry";
                                        
        
    //Output Located Here
    cout<<static_cast<short>(numb)<<" = "<<result<<endl;

    //Exit
    return 0;
}

