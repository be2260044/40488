/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 11, 2017, 5:32 PM
 * Purpose:  Box Office Sales
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    string movName;//name of movie
    float chdTkPr=3,//price of child ticket
            adtTkPr=6,//price of adult ticket
            grssPft,//gross profit
            netPft,//net profit
            pdDist;//amount paid to distributer
    short nmChTix,//number of children's tickets sold
            nmAdTix;//number of adult tickets sold
    
            
            
    //Input or initialize values Here
    cout<<"Which movie do you want to calculate for?"<<endl;
    getline(cin,movName);
    cout<<"How many adult tickets were sold?"<<endl;
    cin>>nmAdTix;
    cout<<"How many child tickets were sold?"<<endl;
    cin>>nmChTix;
    
    //Process/Calculations Here
    grssPft=chdTkPr*nmChTix+adtTkPr*nmAdTix;
    netPft=grssPft*2/10;
    pdDist=grssPft-netPft;
    //Output Located Here
    cout<<"Movie Name:                   "<<movName<<endl;
    cout<<"Adult Tickets Sold:                "<<nmAdTix<<endl;
    cout<<"Child Tickets Sold:                "<<nmChTix<<endl;
    cout<<"Gross Box Office Profit:         $"<<grssPft<<endl;
    cout<<"Net Box Office Profit:            $"<<netPft<<endl;
    cout<<"Amount Paid to the Distributer:  $"<<pdDist<<endl;

    //Exit
    return 0;
}

