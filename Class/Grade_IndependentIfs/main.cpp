/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 12, 2017, 11:32 AM
 * Purpose:  Grades Independent If
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
    if(score>=90)     grade='A';
    if(score>=80&&score<90)grade='B';
    if(score>=70&&score<80)grade='C';
    if(score>=60&&score<70)grade='D';
    if(score<60)           grade='F';
    
    //Output Located Here
    cout<<"Your Score of "<<score<<" = "<<grade<<endl; 

    //Exit
    return 0;
}

