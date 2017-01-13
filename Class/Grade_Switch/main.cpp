/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 12, 2017, 11:36 AM
 * Purpose:  Grades Switch - Case
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
    //Declare all Variables Here
    unsigned short score;
    char grade;
    
    //Input or initialize values Here
    cout<<"This program takes the score and outputs the grade"<<endl;
    cout<<"Input the score 0 to 100"<<endl;
    cin>>score;
    
    //Process/Calculations Here
    switch(score/10){
        case 11:grade='A';break;
        case 10:grade='A';break;
        case  9:grade='A';break;
        case  8:grade='B';break;
        case  7:grade='C';break;
        case  6:grade='D';break;
        default:grade='F';
        
        
    }
    
    //Output Located Here
    cout<<"Your Score of "<<score<<" = "<<grade<<endl; 

    //Exit
    return 0;
}

