/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on February 02, 2017, 1:00 PM
 * Purpose:  Coin Toss
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int coinTss(int,int &,int &);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int repeat,
            heads=0,
            tails=0;
    
    //Input or initialize values Here
    cout<<"How many times would you like to flip the coin?"<<endl;
    cin>>repeat;
    
    //Process/Calculations Here
    coinTss(repeat,heads,tails);
    
    //Output Located Here
    cout<<"Heads = "<<heads<<endl;
    cout<<"Tails = "<<tails<<endl;
    cout<<"Flips = "<<repeat<<endl;

    //Exit
    return 0;
}

int coinTss(int rpt,int &hds,int &tls){
    int coin=0;
    for(int toss=1;toss<=rpt;toss++){
        coin=rand()%2+1;
        coin==1?(cout<<"Heads"<<endl)&&(hds++):
            (cout<<"Tails"<<endl)&&(tls++);
    }
}