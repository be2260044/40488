/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 17, 2017, 12:12 PM
 * Purpose:  menu
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
    //Declare all Variables Here
    char choice;
    
    //Loop on the menu
    do{
            //Input or initialize values Here
            cout<<"Choose from the list"<<endl;
            cout<<"Type 1 for Problem with Do-While"<<endl;
            cout<<"Type 2 for Problem with While"<<endl;
            cout<<"Type 3 for Problem with For"<<endl;
            cin>>choice;

            //Switch to determine the problem
            switch(choice){
        case '1':{
                    //Set random number seed
            srand(static_cast<unsigned int>(time(0)));
            //Declare and initialize local Variables Here
            char numStd=20,student=1;
            unsigned short average=0;
            //Input or initialize values Here
            cout<<"This program assigns the score and outputs the grade for "
                    <<static_cast<int>(numStd)<<" students"<<endl;
            do{
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
        
    }while (++student<=numStd);
            average/=numStd;
            cout<<"The average test score = "<<average<<endl;
                break;
            }
        case '2':{
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
                break;
            }
        case '3':{
                //Set random number seed
            srand(static_cast<unsigned int>(time(0)));
            //Declare and initialize local Variables Here
            char numStd=20;
            unsigned short average=0;
            //Input or initialize values Here
            cout<<"This program assigns the score and outputs the grade for "
                    <<static_cast<int>(numStd)<<" students"<<endl;
            for(char student=1;student<=numStd;student++){
                //assign a grade and add to the average
                //score and grade are local to the while group
                unsigned short score=rand()%50+51;
                average+=score;
                //Process/Calculations Here
                char grade=  (score>=90)?'A':
                        (score>=80)?'B':
                        (score>=70)?'C':
                        (score>=60)?'D':'F';

                //Output Located Here
                cout<<"Student "<<setw(2)<<static_cast<int>(student)
                        <<" has score "<<score<<" = "<<grade<<endl; 

            };

            //calculate and output the average
            average/=numStd;
            cout<<"The average test score = "<<average<<endl;
                break;
            }
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='3');
    
    
    

    //Exit
    return 0;
}

