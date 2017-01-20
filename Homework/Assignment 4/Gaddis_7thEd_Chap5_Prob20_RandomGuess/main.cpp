/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 18, 2017, 10:30 AM
 * Purpose:  Statistics for Throwing 2 Dice
*/
//System Libraries Here
#include <iostream>
#include <cstdlib>//random numbers
#include <ctime>//time to set seed
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    const short rndNumb=rand()%25+1;//sets random number 1-25
    short      guess;//guess
   
    
    //Input or initialize values Here
    cout<<"This is a number guessing game!"<<endl;
    cout<<"This game randomly picks a number between 1 and 25"<<endl;
    //Loop    
    do{ 
        
        cout<<"Please enter your guess:"<<endl;
        cin>>guess;
            while (guess>25||guess<1){//validating guess range
                cout<<"This is outside the range of the game, "
                    "enter a value between 1-25"<<endl;
                cin>>guess;
            }    
            while (guess<rndNumb){
                cout<<"Too Low, Try Again"<<endl;
                cin>>guess;
               
            }
            while (guess>rndNumb){
            cout<<"Too High, Try Again"<<endl;
            cin>>guess;
            
            }
        
        }
    while(guess!=rndNumb);
    cout<<"You Win!!"<<endl;
    
    //Output Located Here
    
    //Exit
    return 0;
}

