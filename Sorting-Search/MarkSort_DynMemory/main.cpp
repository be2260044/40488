/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on February 08, 2017, 10:36 AM
 * Purpose:  Mark Sort with Dyn memory allocation
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here
#include "MYARRAY.h"

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void filAray(Array &);
void prntAry(Array &,int);
void markSrt(Array &);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    const int SIZE=1000000;
    const int utilize=100000;
    Array array;
    array.SIZE=utilize;
    array.data=new int[SIZE];

    
    //Input or initialize values Here
    filAray(array);
    prntAry(array,10);
    
    //Process/Calculations Here
    markSrt(array);
    
    //Output Located Here
    prntAry(array,10);
    //Exit
    delete []array.data;
    return 0;
}

void markSrt(Array &a){
    for(int i=0;i<a.SIZE-1;i++){
        for(int j=i+1;j<a.SIZE;j++){
            if(a.data[i]>a.data[j]){
                a.data[i]=a.data[i]^a.data[j];
                a.data[j]=a.data[i]^a.data[j];
                a.data[i]=a.data[i]^a.data[j];
            }
        }
    }
}

void prntAry(Array &a,int perLine){
    cout<<endl;
    for(int i=0;i<a.SIZE;i++){
        cout<<a.data[i]<<" ";
        if(i%perLine==perLine-1)cout<<endl;
    }
}

void filAray(Array &a){
    for(int i=0;i<a.SIZE;i++){
        a.data[i]=rand()%90+10;
    }
}