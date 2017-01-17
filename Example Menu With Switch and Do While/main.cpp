/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 17, 2017, 12:12 PM
 * Purpose:  menu
 */

//System Libraries Here
#include <iostream>//input/output library
#include <cstdlib>//random number generator seed
#include <ctime>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char choice;
    
    //Loop on the menu
    do{
            //Input or initialize values Here
            cout<<"Choose from the list"<<endl;
            cout<<"Type 1 for Problem with Do-While"<<endl;
            cout<<"Type 2 for Problem with While"<<endl;
            cout<<"Type 3 for Problem with For"<<endl;
            cin>>choice;

            //Switch to determine the problem
        switch(choice){
            case '1':{
                cout<<"We are in Problem 1"<<endl;
                break;
            }
        case '2':{
                cout<<"We are in Problem 2"<<endl;
                break;
            }
        case '3':{
            cout<<"We are in Problem 3"<<endl;
                break;
            }
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='3');
    
    
    

    //Exit
    return 0;
}

