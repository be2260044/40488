/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 24, 2017, 12:30 PM
 * Purpose:  Biased Coin 2 at a time
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const unsigned int MAXRND=pow(2,31)-1;

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    float pTails,pHeads;       //probability of heads and tails
    unsigned int nTT=0,nTH=0,nHT=0,nHH=0,nCoins;//number of times each is shown
    
    //Input or initialize values Here
    cout<<"Coin Flipping Problem"<<endl;
    cout<<"Input the probability of Tails (in decimal, 0 to 1"<<endl;
    cin>>pTails;
    cout<<"Input the number of coin flips"<<endl;
    cin>>nCoins;
    
    //Process/Calculations Here
    pHeads=1-pTails;
    for(int flip=1;flip<=nCoins;flip++){
        float prob1=rand()/static_cast<float>(MAXRND);
        float prob2=rand()/static_cast<float>(MAXRND);
        if(prob1<=pTails&&prob2<=pTails)nTT++;
        else if(prob1<=pTails&&prob2>pTails)nTH++;
        else if(prob1>pTails&&prob2>pTails)nHH++;
        else nHT++;
    }
    //Output Located Here
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"Percentage input for Prob of Tails = "<<pTails*100<<"%"<<endl;
    cout<<"Percentage input for Prob of Heads = "<<pHeads*100<<"%"<<endl;
    cout<<"Percentage output for Prob of 2 Tails = "
            <<static_cast<float>(nTT)/nCoins*100<<"%"<<endl;
    cout<<"Percentage output for Prob of 2 Heads= "
            <<static_cast<float>(nHH)/nCoins*100<<"%"<<endl;
    cout<<"Percentage output for Prob of 1 Tails, 1 Heads = "
            <<static_cast<float>(nTH)/nCoins*100<<"%"<<endl;
    cout<<"Percentage output for Prob of 1 Heads, 1 Tails = "
            <<static_cast<float>(nHT)/nCoins*100<<"%"<<endl;
 

    //Exit
    return 0;
}

