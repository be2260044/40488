/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on February 06, 2017, 10:40 AM
 * Purpose:  Mark Sort with 3 functions
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void filAray(int [],int);
void prntAry(int [],int,int);
void markSrt(int [],int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    const int SIZE=200;
    const int utilize=SIZE/2;
    int array[utilize]={};
    
    //Input or initialize values Here
    filAray(array,utilize);
    prntAry(array,utilize,10);
    
    //Process/Calculations Here
    markSrt(array,utilize);
    
    //Output Located Here
    prntAry(array,utilize,10);
    //Exit
    return 0;
}

void markSrt(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                a[i]=a[i]^a[j];
                a[j]=a[i]^a[j];
                a[i]=a[i]^a[j];
            }
        }
    }
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==perLine-1)cout<<endl;
    }
}

void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}