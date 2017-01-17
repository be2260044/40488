/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 17, 2017, 11:05 AM
 * Purpose:  Grades with While Loop
 */

//System Libraries Here
#include <iostream>//input/output library
#include <cstdlib>//random number generator seed
#include <ctime>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare and initialize local Variables Here
    char numStd=20,student=0;
    unsigned short average=0;
    //Input or initialize values Here
    cout<<"This program assigns the score and outputs the grade for "
            <<static_cast<int>(numStd)<<" students"<<endl;
    while (++student<=numStd){
        //assign a grade and add to the average
        //score and grade are local to the while group
        unsigned short score=rand()%50+50;
        average+=score;
        //Process/Calculations Here
        char grade=  (score>=90)?'A':
                (score>=80)?'B':
                (score>=70)?'C':
                (score>=60)?'D':'F';
    
        //Output Located Here
        cout<<"Student "<<setw(2)<<static_cast<int>(student)
                <<" has score "<<score<<" = "<<grade<<endl; 
        
    }
    
    //calculate and output the average
    average/=numStd;
    cout<<"The average test score = "<<average<<endl;
    //Exit
    return 0;
}

