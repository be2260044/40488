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
    float ocnHght;//ocean height
    //Input or initialize values Here
    cout<<"This table shows how much the ocean "
                 "will rise over the next 25 years:"<<endl;
    for(int year=1;year<=25;year++){
        ocnHght=year*1.5;//add 1.5 mm for every year
         
        
        cout<<"Year "<<year<<" = "<<ocnHght<<" millimeters"<<endl; 
        
    };
    cout<<"The oceans will rise "<<ocnHght<<
            " millimeters by the end of 25 years from now."<<endl;
    
    
    //Exit
    return 0;
}

