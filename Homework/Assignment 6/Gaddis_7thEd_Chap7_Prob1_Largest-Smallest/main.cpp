/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 16, 2017, 6:30 PM
 * Purpose:  Largest/Smallest Array
 */

//System Libraries Here
#include <iostream>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void filAray(int [],int);
int fndSmll(int [],int);
int fndLrge(int [],int);
void prntAry(int [],int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    const int SIZE=10;
    int array[SIZE]={};//Initialize entire array to 0
    
    //Input or initialize values Here
    filAray(array,SIZE);
    
    //Process/Calculations Here
    
    
    //Output Located Here
    cout<<"The entire Array "<<endl;
    prntAry(array,SIZE);
    cout<<"The smallest value is "<<fndSmll(array,SIZE)<<endl;
    cout<<"The largest value is "<<fndLrge(array,SIZE)<<endl;

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

int fndSmll(int a[],int n){
    int smllst=a[0];
    for (int i=0;i<n;i++){
        if(a[i]<smllst)smllst=a[i];
    }
    return smllst;
}

int fndLrge(int a[],int n){
    int lrgst=a[0];
    for (int i=0;i<n;i++){
        if(a[i]>lrgst)lrgst=a[i];
    }
    return lrgst;
}

void filAray(int a[],int n){
    int num;
    for (int i=0;i<n;i++){
        cout<<"Enter a value for array slot "<<i<<endl;
        cin>>num;
        a[i]=num;
    }
}