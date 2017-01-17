/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 16, 2017, 9:09 PM
 * Purpose:  Math Tutor
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>//random number generator and seed
#include <ctime>  //time used for random seed
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    unsigned short numb1,numb2,sum,answer,result2;
    string result1;
    //Input or initialize values Here
    numb1=rand()%1000+1;//[1,1000]
    numb2=rand()%1000+1;//[1,1000]
    cout<<"What is "<<numb1<<" + "<<numb2<<" = ?"<<endl;
    cin>>answer;
    
    //Process/Calculations Here
    sum=numb1+numb2;
    //Output Located Here
    if (answer==sum) result1="That is Correct! You're #", result2=1;
    else result1="Sorry, the correct answer is ", result2=sum;
    cout<<result1<<result2<<endl;
    //Exit
    return 0;
}

