/* 
  File:   main.cpp
  Author: Bradley Erwin
  Created on February 02, 2017, 11:19 AM
  Purpose:  Calculate Inflation rate
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes
void  fillAry(float [],float [],float [],int);
float avgAray(float [],float [],float [],int);
float fndSmll(float [],float [],float [],int);
float fndLrge(float [],float [],float [],int);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=7;
    float food1[SIZE]={};//Initialize the entire array to 0
    float food2[SIZE]={};
    float food3[SIZE]={};
    float food;
    
    //Input values
    for(int day=0;day<SIZE;day++){
        cout<<"How many pounds of food "
                "did monkey #1 eat on day "<<day+1<<"?"<<endl;
        cin>>food;
        while(food<0){
            cout<<"Invalid amount of food, enter a non-negative number"<<endl;
            cin>>food;
        }
        food1[day]=food;
    }
    for(int day=0;day<SIZE;day++){
        cout<<"How many pounds of food "
                "did monkey #2 eat on day "<<day+1<<"?"<<endl;
        cin>>food;
        while(food<0){
            cout<<"Invalid amount of food, enter a non-negative number"<<endl;
            cin>>food;
        }
        food2[day]=food;
    }
    for(int day=0;day<SIZE;day++){
        cout<<"How many pounds of food "
                "did monkey #3 eat on day "<<day+1<<"?"<<endl;
        cin>>food;
        while(food<0){
            cout<<"Invalid amount of food, enter a non-negative number"<<endl;
            cin>>food;
        }
        food3[day]=food;
    }
    
    //Output values
    cout<<"Average food eaten per day "
            "= "<<avgAray(food1,food2,food3,SIZE)<<" pounds."<<endl;
    cout<<"The smallest amount eaten was "
            <<fndSmll(food1,food2,food3,SIZE)<<" pounds"<<endl;
    cout<<"The largest amount eaten was "
            <<fndLrge(food1,food2,food3,SIZE)<<" pounds"<<endl;
 
    //Exit stage right!
    return 0;
}

float avgAray(float a[],float b[],float c[],int n){
    float sum=0.0f;
    for (int i=0;i<n;i++){
        sum+=a[i];
    }
    for (int i=0;i<n;i++){
        sum+=b[i];   
    }
    for (int i=0;i<n;i++){
        sum+=c[i];
    }
    return (sum/(n*3));
}

float fndSmll(float a[],float b[],float c[],int n){
    float smllst=a[0];
    for (int i=0;i<n;i++){
        if(a[i]<smllst)smllst=a[i];
    }
    for (int i=0;i<n;i++){
        if(b[i]<smllst)smllst=b[i];
    }
    for (int i=0;i<n;i++){
        if(c[i]<smllst)smllst=c[i];
    }
    return smllst;
}

float fndLrge(float a[],float b[],float c[],int n){
    float lrgst=a[0];
    for (int i=0;i<n;i++){
        if(a[i]>lrgst)lrgst=a[i];
    }
    for (int i=0;i<n;i++){
        if(b[i]>lrgst)lrgst=b[i];
    }
    for (int i=0;i<n;i++){
        if(c[i]>lrgst)lrgst=c[i];
    }
    return lrgst;
}

