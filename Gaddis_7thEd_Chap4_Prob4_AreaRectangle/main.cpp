/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 16, 2017, 5:15 PM
 * Purpose:  Areas of Rectangles
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
    float width1,width2,length1,length2,area1,area2;//in inches and inches^2
    string result;
    //Input or initialize values Here
    cout<<"This program determines which rectangle "
            "that you entered has a bigger area"<<endl;
    cout<<"Enter the length & width of the first rectangle (in inches)"<<endl;
    cin>>width1>>length1;
    cout<<"Enter the length & width of the second rectangle (in inches)"<<endl;
    cin>>width2>>length2;
    //Process/Calculations Here
    area1=width1*length1;
    area2=width2*length2;
    if (area1>area2)     result=" is bigger than ";
    else if (area2>area1)result=" is smaller than ";
    else                 result=" is equal to ";
    //Output Located Here
    cout<<"Area of Rectangle 1 = "<<area1<<" inches"<<endl;
    cout<<"Area of Rectangle 2 = "<<area2<<" inches"<<endl;
    cout<<"Rectangle 1"<<result<<"Rectangle 2"<<endl;

    //Exit
    return 0;
}

