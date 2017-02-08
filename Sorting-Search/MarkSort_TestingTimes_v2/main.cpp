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
void markSrt3(int [],int);
void smalst(int [],int,int);
void swap(int &,int &);
void copy(int [],int [],int);
void bblSort(int [],int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    const int SIZE=100000;
    const int utilize=SIZE/2;
    int array[utilize]={};
    int brray[utilize]={};
    
    //Input or initialize values Here
    filAray(array,utilize);
    copy(array,brray,utilize);
    //prntAry(array,utilize,10);
    //prntAry(brray,utilize,10);
    
    
    //Process/Calculations Here
    unsigned int beg=static_cast<unsigned int>(time(0));
    markSrt(array,utilize);
    unsigned int end=static_cast<unsigned int>(time(0));
    cout<<"Total Time = "<<end-beg<<" Seconds"<<endl;
    
    unsigned int beg2=static_cast<unsigned int>(time(0));
    bblSort(brray,utilize);
    unsigned int end2=static_cast<unsigned int>(time(0));
    cout<<"Total Time = "<<end2-beg2<<" Seconds"<<endl;
    
    cout<<"Time savings is = "<<((1.0f*(end2-beg2)/(end-beg)-1)*100)<<"%"<<endl;
    
    //Output Located Here
    //prntAry(array,utilize,10);
    //prntAry(brray,utilize,10);
    //Exit
    return 0;
}

void copy(int a[],int b[],int n){
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
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
        a[i]=rand();
    }
}

void markSrt3(int a[],int n){
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

void bblSort(int array[],int size){
    bool swap;
    int temp;
    
    do{
        swap=false;
        for(int count=0;count<(size-1);count++){
            if(array[count]>array[count+1]){
                temp=array[count];
                array[count]=array[count+1];
                array[count+1]=temp;
                swap=true;
            }
        }
    }while(swap);
}