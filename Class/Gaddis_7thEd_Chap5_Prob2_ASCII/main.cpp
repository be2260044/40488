/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 17, 2017, 11:05 AM
 * Purpose:  Grades with For Loop
 */

//System Libraries Here
#include <iostream>//input/output library
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare and initialize local Variables Here
    
    //Input or initialize values Here
    
    for(int z=1;z<=127;z++){
        if(z%16==0)
            cout<<endl;
        
        cout<<static_cast<char>(z)<<"  "; 
        
    };
    
    //calculate and output the average
    
    //Exit
    return 0;
}

