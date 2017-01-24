/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 24, 2017, 10:53 AM
 * Purpose:  Convert Numbers to Roman Numerals
 */

//System Libraries Here
#include <iostream>
#include <string>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const int THOSNDS=1000,//Conversion to 1,000
        HUNDRDS=100,//Conversion to 100
        TENS=10;//Conversion to 10
        
//Function Prototypes Here
string cnvrtRN(int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short year;
    
    //Input or initialize values Here
    cout<<"This program converts years to roman numerals"<<endl;
    cout<<"input year between 1000 and 3000"<<endl;
    cin>>year;
    
    //Output the Roman Numeral
    cout<<year<<" = "<<cnvrtRN(year)<<endl;
  
    //Exit
    return 0;
}
//000000001111111111222222222233333333334444444444555555555566666666667777777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************* Roman Numeral Conversion *********************************
//Description: Convert numbers from 1000 to 3000
//Inputs:
//      year -> Year from 1000 to 3000
//Outputs:
//      romanYr -> Output to the screen
string cnvrtRN(int year){
    //Declare Variables
    char n1000,n100,n10,n1;//number of powers of 10
    string roman="";
    
    //Parsing the year information
    n1000=(year-year%THOSNDS)/THOSNDS;  //determines how many thousands
    year =(year-n1000*THOSNDS);                 //Year without 1000's
    n100 =(year-year%HUNDRDS)/HUNDRDS;//determines how many hundreds
    year =(year-n100*HUNDRDS);                  //Year without 100's
    n10  =(year-year%TENS)/TENS;        //determines how many tens
    n1   =(year-n10*TENS);                   //Year without 10's
    
    //Fill the strings with M's
    switch (n1000){
        case 3:roman+='M';
        case 2:roman+='M';
        case 1:roman+='M';break;
        case 0:break;
        default:cout<<"Bad Year"<<endl;
    }
    
    //Fill the strings with C's
    switch (n100){
        case 9:roman+="CM";break;
        case 8:roman+="DCCC";break;
        case 7:roman+="DCC";break;
        case 6:roman+="DC";break;
        case 5:roman+="D";break;
        case 4:roman+="CD";break;
        case 3:roman+='C';
        case 2:roman+='C';
        case 1:roman+='C';break;
        case 0:break;
        default:cout<<"Bad Year"<<endl;
    }
    
     //Fill the strings with X's
    switch (n10){
        case 9:roman+="XC";break;
        case 8:roman+="LXXX";break;
        case 7:roman+="LXX";break;
        case 6:roman+="LX";break;
        case 5:roman+="L";break;
        case 4:roman+="XL";break;
        case 3:roman+='X';
        case 2:roman+='X';
        case 1:roman+='X';break;
        case 0:break;
        default:cout<<"Bad Year"<<endl;
    }
    
     //Fill the strings with I's
    switch (n1){
        case 9:roman+="IX";break;
        case 8:roman+="VIII";break;
        case 7:roman+="VII";break;
        case 6:roman+="VI";break;
        case 5:roman+="V";break;
        case 4:roman+="IV";break;
        case 3:roman+='I';
        case 2:roman+='I';
        case 1:roman+='I';break;
        case 0:break;
        default:cout<<"Bad Year"<<endl;
    }
    //Return the String
    return roman;
}