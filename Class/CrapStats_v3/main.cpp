/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 18, 2017, 11:00 AM
 * Final version on January 25, 2017 11:24 AM
 * Purpose:  Craps Statistics
*/
//System Libraries Here
#include <iostream> //input output library
#include <cstdlib>  //random numbers
#include <ctime>    //time to set seed
#include <fstream>  //file stream library
#include <iomanip>  //format library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const short PERCENT=100;//Percentage conversion
const int MILLION=1e6;//Million
const int HUNTHSD=1e5;//one hundred thousand
//Function Prototypes Here

//Main --> Program Execution Begins Here
int main(int argc, char** argv) {
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //instantiate and open files
    ifstream in;
    ofstream out;
    in.open("NumberofGames.dat");
    out.open("ResultsOfGames.dat");
    
    
    //Declare and initialize all Variables Here
    unsigned int nGames=100000;//number of games of craps
    unsigned int wins=0,losses=0,maxThrw=0;//counters/indicators
    unsigned int avgThrw=0;//average throw per game
    
    //Input the number of games
    //Last line will be number of games from file
    
    while(in>>nGames);//loop to end
    nGames=nGames>MILLION?HUNTHSD:nGames;//limit nGames
    
    //Loop and take Dice Statistics
    for(int game=1;game<=nGames;game++){
        //call random number generator for the dice
        char die1=rand()%6+1;//value from 1-6
        char die2=rand()%6+1;//value from 1-6
        char sum=die1+die2;//sum the dice
        unsigned int cntThrw=1;//initialize the throw count
        avgThrw++;//increment the average throw counter
        //now determine wins or losses
        if (sum==2||sum==3||sum==12)losses++;//2,3,12 is a loss
        else if (sum==7||sum==11)wins++;//7,11 is a win
        else{//any other throw requires repetition
            bool kpThrw=true;//initialize the boolean for repeating
            do{
                die1=rand()%6+1;//value from 1-6
                die2=rand()%6+1;//value from 1-6
                avgThrw++;cntThrw++;//increments counts
                char sumAgn=die1+die2;
                if(sumAgn==7){
                    losses++;
                    kpThrw=false;
                }else if(sumAgn==sum){
                    wins++;
                    kpThrw=false;
                }
                
            }while(kpThrw);
        }
            
        if(maxThrw<cntThrw)maxThrw=cntThrw;  
        
    }
    
    
    //Output all to a file
    out<<fixed<<setprecision(2)<<showpoint<<endl;
    out<<"The total number of Crap games played = "<<nGames<<endl;
    out<<"The total wins = "<<wins<<endl;
    out<<"The total losses = "<<losses<<endl;
    out<<"The total number of Crap games played = "<<wins+losses<<endl;
    out<<"Percentage wins = "<<static_cast<float>(PERCENT)*wins/nGames<<"%"<<endl;
    out<<"Percentage losses = "<<static_cast<float>(PERCENT)*losses/nGames<<"%"<<endl;
    out<<"Average number of throws per game = "
            <<static_cast<float>(avgThrw)/nGames<<endl;
    out<<"Maximum number of throws in a game = "<<maxThrw<<endl;
    
    //Exit
    in.close();
    out.close();
    return 0;
}

