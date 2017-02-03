/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on Jan 31, 2016, 12:47 AM
 * Purpose:  driving
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int gtNmAct(string);//Get the number of accidents
void fndLwst(int,int,int,int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int nrth,sth,est,wst,cntrl;//Regions
    
    
    //Input or initialize values Here
    cout<<"This program compares five region's driving accidents and "
            "determines which (of North, South, East, West, and Central) "
            "had the lowest accidents last year."<<endl;
      
    //Process/Calculations Here

    //Output Located Here
    nrth=gtNmAct("North");
    sth=gtNmAct("South");
    est=gtNmAct("East");
    wst=gtNmAct("West");
    cntrl=gtNmAct("Central");
   
    fndLwst(nrth,sth,est,wst,cntrl);

    //Exit
    return 0;
}
//******************************************************************************
//******************************************************************************
int gtNmAct(string region){
    int result;
    do{
        cout<<"How many driving accidents did "<<region<<" have last "
                "year?"<<endl;
        cin>>result;
    }while(result<=0);
    return result; 
}
//******************************************************************************
//******************************************************************************

void fndLwst(int north,int south,int east,int west,int central){
    
    int acdnts=north;
    string regn=" ";
    
    if (north<=acdnts){acdnts=north; 
        regn="North";}
    if (south<acdnts){acdnts=south;
        regn="South";}
    if (east<acdnts){acdnts=east;
        regn="East";}
    if (west<acdnts){acdnts=west;
        regn="West";}
    if (central<acdnts){acdnts=central;
        regn="Central";}
    
    //Output Lowest
    cout<<regn<<" has the lowest driving accident "
            "occurrences at "<<acdnts<<" accidents"<<endl;   
}