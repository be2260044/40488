/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 18, 2017, 11:00 AM
 * Purpose:  Craps Statistics
*/
//System Libraries Here
#include <iostream> //input output library
#include <cstdlib>  //random numbers
#include <ctime>    //time to set seed
#include <fstream>  //file stream library
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
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //instantiate and open files
    ifstream in;
    ofstream out;
    in.open("NumberofGames.dat");
    out.open("ResultsOfGames.dat");
    
    
    //Declare all Variables Here
    unsigned int nGames=100000;//number of games of craps
    unsigned int wins=0,losses=0,maxThrw=0;
    unsigned int avgThrw=0;
    
    //Input the number of games
    //Last line will be number of games
    
    while(in>>nGames);
    nGames=nGames>MILLION?HUNTHSD:nGames;
    
    //Loop and take Dice Statistics
    for(int game=1;game<=nGames;game++){
        //call random number generator for the dice
        char die1=rand()%6+1;//value from 1-6
        char die2=rand()%6+1;//value from 1-6
        char sum=die1+die2;
        unsigned int cntThrw=1;
        avgThrw++;
        //now determine wins or losses
        if (sum==2||sum==3||sum==12)losses++;
        else if (sum==7||sum==11)wins++;
        else{
            bool kpThrw=true;
            do{
                die1=rand()%6+1;//value from 1-6
                die2=rand()%6+1;//value from 1-6
                avgThrw++;cntThrw++;
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
    
    
    //Output Located Here
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

