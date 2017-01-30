/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 24, 2017, 12:30 PM
 * Purpose:  Biased Coin
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
    unsigned int nTails=0,nHeads=0,nCoins;//number of times each were flipped
    
    //Input or initialize values Here
    cout<<"Coin Flipping Problem"<<endl;
    cout<<"Input the probability of Tails (in decimal, 0 to 1"<<endl;
    cin>>pTails;
    cout<<"Input the number of coin flips"<<endl;
    cin>>nCoins;
    
    //Process/Calculations Here
    pHeads=1-pTails;
    for(int flip=1;flip<=nCoins;flip++){
        float prob=rand()/static_cast<float>(MAXRND);
        if(prob<pTails)nTails++;
        else nHeads++;
    }
    //Output Located Here
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Percentage input for Prob of Tails = "<<pTails*100<<"%"<<endl;
    cout<<"Percentage input for Prob of Heads = "<<pHeads*100<<"%"<<endl;
    cout<<"Percentage output for Prob of Tails = "
            <<static_cast<float>(nTails)/nCoins*100<<"%"<<endl;
    cout<<"Percentage output for Prob of Heads= "
            <<static_cast<float>(nHeads)/nCoins*100<<"%"<<endl;
 

    //Exit
    return 0;
}

