/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on February 06, 2017, 11:05 AM
 * Purpose:  Linear Search
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
int linSrch(int [],int,int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random numb seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    const int SIZE=200;
    const int utilize=SIZE/2;
    int array[utilize]={};
    
    //Input or initialize values Here
    filAray(array,utilize);
    prntAry(array,utilize,10);
    
    //find the element
    int find;
    cout<<"What value to find? type number between 10 and 99"<<endl;
    cin>>find;
    cout<<find<<" was found at "<<linSrch(array,utilize,find)<<endl;
    
    
    //Output Located Here
  
    //Exit
    return 0;
}

int linSrch(int a[],int n,int val){
    for(int i=0;i<n;i++){
        if(a[i]==val)return i;
    }
    return -1;
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