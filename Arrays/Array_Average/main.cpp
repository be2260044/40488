/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 16, 2017, 6:30 PM
 * Purpose:  Template
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
float avgAray(int [],int);
void prntAry(int [],int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    const int SIZE=200;
    int utilize=SIZE/2;
    int array[SIZE]={};//Initialize entire array to 0
    
    //Input or initialize values Here
    filAray(array,utilize);
    
    //Process/Calculations Here
    float avg=avgAray(array,utilize);
    
    //Output Located Here
    cout<<"The entire Array "<<endl;
    prntAry(array,SIZE);
    cout<<"The average should be close to "<<(99+10)/2.0f<<endl;
    cout<<"The actual average is "<<avg<<endl;

    //Exit
    return 0;
}

void prntAry(int a[],int n){
    cout<<endl;
    for (int i=0;i<n;i++){
        cout<<(a[i]<=9?' ':'\0')<<a[i]<<" ";
        if(i%10==9)cout<<endl;
    }
    cout<<endl;
}

float avgAray(int a[],int n){
    float sum=0.0f;
    for (int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum/n;
}

void filAray(int a[],int n){
    for (int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}