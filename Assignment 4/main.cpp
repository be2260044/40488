/* 
  File:   main.cpp
  Author: Bradley Erwin
  Created on January 19, 2017, 10:45 PM
  Purpose:  Assignment 4
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop on the menu
    do{
    
        //Input values
        cout<<"Choose from the list"<<endl;
        cout<<"Type 1 for Problem with Do-While"<<endl;
        cout<<"Type 2 for Problem with While"<<endl;
        cout<<"Type 3 for Problem with For"<<endl;
        cout<<"Type 4 for Problem with Do-While"<<endl;
        cout<<"Type 5 for Problem with While"<<endl;
        cout<<"Type 6 for Problem with For"<<endl;
        cout<<"Type 7 for Penny Doubling Program"<<endl;
        cout<<"Type 8 for Celsius to Fahrenheit Table"<<endl;
        cout<<"Type 9 for Random Guess Game"<<endl;
        cin>>choice;

        //Switch to determine the Problem
        switch(choice){
            case '1':{
                
                break;
            }
            case '2':{
                
                break;
            }
            case '3':{
                
            }
            case '4':{
                
                break;
            }
            case '5':{
                
                break;
            }
            case '6':{
                
            }
//Penny Doubling
            case '7':{
                int salary=1,totPay=0,maxDays;//Salary and Pay in pennies
    
            //Input or initialize values Here
            cout<<"This program calculates the value of doubling "
                    "a penny every day over time"<<endl;
            cout<<"How many days would you like to calculate for?"<<endl;
            cin>>maxDays;
            //Validate Input
            while (maxDays>31||maxDays<1){//validating guess range
                 cout<<"This is outside the range of valid numbers, "
                    "enter a value between 1-31"<<endl;
                    cin>>maxDays;
                            }   

            //Process/Calculations Here
            for(int day=1;day<=maxDays;day++,salary*=2){
                int cents=salary%100;//last 2 digits for pennies
                int dollars=(salary-cents)/100;//2 digits less for dollars
                totPay+=salary;
                cout<<"Salary for day "<<day<<" = $"<<dollars<<"."
                        <<(cents<10?'0':'\0')<<cents<<endl;
                cents=totPay%100;
                dollars=(totPay-cents)/100;
                cout<<"     Total Pay for day "<<day<<" = $"<<dollars<<"."
                        <<(cents<10?'0':'\0')<<cents<<endl;


            }
                
                break;
            }
//Celsius to Fahrenheit             
            case '8':{
            //Declare and initialize local Variables Here
            float fhtTemp;//Celsius temp and Fahrenheit temp

            //Input or initialize values Here
            cout<<"This program converts temperatures from Celsius"
                    " into Fahrenheit."<<endl;
            //Process/Calculations Here
            for(float clsTemp=0;clsTemp<=20;clsTemp++){
            fhtTemp=clsTemp*9/5+32;//temperature conversion
            //Output Located Here
            cout<<fixed<<setprecision(2);
            cout<<"Celsius = "<<clsTemp<<" degrees, "
                    "when Fahrenheit = "<<fhtTemp<<" degrees"<<endl;
                }
                break;
            }
//Random Number Guessing Game:            
            case '9':{
                //set random number seed
            srand(static_cast<unsigned int>(time(0)));

            //Declare all Variables Here
            const short rndNumb=rand()%25+1;//sets random number 1-25
            short      guess;//guess


            //Input or initialize values Here
            cout<<"This is a number guessing game!"<<endl;
            cout<<"This game randomly picks a number between 1 and 25"<<endl;
            //Loop    
            do{ 

                cout<<"Please enter your guess:"<<endl;
                cin>>guess;
                    while (guess>25||guess<1){//validating guess range
                        cout<<"This is outside the range of the game, "
                            "enter a value between 1-25"<<endl;
                        cin>>guess;
                    }    
                    while (guess<rndNumb){
                        cout<<"Too Low, Try Again"<<endl;
                        cin>>guess;

                    }
                    while (guess>rndNumb){
                    cout<<"Too High, Try Again"<<endl;
                    cin>>guess;

                    }
                }
            while(guess!=rndNumb);
            cout<<"You Win!!"<<endl;
                    }
        default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='9');
    
    //Exit stage right!
    return 0;
}