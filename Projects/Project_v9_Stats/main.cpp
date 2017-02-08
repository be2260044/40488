/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 29, 2017, 5:00 PM
 * Finished January 30, 2017
 * Purpose:  Game Project
 */

//System Libraries Here
#include <iostream>//Input/output library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time used to set seed
#include <fstream> //File stream library
#include <iomanip> //Manipulation Library  
#include <cmath>   //Math Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const short PERCENT=100;//Percentage conversion
const int MILLION=1e6;//Million
const int HUNTHSD=1e5;//one hundred thousand

//Function Prototypes Here
void gamePly(long int &,long int &,int,int &,int &,int &);   //Computer Play Function
void gamePly(long int &,long int &,unsigned short &,
        unsigned short &,unsigned short &);//Player Game Function
char gtChce();                             //Get Choice
bool winTest(char,char,char);
bool lssTest(char,char,char);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    char choice;//Choice of amount of computers
    long potAmnt=500,//Starting amount in pot
            c1Money=0,
            c2Money=0,
            c3Money=0,
            mnyLeft=0;
    unsigned short numGams=0,
                    wins=0,
                    losses=0;
    int c1Wins=0,
            c2Wins=0,
            c3Wins=0,
            c1Lss=0,
            c2Lss=0,
            c3Lss=0,
            c1Gms=0,
            c2Gms=0,
            c3Gms=0;
            
    string plyrNme;
    float winPct,
            lossPct;
    
    //Instantiate and open files
    ifstream in;
    ofstream out;
    in.open("StartingMoney.dat");
    
    
    while(in>>mnyLeft);                     //Read in starting amount for player
    mnyLeft=mnyLeft>MILLION?HUNTHSD:mnyLeft;//Limit Starting amount
    potAmnt=mnyLeft;                        //Set pot = to starting money
    in.close();
    //Input or initialize values Here
    cout<<"Please enter your name."<<endl;//Determine Player name
    getline(cin,plyrNme);
    choice=gtChce();
    
    //Set Computer's starting money to equal Player's money
    switch(choice){
        case '3':{
            c3Money=mnyLeft;           
        }
        case '2':{
            c2Money=mnyLeft;
        }
        case '1':{
            c1Money=mnyLeft;
        }
    }
    //Start game loop
    do{           
        //Start player's game
        gamePly(potAmnt,mnyLeft,wins,losses,numGams);
        //Switch to determine number of computers and to loop each round
        switch(choice){
            case '3':{            //For Computer #3
                gamePly(potAmnt,c3Money,3,c3Wins,c3Lss,c3Gms);
            }
        case '2':{
                gamePly(potAmnt,c2Money,2,c2Wins,c2Lss,c2Gms);
            }
        case '1':{
                gamePly(potAmnt,c1Money,1,c1Wins,c1Lss,c1Gms);
        }
        }
    }while(potAmnt>0&&(mnyLeft>0||c1Money>0||c2Money>0||c3Money>0));
    
    //Calculations
    winPct=wins*1.0f/numGams*PERCENT;
    lossPct=losses*1.0f/numGams*(pow(10,2));
    
    //Output
    out.open("ResultsOfGame.dat");
    out<<setprecision(2)<<fixed<<endl;
    out<<"Game Over! Final Results:"<<endl;
    out<<plyrNme<<":  $"<<mnyLeft<<endl;
    out<<"Computer 1: $"<<c1Money<<endl;
    out<<"Computer 2: $"<<c2Money<<endl;
    out<<"Computer 3: $"<<c3Money<<endl;
    out<<"The House:  $"<<potAmnt<<endl;
    out<<"Your Win Percentage = "<<winPct<<endl;
    out<<"Your Loss Percentage = "<<lossPct<<endl;
    out<<"Player Wins = "<<wins<<endl;
    out<<"Player Losses = "<<losses<<endl;
    out.close();
    out.open("Test.dat");
    out<<"Games:  "<<c1Gms<<"  "<<c2Gms<<"  "<<c3Gms<<endl;
    out<<"Wins :  "<<c1Wins<<"  "<<c2Wins<<"  "<<c3Wins<<endl;
    out<<"Losses: "<<c1Lss<<"  "<<c2Lss<<"  "<<c3Lss<<endl;
    
    cout<<"Game Over! Please check ResultsOfGame.dat for results."<<endl;
    
    

    //Exit
    return 0;
}

bool winTest(char d1,char d2,char d3){//Tests for win or loss
    bool win;
    if((d3>d1&&d3<d2)||(d3<d1&&d3>d2))win=true;
    else win=false;
    return win;
}

bool lssTest(char d1,char d2,char d3){//Test to see if loss is double
    bool dble;//Double the loss?
    if((d3==d1||d3==d2))dble=true;
    else dble=false;
    return dble;
}

char gtChce(){
    char numComp;
    cout<<"How many computers would you like to play with? "
            "(between 1 and 3)"<<endl;
    cin>>numComp;
    
    //Validate choice for # of computers
    while(numComp>'3'||numComp<'0'){
        cout<<"Invalid choice, please choose between 1 and 3"<<endl;
        cin>>numComp;
    }return numComp;
}

void gamePly(long int &potAmnt,long int &cMoney,int cNum,int &w,int &l,int &g){
    for(int game=0;(game<=2)&&(cMoney>0)&&(potAmnt>0);game++){
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
        cout<<"Will the next roll land between these 2 numbers?"<<endl;
        cout<<static_cast<int>(die1)<<"    "<<static_cast<int>(die2)<<endl; 
        cout<<endl;
        while(potAmnt<betAmt3){
            betAmt3-=2;
        }
        cout<<"Computer "<<cNum<<" bets "<<"$"<<betAmt3<<endl;
        cout<<endl;
        cout<<"The next Roll is:"<<static_cast<int>(die3)<<endl;
        cout<<endl;
        if(winTest(die1,die2,die3)){//Win?
            w++;
            cMoney+=betAmt3;      //C1's money increases
            potAmnt-=betAmt3; //Money pot decreases
            cout<<"Computer "<<cNum<<" Won $"<<betAmt3<<endl;}//Lose?
        else if (lssTest(die1,die2,die3)){    //Did the roll land on a limit?
            l++;
            cMoney-=betAmt3*2;    //If true, lose double the bet
            potAmnt+=betAmt3*2;//Money pot increases
            cout<<"Computer "<<cNum<<" Lost $"<<2*betAmt3<<endl;}
        else(l++,
            (cMoney-=betAmt3),     //Regular loss, just lose bet
            (potAmnt+=betAmt3), //Money pot increases
            (cout<<"Computer "<<cNum<<" Lost $"<<betAmt3<<endl));
        cout<<"Computer "<<cNum<<" has $"<<cMoney<<" left."<<endl;
        cout<<"There is $"<<potAmnt<<" left in the pot."<<endl;
        cout<<endl;
        g++;
        (potAmnt<1)?(cout<<"No money left "
                "in the pot!"<<endl)&&(game+=3):' ';
        (cMoney<1)?(cout<<"Computer "<<cNum<<" is out"
                " of money!"<<endl)&&(game+=3):' ';
        }
}

void gamePly(long int &potAmnt,long int &monyLft,unsigned short &wins,
        unsigned short &losses,unsigned short &nGames){
    //First Loop is for the player
    for(int game=0;(game<=2)&&(monyLft>0)&&(potAmnt>0);game++){
        //Call random number generator for the dice
        char die1=rand()%12+1;//Value from 1-12; Sets a Limit
        char die2=rand()%12+1;//Value from 1-12; Sets a Limit
        char die3=rand()%12+1;//Value from 1-12
        char decPlay;//Decision to Play?
        int betAmnt=0;//Betting Amount
        bool test1=(die3>die1&&die3<die2)||
                    (die3<die1&&die3>die2),//Did roll land within limits?
                test2=(die3==die1||die3==die2);//Did roll land on a limit?

        //Validate to not have same limits
        while(die1==die2){
            die2=rand()%12+1;//Reroll second die
        }

        //Show how much money is in player's pocket and in the pot
        cout<<"You have $"<<monyLft<<" left."<<endl;
        cout<<"There is $"<<potAmnt<<" left in the pot."<<endl;

        //Display the 2 limits
        cout<<"Will the next roll land between these 2 numbers?"<<endl;
        cout<<static_cast<int>(die1)<<"    "<<static_cast<int>(die2)<<endl;
        cout<<"Press 1 to Play or 2 to Pass"<<endl;
        cin>>decPlay;
        cout<<endl;
        while(decPlay<'1'||decPlay>'2'){            //Validate play decision
            cout<<"That is not a valid input, please enter 1 to play "
                    "or 2 to pass"<<endl;
            cin>>decPlay;
            cout<<endl;
        }
        if(decPlay=='2');                      //If pass, do nothing
        else if(decPlay=='1'){                 //Execute play
            cout<<"How much would you like to bet?"<<endl;
            cin>>betAmnt;                      //Enter bet
            while(potAmnt<betAmnt){
                cout<<"Not enough funds in the pot, "
                        "please enter an amount that "
                        "is a max of $"<<potAmnt<<endl;
                cin>>betAmnt;
            }
            cout<<endl;
            cout<<"The next Roll is:"<<static_cast<int>(die3)<<endl;
            cout<<endl;
            if(test1){
                monyLft+=betAmnt;//Your money increases
                wins++;
                potAmnt-=betAmnt;//Money pot decreases                           
                cout<<"You Won $"<<betAmnt<<endl;
            }
            else if(test2){
                monyLft-=betAmnt*2;//If true, lose double the bet
                potAmnt+=betAmnt*2;//Money pot increases
                cout<<"You Lost $"<<2*betAmnt<<endl;
                losses++;
            }
            else if(!test2){   
                monyLft-=betAmnt;//Regular loss, just lose bet
                potAmnt+=betAmnt;//Money pot increases
                cout<<"You Lost $"<<betAmnt<<endl;
                losses++;
            }
            else cout<<"Error"<<endl;
            cout<<endl;
            nGames++;                       //Increment Games Played
            }
        if (potAmnt<1){
                cout<<"No money left in the pot!"<<endl;
                game+=3;
            }
            if (monyLft<1){
                cout<<"You are out of money!"<<endl;
                game+=3;
            }

    } 
}