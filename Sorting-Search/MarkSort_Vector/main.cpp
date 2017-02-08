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
#include <vector>
using namespace std;

//User Libraries Here


//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void filAray(vector<int> &);
void prntAry(vector<int> &,int);
void markSrt(vector<int> &);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    const int SIZE=100000;
    const int utilize=100000;
    vector<int> array(utilize);
    

    
    //Input or initialize values Here
    filAray(array);
    prntAry(array,10);
    
    //Process/Calculations Here
    markSrt(array);
    
    //Output Located Here
    prntAry(array,10);
    //Exit
    
    return 0;
}

void markSrt(vector<int> &a){
    for(int i=0;i<a.size()-1;i++){
        for(int j=i+1;j<a.size();j++){
            if(a[i]>a[j]){
                a[i]=a[i]^a[j];
                a[j]=a[i]^a[j];
                a[i]=a[i]^a[j];
            }
        }
    }
}

void prntAry(vector<int> &a,int perLine){
    cout<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
        if(i%perLine==perLine-1)cout<<endl;
    }
}

void filAray(vector<int> &a){
    for(int i=0;i<a.size();i++){
        a[i]=rand()%90+10;
    }
}