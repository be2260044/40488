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
    for(int potAmnt=500;potAmnt>>1;){
        for(int game=0;game<=2;game++){
            //Call random number generator for the dice
            char die1=rand()%12+1;//Value from 1-12; Sets a Limit
            char die2=rand()%12+1;//Value from 1-12; Sets a Limit
            char die3=rand()%12+1;//Value from 1-12
            short decPlay;//Decision to Play?
            float betAmnt=0;//Betting Amount

            //Validate to not have same limits
            while(die1==die2){
                die2=rand()%12+1;//Reroll second die
            }

            //Display the 2 ends
            cout<<static_cast<int>(die1)<<"    "<<static_cast<int>(die2)<<endl;
            cout<<"Press 1 to Play or 2 to Pass"<<endl;
            cin>>decPlay;
            cout<<endl;
            while(decPlay<=0||decPlay>=3){
                cout<<"That is not a valid input, please enter 1 to pass "
                        "or 2 to play"<<endl;
                cin>>decPlay;
                cout<<endl;
            }
            if(decPlay==2);
            else if(decPlay==1){
                cout<<"How much would you like to bet?"<<endl;
                cin>>betAmnt;
                while(potAmnt<betAmnt){
                    cout<<"Not enough funds in the pot, "
                            "please enter an amount that "
                            "is a max of $"<<potAmnt<<endl;
                    cin>>betAmnt;
                }
                cout<<endl;
                cout<<"The next Roll is:"<<endl;
                (die3>>die1&&die3<<die2)||(die3<<die1&&die3>>die2)?//Win or Lose?
                        (mnyLeft+=betAmnt)&&//Your money increases
                            (potAmnt-=betAmnt)&&//Money pot decreases
                            (cout<<static_cast<int>(die3)<<endl,//Display roll
                            cout<<endl)&&
                            (cout<<"You Won $"<<betAmnt<<endl):
                    (die3==die1||die3==die2)?//Did the roll land on a limit?
                        (mnyLeft-=betAmnt*2)&&//If true, lose double the bet
                            (potAmnt+=betAmnt*2)&&//Money pot increases
                            (cout<<static_cast<int>(die3)<<endl,
                            cout<<endl)&&
                            (cout<<"You Lost $"<<2*betAmnt<<endl):
                        (mnyLeft-=betAmnt)&&//Regular loss, just lose bet
                            (potAmnt+=betAmnt)&&//Money pot increases
                            (cout<<static_cast<int>(die3)<<endl,
                            cout<<endl)&&
                            (cout<<"You Lost $"<<betAmnt<<endl);
                cout<<"You have $"<<mnyLeft<<" left."<<endl;
                cout<<"There is $"<<potAmnt<<" left in the pot."<<endl;
                cout<<endl;
                }
        }
        cout<<"Next Round"<<endl;
    }
    
    //Output Located Here
 

    //Exit
    return 0;
}
