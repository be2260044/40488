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
void swap(int &,int &);
void smalst(int [],int,int);
void markSrt(int [],int);
int binSrch(int [],int,int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set rnd numb seed
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
    
    //find the element
    int find;
    cout<<"What value to find? type number between 10 and 99"<<endl;
    cin>>find;
    cout<<find<<" was found at "<<binSrch(array,utilize,find)<<endl;
    
    //Output Located Here
    prntAry(array,utilize,10);
    //Exit
    return 0;
}

int binSrch(int a[],int n,int val){
    //Declare
    int beg=0,middle,end=n-1;
    //Loop until found
    do{
        middle=(beg+end)/2;
        if(a[middle]==val)return middle;
        if(a[middle]<val){
            beg=middle+1;
        }else{
            end=middle-1;
        }
    }while(beg<=end);
    return -1;
}

void markSrt(int a[],int n){
    for(int i=0;i<n-1;i++){
        smalst(a,n,i);
    }
}

void smalst(int a[],int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i])swap(a[pos],a[i]);
    }
}

void swap(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
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