/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 18, 2017, 11:00 AM
 * Purpose:  Craps Statistics
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
    unsigned int nGames=1000000000;//number of games of craps
    unsigned int wins=0,losses=0,maxThrw=0;
    unsigned int avgThrw=0;
    
    //Input or initialize values Here
    
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
    cout<<"The total number of Crap games played = "<<nGames<<endl;
    cout<<"The total wins = "<<wins<<endl;
    cout<<"The total losses = "<<losses<<endl;
    cout<<"The total number of Crap games played = "<<wins+losses<<endl;
    cout<<"Percentage wins = "<<100.0f*wins/nGames<<"%"<<endl;
    cout<<"Percentage losses = "<<100.0f*losses/nGames<<"%"<<endl;
    cout<<"Average number of throws per game = "
            <<static_cast<float>(avgThrw)/nGames<<endl;
    cout<<"Maximum number of throws in a game = "<<maxThrw<<endl;
    
    //Exit
    return 0;
}

