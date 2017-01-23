/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 23, 2017, 11:30 AM
 * Purpose:  chap5 #23
 */

//System Libraries Here
#include <iostream>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
//output triangle
//declare base
    int base=15;
    for(int nLines=1;nLines<=base;nLines++){
        for(int nCols=1;nCols<=nLines;nCols++){
            cout<<"*";
        }
        cout<<endl;
    }
    //declare base
   
    for(int nLines=1;nLines<=base;nLines++){
        for(int nCols=base-nLines;nCols>=1;nCols--){
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    
    
    //Exit
    return 0;
}

