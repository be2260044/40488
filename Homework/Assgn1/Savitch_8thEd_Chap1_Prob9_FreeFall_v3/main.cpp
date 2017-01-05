/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 05, 2017, 01:15 AM
 * Purpose:  Free Fall
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float GRAVITY=3.2174e1f;//gravity on the earth at sea level in ft/sec^2
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float time,dist;//time in seconds, distance in feet
    int rndOff; //what decimal place to round to
    //Input or initialize values Here
    cout<<"This problem solves the distance traveled"<<endl;
    cout<<"in free-fall under earth gravity"<<endl;
    cout<<"Input the time during free-fall in seconds"<<endl;
    cin>>time;
    cout<<"How man decimal places 0,1,2 or 3 for the answer"<<endl;
    cin>>rndOff;
    //Process/Calculations Here
    dist=GRAVITY*time*time/2;
    int id=dist*pow(10,rndOff)+0.5;//rounding to rndOff decimals
    dist=id/pow(10,rndOff);
    //Output Located Here
    cout<<"The distance fallen = "<<dist<<" ft"<<endl;

    //Exit
    return 0;
}

