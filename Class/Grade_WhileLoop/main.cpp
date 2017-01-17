/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 17, 2017, 11:05 AM
 * Purpose:  Grades with While Loop
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

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    
    char numStd=20,student=0;
    
    //Input or initialize values Here
    cout<<"This program assigns the score and outputs the grade for "
            <<numStd<<" students"<<endl;
    while (++student<=numStd){
        //assign a grade
        unsigned short score=rand()%50+50;
    
        //Process/Calculations Here
        char grade=  (score>=90)?'A':
                (score>=80)?'B':
                (score>=70)?'C':
                (score>=60)?'D':'F';
    
        //Output Located Here
        cout<<"Student "<<static_cast<int>(student)
                <<" has score "<<score<<" = "<<grade<<endl; 
        
    };
    //Exit
    return 0;
}

