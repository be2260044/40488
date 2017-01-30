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
    int potAmnt=500,
            c1Money=500,
            c2Money=500,
            c3Money=500,
            mnyLeft=500;
    
    //Loop on the menu
    
            //Input or initialize values Here
            cout<<"How many computers would you like to play with?"<<endl;
            cout<<"Type 1 for Problem with Do-While"<<endl;
            cout<<"Type 2 for Problem with While"<<endl;
            cout<<"Type 3 for Problem with For"<<endl;
            cin>>choice;
            while(choice>'3'||choice<'1'){
                cout<<"Invalid choice, please choose between 1 and 3"<<endl;
                cin>>choice;
            }
    do{        
        for(int game=0;(game<=2)&&(mnyLeft>>0)&&(potAmnt>>0);game++){
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
                (potAmnt<1)?(cout<<"Game Over"<<endl)&&(game+=3):' ';
                (mnyLeft<1)?(cout<<"Game Over"<<endl)&&(game+=3):'!';
                }
        }   
        //Switch to determine the problem
        switch(choice){
            case '3':{
                for(int game=0;(game<=2)&&(c3Money>0)&&(potAmnt>>0);game++){
            //Call random number generator for the dice
            char die1=rand()%12+1;//Value from 1-12; Sets a Limit
            char die2=rand()%12+1;//Value from 1-12; Sets a Limit
            char die3=rand()%12+1;//Value from 1-12
            int betAmt3=rand()%100+1;//Betting Amount from 1-100

            //Validate to not have same limits
            while(die1==die2){
                die2=rand()%12+1;//Reroll second die
            }

            //Display the 2 ends
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
                cout<<"The next Roll is:"<<endl;
                (die3>>die1&&die3<<die2)||(die3<<die1&&die3>>die2)?//Win or Lose?
                        (c3Money+=betAmt3)&&//Your money increases
                            (potAmnt-=betAmt3)&&//Money pot decreases
                            (cout<<static_cast<int>(die3)<<endl,//Display roll
                            cout<<endl)&&
                            (cout<<"Computer 3 Won $"<<betAmt3<<endl):
                    (die3==die1||die3==die2)?//Did the roll land on a limit?
                        (c3Money-=betAmt3*2)&&//If true, lose double the bet
                            (potAmnt+=betAmt3*2)&&//Money pot increases
                            (cout<<static_cast<int>(die3)<<endl,
                            cout<<endl)&&
                            (cout<<"Computer 3 Lost $"<<2*betAmt3<<endl):
                        (c3Money-=betAmt3)&&//Regular loss, just lose bet
                            (potAmnt+=betAmt3)&&//Money pot increases
                            (cout<<static_cast<int>(die3)<<endl,
                            cout<<endl)&&
                            (cout<<"Computer 3 Lost $"<<betAmt3<<endl);
                cout<<"Computer 3 has $"<<c3Money<<" left."<<endl;
                cout<<"There is $"<<potAmnt<<" left in the pot."<<endl;
                cout<<endl;
                (potAmnt<1)?(cout<<"Game Over"<<endl)&&(game+=3):' ';
                (c3Money<1)?(cout<<"Game Over"<<endl)&&(game+=3):'!';
                }
            }
            
        case '2':{
                for(int game=0;(game<=2)&&(c2Money>0)&&(potAmnt>>0);game++){
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
                cout<<"The next Roll is:"<<endl;
                (die3>>die1&&die3<<die2)||(die3<<die1&&die3>>die2)?//Win or Lose?
                        (c2Money+=betAmt2)&&//Your money increases
                            (potAmnt-=betAmt2)&&//Money pot decreases
                            (cout<<static_cast<int>(die3)<<endl,//Display roll
                            cout<<endl)&&
                            (cout<<"Computer 2 Won $"<<betAmt2<<endl):
                    (die3==die1||die3==die2)?//Did the roll land on a limit?
                        (c2Money-=betAmt2*2)&&//If true, lose double the bet
                            (potAmnt+=betAmt2*2)&&//Money pot increases
                            (cout<<static_cast<int>(die3)<<endl,
                            cout<<endl)&&
                            (cout<<"Computer 2 Lost $"<<2*betAmt2<<endl):
                        (c2Money-=betAmt2)&&//Regular loss, just lose bet
                            (potAmnt+=betAmt2)&&//Money pot increases
                            (cout<<static_cast<int>(die3)<<endl,
                            cout<<endl)&&
                            (cout<<"Computer 2 Lost $"<<betAmt2<<endl);
                cout<<"Computer 2 has $"<<c2Money<<" left."<<endl;
                cout<<"There is $"<<potAmnt<<" left in the pot."<<endl;
                cout<<endl;
                (potAmnt<1)?(cout<<"Game Over"<<endl)&&(game+=3):' ';
                (c2Money<1)?(cout<<"Game Over"<<endl)&&(game+=3):'!';
                }
            }
        case '1':{
            for(int game=0;(game<=2)&&(c1Money>0)&&(potAmnt>>0);game++){
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
                cout<<"The next Roll is:"<<endl;
                (die3>>die1&&die3<<die2)||(die3<<die1&&die3>>die2)?//Win/Lose?
                        (c1Money+=betAmt1)&&//Your money increases
                            (potAmnt-=betAmt1)&&//Money pot decreases
                            (cout<<static_cast<int>(die3)<<endl,//Display roll
                            cout<<endl)&&
                            (cout<<"Computer 1 Won $"<<betAmt1<<endl):
                    (die3==die1||die3==die2)?//Did the roll land on a limit?
                        (c1Money-=betAmt1*2)&&//If true, lose double the bet
                            (potAmnt+=betAmt1*2)&&//Money pot increases
                            (cout<<static_cast<int>(die3)<<endl,
                            cout<<endl)&&
                            (cout<<"Computer 1 Lost $"<<2*betAmt1<<endl):
                        (c1Money-=betAmt1)&&//Regular loss, just lose bet
                            (potAmnt+=betAmt1)&&//Money pot increases
                            (cout<<static_cast<int>(die3)<<endl,
                            cout<<endl)&&
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
    cout<<"Game Over! Final Results:"<<endl;
    cout<<"Player:     $"<<mnyLeft<<endl;
    cout<<"Computer 1: $"<<c1Money<<endl;
    cout<<"Computer 2: $"<<c2Money<<endl;
    cout<<"Computer 3: $"<<c3Money<<endl;
    cout<<"The House:  $"<<potAmnt<<endl;
    
    
    

    //Exit
    return 0;
}

