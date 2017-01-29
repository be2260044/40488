/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 28, 2017, 10:30 PM
 * Purpose:  Project
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>  //random numbers
#include <ctime>    //time to set seed
#include <fstream>  //file stream library
#include <iomanip>  //format library

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
    int nGames=3;
    float mnyLeft=500;//Money Available to Bet with
    
    //Input or initialize values Here
    
    //Loop and take Dice Statistics
    for(int game=0;game<=2;){
        //Call random number generator for the dice
        char die1=rand()%12+1;//Value from 1-12
        char die2=rand()%12+1;//Value from 1-12
        char die3=rand()%12+1;//Value from 1-12
        short decPlay;//Decision to Play?
        float betAmnt;//Betting Amount
                
       
        //Display the 2 ends
        cout<<static_cast<int>(die1)<<"    "<<static_cast<int>(die2)<<endl;
        cout<<"Would you like to play?"<<endl;
        cin>>decPlay;
        while(decPlay<=0||decPlay>=3){
            cout<<"That is not a valid input, please enter 1 to pass "
                    "or 2 to play"<<endl;
            cin>>decPlay;
        }
        if(decPlay==1);
        else if(decPlay==2){
            cout<<"How much would you like to bet?"<<endl;
            cin>>betAmnt;
            (die3>>die1&&die3<<die2)||(die3<<die1&&die3>>die2)?mnyLeft+=betAmnt:
                mnyLeft-=betAmnt;
            cout<<static_cast<int>(die3)<<endl;
            cout<<mnyLeft<<endl;
            }
        
        
    }
    
    //Output Located Here
 

    //Exit
    return 0;
}
