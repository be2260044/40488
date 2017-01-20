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
    char back;
    //Loop on the menu
    do{
    
        //Input values
        cout<<"All problems are from Gaddis, 7th Edition, chapter 5 "
                "and the problem # is in () in the menu"<<endl;
        cout<<"Choose from the list"<<endl;
        cout<<"Type 1 for Sum of Numbers (1)"<<endl;
        cout<<"Type 2 for ASCII Code (2)"<<endl;
        cout<<"Type 3 for Ocean Levels (3)"<<endl;
        cout<<"Type 4 for Calories Burned (4)"<<endl;
        cout<<"Type 5 for Membership Fees (5)"<<endl;
        cout<<"Type 6 for Distance Traveled (6)"<<endl;
        cout<<"Type 7 for Penny Doubling Program (7)"<<endl;
        cout<<"Type 8 for Celsius to Fahrenheit Table (12)"<<endl;
        cout<<"Type 9 for Random Guess Game (20)"<<endl;
        cout<<"Type 0 to Exit The Program"<<endl;
        cin>>choice;

        //Switch to determine the Problem
        switch(choice){
//Problem 1 Sum of Numbers
            case '1':{
                unsigned int numSum, sum=0;

                //Input or initialize values Here
                cout<<"This program sums the number "
                        "from 1 to whatever number you choose."<<endl;
                cout<<"What number do you want the sum to?"<<endl;
                cin>>numSum;
                //validate input
                while (numSum<1){
                    cout<<"That is not a valid input, please enter "
                    "a number greater than 0"<<endl;
                    cin>>numSum;
                    }
                //start loop
                for(int numb=1;numb<=numSum;numb++){
                    sum+=numb;

                };
                cout<<"Sum of integers from 1 to "<<numSum<<" = "<<sum<<endl;
                break; 
            }
//Problem 2 ASCII Code          
            case '2':{
                for(int ASCII=1;ASCII<=127;ASCII++){
                if(ASCII%16==0)//makes 16 ASCII characters per line
                cout<<endl;
        
                 cout<<static_cast<char>(ASCII)<<"  "; 
        
                 };
                break;
            }
//Problem 3 Ocean Heights           
            case '3':{
                float ocnHght;//ocean height
                //Input or initialize values Here
                cout<<"This table shows how much the ocean "
                             "will rise over the next 25 years:"<<endl;
                for(int year=1;year<=25;year++){
                    ocnHght=year*1.5;//add 1.5 mm for every year


                    cout<<"Year "<<year<<" = "<<ocnHght<<" millimeters"<<endl; 

                };
                cout<<"The oceans will rise "<<ocnHght<<
                        " millimeters by the end of 25 years from now."<<endl;
            }
//Problem 4 Calories Burned            
            case '4':{
                //Declare and initialize local Variables Here
                float clsBrnd;//calories burned

                //Input or initialize values Here
                cout<<"This table shows how many calories are burned "
                             "while on the treadmill over time"<<endl;
                for(int minsRan=2;minsRan<=6;minsRan++){//start at 2 to start 10
                    clsBrnd=minsRan*5*3.9;//3.9 calories for every minute ran
                                          //5 to get results in increments of 5
                    cout<<"After "<<minsRan*5<<" minutes ran, you burned "
                            <<clsBrnd<<" calories total"<<endl; 
       
                }
                break;
            }
//Problem 5 Membership Fees            
            case '5':{
                //Declare and initialize local Variables Here
                float memFees=2500;//membership fees

                //Input or initialize values Here
                cout<<"This table shows how much the membership fees "
                             "of a club increases over the next 6 years"<<endl;
                for(int year=1;year<=6;year++){
                    memFees*=1.04;//2500 starting, increasing by 4% each year
                    cout<<setprecision(2)<<fixed;
                    cout<<"After year "<<year<<", the membership fees will be $"
                            <<memFees<<endl; 

                }
                break;
            }
//Problem 6 Distance Traveled            
            case '6':{
                 //Declare and initialize local Variables Here
                int     tmeTrvd;//time traveled in hours

                float   mlsPrHr,//miles per hour 
                       dstTrvd;//distance traveled in miles
                //Input or initialize values Here
                cout<<"This program calculates how much distance a vehicle "
                             "travels over a certain amount of time."<<endl;
                cout<<"How fast was the vehicle moving?"
                        " (in miles per hour, and must be positive"<<endl;
                cin>>mlsPrHr;
                cout<<"How many hours did it travel?"<<endl;
                cin>>tmeTrvd;
                //start loop
                for(int time=1;time<=tmeTrvd;time++){
                    dstTrvd=mlsPrHr*time;//distance=speed*time
                    cout<<setprecision(2)<<fixed;
                    cout<<"After hour #"<<time<<", the vehicle traveled "
                            <<dstTrvd<<" miles."<<endl; 

                }
                break;
            }
//Problem 7 Penny Doubling
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
//Problem 12 Celsius to Fahrenheit             
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
//Problem 20 Random Number Guessing Game           
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