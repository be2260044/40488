/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 12, 2017, 12:46 PM
 * Purpose:  Widgets
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
    const float widWght=9.2;//widget weight (in lbs)
    float pltWght,totWght;//pallet weight and total weight (in lbs)
    int numWidg;//number of widgets, chose integer so I wouldn't get fractions
                //of widgets as an answer
    //Input or initialize values Here
    cout<<"This program calculates how many "
            "widgets are on a loaded pallet"<<endl;
    cout<<"How much does an empty pallet weigh (in pounds)?"<<endl;
    cin>>pltWght;
    cout<<"How much does your fully loaded pallet weigh (in pounds)?"<<endl;
    cin>>totWght;
    
    //Process/Calculations Here
    numWidg=(totWght-pltWght)/widWght;
    //Output Located Here
    cout<<"You have "<<numWidg<<" widgets on your pallet"<<endl;

    //Exit
    return 0;
}

