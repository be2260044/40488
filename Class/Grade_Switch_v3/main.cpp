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
    float score;
    char grade;
    
    //Input or initialize values Here
    cout<<"This program takes the score and outputs the grade"<<endl;
    cout<<"Input the score 0 to 100"<<endl;
    cin>>score;
    
    //Process/Calculations Here
    switch(score>94.2f){//uses score>92.4f as a boolean instead of just an integer
        
        case true:grade='A';break;
        default: switch(score>86.4f){
            case true:grade='B';break;
            default: switch(score>79.2f){
                case true:grade='C';break;
                default: switch(score>72.5f){
                    case true:grade='D';break;
                    default: grade='F';
                }
            }
        }
        
        
    }
    
    //Output Located Here
    cout<<"Your Score of "<<score<<" = "<<grade<<endl; 

    //Exit
    return 0;
}

