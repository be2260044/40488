/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 29, 2017, 5:00 PM
 * Purpose:  menu
 */

//System Libraries Here
#include <iostream>//Input/output library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time used to set seed
#include <fstream> //File stream library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const short PERCENT=100;//Percentage conversion
const int MILLION=1e6;//Million
const int HUNTHSD=1e5;//one hundred thousand

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    char choice;
    int potAmnt=500,
            c1Money=500,
            c2Money=500,
            c3Money=500,
            mnyLeft=500;
    
    //instantiate and open files
    ifstream in;
    ofstream out;
    in.open("StartingMoney.dat");
    out.open("ResultsOfGame.dat");
    
    while(in>>mnyLeft);                     //Read in starting amount for player
    mnyLeft=mnyLeft>MILLION?HUNTHSD:mnyLeft;//Limit Starting amount
    
    //Input or initialize values Here
    cout<<"How many computers would you like to play with? "
            "(between 1 and 3)"<<endl;
    cin>>choice;
    while(choice>'3'||choice<'1'){
        cout<<"Invalid choice, please choose between 1 and 3"<<endl;
        cin>>choice;
    }
    
    //Start game loop
    do{        
        //First Loop is for the player
        for(int game=0;(game<=2)&&(mnyLeft>0)&&(potAmnt>0);game++){
            //Call random number generator for the dice
            char die1=rand()%12+1;//Value from 1-12; Sets a Limit
            char die2=rand()%12+1;//Value from 1-12; Sets a Limit
            char die3=rand()%12+1;//Value from 1-12
            short decPlay;//Decision to Play?
            int betAmnt=0;//Betting Amount

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
                cout<<"The next Roll is:"<<static_cast<int>(die3)<<endl;
                cout<<endl;
                (die3>die1&&die3<die2)||(die3<die1&&die3>die2)?//Win or Lose?
                        (mnyLeft+=betAmnt)&&//Your money increases
                            (potAmnt-=betAmnt)&&//Money pot decreases                           
                            (cout<<"You Won $"<<betAmnt<<endl):
                    (die3==die1||die3==die2)?//Did the roll land on a limit?
                        (mnyLeft-=betAmnt*2)&&//If true, lose double the bet
                            (potAmnt+=betAmnt*2)&&//Money pot increases
                            (cout<<"You Lost $"<<2*betAmnt<<endl):
                        (mnyLeft-=betAmnt)&&//Regular loss, just lose bet
                            (potAmnt+=betAmnt)&&//Money pot increases
                            (cout<<"You Lost $"<<betAmnt<<endl);
                cout<<"You have $"<<mnyLeft<<" left."<<endl;
                cout<<"There is $"<<potAmnt<<" left in the pot."<<endl;
                cout<<endl;
                (potAmnt<1)?(cout<<"Game Over"<<endl)&&(game+=3):' ';
                (mnyLeft<1)?(cout<<"Game Over"<<endl)&&(game+=3):'!';
                }
        }   
        //Switch to determine number of computers and to loop each round
        switch(choice){
            case '3':{            //For Computer #3
                for(int game=0;(game<=2)&&(c3Money>0)&&(potAmnt>0);game++){
                                     //Call random number generator for the dice
            char die1=rand()%12+1;   //Value from 1-12; Sets a Limit
            char die2=rand()%12+1;   //Value from 1-12; Sets a Limit
            char die3=rand()%12+1;   //Value from 1-12
            int betAmt3=rand()%100+1;//Betting Amount from 1-100

            //Validate to not have same limits
            while(die1==die2){
                die2=rand()%12+1;//Reroll second die
            }

            //Display the 2 limits
            cout<<static_cast<int>(die1)<<"    "<<static_cast<int>(die2)<<endl; 
            cout<<endl;
            
                cout<<"How much would you like to bet?"<<endl;
                cout<<"$"<<betAmt3<<endl;
                while(potAmnt<betAmt3){
                    cout<<"Not enough funds in the pot, "
                            "please enter an amount that "
                            "is a max of $"<<potAmnt<<endl;
                    cout<<"$"<<betAmt3<<endl;
                }
                cout<<endl;
                cout<<"The next Roll is:"<<static_cast<int>(die3)<<endl;
                cout<<endl;
                (die3>die1&&die3<die2)||(die3<die1&&die3>die2)?//Win?
                        (c3Money+=betAmt3)&&      //C1's money increases
                            (potAmnt-=betAmt3)&&  //Money pot decreases
                            (cout<<"Computer 3 Won $"<<betAmt3<<endl)://Lose?
                    (die3==die1||die3==die2)?    //Did the roll land on a limit?
                        (c3Money-=betAmt3*2)&&    //If true, lose double the bet
                            (potAmnt+=betAmt3*2)&&//Money pot increases
                            (cout<<"Computer 3 Lost $"<<2*betAmt3<<endl):
                        (c3Money-=betAmt3)&&     //Regular loss, just lose bet
                            (potAmnt+=betAmt3)&& //Money pot increases
                            (cout<<"Computer 3 Lost $"<<betAmt3<<endl);
                cout<<"Computer 3 has $"<<c3Money<<" left."<<endl;
                cout<<"There is $"<<potAmnt<<" left in the pot."<<endl;
                cout<<endl;
                (potAmnt<1)?(cout<<"Game Over"<<endl)&&(game+=3):' ';
                (c3Money<1)?(cout<<"Game Over"<<endl)&&(game+=3):'!';
                }
            }
            
        case '2':{
                for(int game=0;(game<=2)&&(c2Money>0)&&(potAmnt>0);game++){
            //Call random number generator for the dice
            char die1=rand()%12+1;//Value from 1-12; Sets a Limit
            char die2=rand()%12+1;//Value from 1-12; Sets a Limit
            char die3=rand()%12+1;//Value from 1-12
            int betAmt2=rand()%100+1;//Betting Amount from 1-100

            //Validate to not have same limits
            while(die1==die2){
                die2=rand()%12+1;//Reroll second die
            }

            //Display the 2 ends
            cout<<static_cast<int>(die1)<<"    "<<static_cast<int>(die2)<<endl; 
            cout<<endl;
            
                cout<<"How much would you like to bet?"<<endl;
                cout<<"$"<<betAmt2<<endl;
                while(potAmnt<betAmt2){
                    cout<<"Not enough funds in the pot, "
                            "please enter an amount that "
                            "is a max of $"<<potAmnt<<endl;
                    cout<<"$"<<betAmt2<<endl;
                }
                cout<<endl;
                cout<<"The next Roll is:"<<static_cast<int>(die3)<<endl;
                cout<<endl;
                (die3>die1&&die3<die2)||(die3<die1&&die3>die2)?//Win?
                        (c2Money+=betAmt2)&&    //C2's money increases
                            (potAmnt-=betAmt2)&&//Money pot decreases
                            (cout<<"Computer 2 Won $"<<betAmt2<<endl):
                    (die3==die1||die3==die2)?//Did the roll land on a limit?
                        (c2Money-=betAmt2*2)&&//If true, lose double the bet
                            (potAmnt+=betAmt2*2)&&//Money pot increases
                            (cout<<"Computer 2 Lost $"<<2*betAmt2<<endl):
                        (c2Money-=betAmt2)&&//Regular loss, just lose bet
                            (potAmnt+=betAmt2)&&//Money pot increases
                            (cout<<"Computer 2 Lost $"<<betAmt2<<endl);
                cout<<"Computer 2 has $"<<c2Money<<" left."<<endl;
                cout<<"There is $"<<potAmnt<<" left in the pot."<<endl;
                cout<<endl;
                (potAmnt<1)?(cout<<"Game Over"<<endl)&&(game+=3):' ';
                (c2Money<1)?(cout<<"Game Over"<<endl)&&(game+=3):'!';
                }
            }
        case '1':{
            for(int game=0;(game<=2)&&(c1Money>0)&&(potAmnt>0);game++){
            //Call random number generator for the dice
            char die1=rand()%12+1;//Value from 1-12; Sets a Limit
            char die2=rand()%12+1;//Value from 1-12; Sets a Limit
            char die3=rand()%12+1;//Value from 1-12
            int betAmt1=rand()%100+1;//Betting Amount from 1-100

            //Validate to not have same limits
            while(die1==die2){
                die2=rand()%12+1;//Reroll second die
            }

            //Display the 2 ends
            cout<<static_cast<int>(die1)<<"    "<<static_cast<int>(die2)<<endl; 
            cout<<endl;
            
                cout<<"How much would you like to bet?"<<endl;
                cout<<"$"<<betAmt1<<endl;
                while(potAmnt<betAmt1){
                    cout<<"Not enough funds in the pot, "
                            "please enter an amount that "
                            "is a max of $"<<potAmnt<<endl;
                    cout<<"$"<<betAmt1<<endl;
                }
                cout<<endl;
                cout<<"The next Roll is:"<<static_cast<int>(die3)<<endl;
                cout<<endl;
                (die3>die1&&die3<die2)||(die3<die1&&die3>die2)?//Win?
                        (c1Money+=betAmt1)&&      //C3's money increases
                            (potAmnt-=betAmt1)&&  //Money pot decreases
                            (cout<<"Computer 1 Won $"<<betAmt1<<endl):
                    (die3==die1||die3==die2)?    //Did the roll land on a limit?
                        (c1Money-=betAmt1*2)&&   //If true, lose double the bet
                            (potAmnt+=betAmt1*2)&&//Money pot increases
                            (cout<<"Computer 1 Lost $"<<2*betAmt1<<endl):
                        (c1Money-=betAmt1)&&     //Regular loss, just lose bet
                            (potAmnt+=betAmt1)&& //Money pot increases
                            (cout<<"Computer 1 Lost $"<<betAmt1<<endl);
                cout<<"Computer 1 has $"<<c1Money<<" left."<<endl;
                cout<<"There is $"<<potAmnt<<" left in the pot."<<endl;
                cout<<endl;
                (potAmnt<1)?(cout<<"Game Over"<<endl)&&(game+=3):' ';
                (c1Money<1)?(cout<<"Game Over"<<endl)&&(game+=3):'!';
                }
            }
        }
    }while(potAmnt>0&&(mnyLeft>0||c1Money>0||c2Money>0||c3Money>0));
    out<<"Game Over! Final Results:"<<endl;
    out<<"Player:     $"<<mnyLeft<<endl;
    out<<"Computer 1: $"<<c1Money<<endl;
    out<<"Computer 2: $"<<c2Money<<endl;
    out<<"Computer 3: $"<<c3Money<<endl;
    out<<"The House:  $"<<potAmnt<<endl;
    
    
    

    //Exit
    return 0;
}

