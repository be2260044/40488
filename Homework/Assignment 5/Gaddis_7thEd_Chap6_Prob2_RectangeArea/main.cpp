/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on February 02, 2017, 1:00 PM
 * Purpose:  Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float gtLngth();
float gtWdth();
float areaCnv(float,float);
void  dspData(float,float,float);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float length,
            width,
            area;
    
    //Input or initialize values Here
    length=gtLngth();
    width=gtWdth();
    area=areaCnv(length,width);
    //Process/Calculations Here
    
    
    //Output Located Here
    dspData(length,width,area);
    //Exit
    return 0;
}

float gtLngth(){
    float length;
    cout<<"Please input the rectangle's length"<<endl;
    cin>>length;
    return length;
}

float gtWdth(){
    float width;
    cout<<"Please input the rectangle's width"<<endl;
    cin>>width;
    return width;
}

float areaCnv(float lngth,float wdth){
    float area;
    area=lngth*wdth;
    return area;
}

void  dspData(float lngth,float wdth,float area){
    cout<<"Length = "<<lngth<<endl;
    cout<<"Width  = "<<wdth<<endl;
    cout<<"Area   = "<<area<<endl;
}