/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on February 02, 2017, 7:30 PM
 * Purpose:  Assignment # 5
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
void  prob1();
void  prob2();
void  prob3();
void  prob4();
void  prob5();
void  prob6();
void  prob7();
void  prob8();
void  prob9();
void  t24Inpt(int &,int &);         //Inputs military time
int   cnvClc1(int,char &);          //Converts to standard time and adds A or P
void  t12Otpt(int,int,int,char);    //Outputs standard time
float ftInpt();                     //Inputs in feet
float cnvClc2(float);               //Converts feet to meters
float mtrOtpt(float);               //Outputs meters
float lbsInpt();                    //Inputs Pounds
float cnvClc3(float);               //Converts Pounds to kilograms
float kgOtpt(float);                //Outputs kilograms
int   coinTss(int,int &,int &);     //Coin Toss Function
int   gtNmAct(string);              //Get the number of accidents
void  fndLwst(int,int,int,int,int); //Find Lowest number of accidents
float getSls(string);               //Get Sales figures from regions
void  fndHst(float, float, float, float);//Find highest
float gtLngth();                    //Get the length
float gtWdth();                     //Get the width
float areaCnv(float,float);         //Area conversion
void  dspData(float,float,float);   //Display the Data
float calcRtl(float,float);         //Calculate the Retail price
float flngDst(int);                 //Falling Distances
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char choice;
    
    //Loop on the menu
    do{
            //Input or initialize values Here
            cout<<"Choose from the list"<<endl;
            cout<<"Type 1 for Problem with Distance Falling"<<endl;
            cout<<"Type 2 for Problem with Retail Markup"<<endl;
            cout<<"Type 3 for Problem with Rectangular Area"<<endl;
            cout<<"Type 4 for Problem with Regional Sales"<<endl;
            cout<<"Type 5 for Problem with Safest Driving"<<endl;
            cout<<"Type 6 for Problem with Coin Toss"<<endl;
            cout<<"Type 7 for Problem with Pounds to Kilograms"<<endl;
            cout<<"Type 8 for Problem with Feet to Meters"<<endl;
            cout<<"Type 9 for Problem with 24 -> 12 hour format"<<endl;
            cin>>choice;

            //Switch to determine the problem
        switch(choice){
            case '1':{prob1();break;}
            case '2':{prob2();break;}
            case '3':{prob3();break;}
            case '4':{prob4();break;}
            case '5':{prob5();break;}
            case '6':{prob6();break;}
            case '7':{prob7();break;}
            case '8':{prob8();break;}
            case '9':{prob9();break;}
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='9');
    
    
    

    //Exit
    return 0;
}
//000000001111111111222222222233333333334444444444555555555566666666667777777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//****************** Gaddis_7thEd_Chap6_Prob5_FallingDistance ******************
//description: Calculates the distance that an object falls over time
//******************************************************************************
void prob1(){
     //Declare all Variables Here
    float distnce;
    
    //Output Located Here
    cout<<"This program calculates the distance that an object will"
            "fall over a period of 10 seconds."<<endl;
    cout<<"Time (seconds):    Distance (meters):"<<endl;
    for(int time=1;time<=10;time++){
        cout<<setprecision(2)<<fixed;
        cout<<setw(3)<<time<<"                      "<<setw(6)
               <<flngDst(time)<<endl;
   }
}

        //Functions for problem 1
        float flngDst(int time){
            float dist;
            dist=9.8*time*time/2;
            return dist;
        }
//000000001111111111222222222233333333334444444444555555555566666666667777777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//********************** Gaddis_7thEd_Chap6_Prob1_Markup ***********************
//description: Calculate retail price given wholesale and markup
//******************************************************************************
void prob2(){
    //Declare all Variables Here
    float whlsCst=0,
            pctMrkp=0,
            rtlCst=0;
    
    //Input or initialize values Here
    cout<<"This program converts wholesale price to retail price"<<endl;
    cout<<"What is the retail price (in $'s)? eg: 14.95"<<endl;
    cin>>whlsCst;
    cout<<"What is the markup percent? (in %)"<<endl;
    cin>>pctMrkp;
    
    //Validate inputs
    while(whlsCst<0){
        cout<<"Invalid  wholesale price, "
                "please enter a value greater than 0"<<endl;
        cin>>whlsCst;
    }
    while(pctMrkp<0){
        cout<<"Invalid  markup percent, "
                "please enter a value greater than 0"<<endl;
        cin>>pctMrkp;
    }
    //Process/Calculations Here
    rtlCst=calcRtl(whlsCst,pctMrkp);
    
    //Output Located Here
    cout<<"Markup Percentage:    "<<pctMrkp<<"%"<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"Wholesale Price:  $"<<whlsCst<<endl;
    cout<<"Retail Price:     $"<<rtlCst<<endl;
}

        //Functions for Problem 2
        float calcRtl(float wc,float pm){
            float rlCst=0;
            pm/=100;
            rlCst=wc*(1+pm);
            return rlCst;
        }
//000000001111111111222222222233333333334444444444555555555566666666667777777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************* Gaddis_7thEd_Chap6_Prob2_RectangeArea *******************
//description: Convert Length and Width to Area
//******************************************************************************
void prob3(){
    //Declare all Variables Here
    float length,
            width,
            area;
    
    //Input or initialize values Here
    length=gtLngth();
    width=gtWdth();
    
    //Convert to area
    area=areaCnv(length,width);

    //Output Located Here
    dspData(length,width,area);
}

        //Functions for Problem 3
        float gtLngth(){//input length
            float length;
            cout<<"Please input the rectangle's length"<<endl;
            cin>>length;
            return length;
        }

        float gtWdth(){//input width
            float width;
            cout<<"Please input the rectangle's width"<<endl;
            cin>>width;
            return width;
        }

        float areaCnv(float lngth,float wdth){//convert to area
            float area;
            area=lngth*wdth;
            return area;
        }

        void  dspData(float lngth,float wdth,float area){
            cout<<"Length = "<<lngth<<endl;
            cout<<"Width  = "<<wdth<<endl;
            cout<<"Area   = "<<area<<endl;
        }
//000000001111111111222222222233333333334444444444555555555566666666667777777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//***************** Gaddis_7thEd_Chap6_Prob3_WinningDivision *******************
//description: Finding the region with best sales
//******************************************************************************
void prob4(){
    //Declare all Variables Here
    float sthEast,nthEast,nthWest,sthWest;//Regions
    
    
    //Input or initialize values Here
    cout<<"This program compares four division's sales and determines which "
            "(of SouthEast, SouthWest, NorthWest and NorthEast) "
            "had the greatest sales for the quarter."<<endl;
      
    //Process/Calculations Here

    //Output Located Here
        //Find sales for each region
    nthEast=getSls("NorthEast");
    sthEast=getSls("SouthEast");
    nthWest=getSls("NorthWest");
    sthWest=getSls("SouthWest");
   
    fndHst(nthEast,sthEast,nthWest,sthWest);
}

        //Functions for Problem 4
        float getSls(string division){
            float result;
            do{
                cout<<"What is "<<division<<"'s quarterly sales "
                        "figure in dollars?"<<endl;
                cin>>result;
            }while(result<=0);
            return result; 
        }

        void fndHst(float nthEast,float sthEast,float nthWest,float sthWest){

            float sales=nthEast;
            string division=" ";
                //finds highest sales numbers
            if (sthEast>sales){sales=sthEast; 
                division="SouthEast";}
            if (nthWest>sales){sales=nthWest;
                division="NorthWest";}
            if (sthWest>sales){sales=sthWest;
                division="SouthWest";}
            if (nthEast>sales){sales=nthEast;
                division="NorthEast";}

            //Output the Highest Value
            cout<<"The "<<division<<" division "
                    "has the highest sales at $"<<sales<<endl;    
        }
//000000001111111111222222222233333333334444444444555555555566666666667777777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//********************* Gaddis_7thEd_Chap6_Prob4_SafeDriving *******************
//description: Find safest driving region
//******************************************************************************
void prob5(){
    //Declare all Variables Here
    int nrth,sth,est,wst,cntrl;//Regions
    
    
    //Input or initialize values Here
    cout<<"This program compares five region's driving accidents and "
            "determines which (of North, South, East, West, and Central) "
            "had the lowest accidents last year."<<endl;
      
    //Output Located Here
        //Get accidents for each region
    nrth=gtNmAct("North");
    sth=gtNmAct("South");
    est=gtNmAct("East");
    wst=gtNmAct("West");
    cntrl=gtNmAct("Central");
   
    fndLwst(nrth,sth,est,wst,cntrl);
}

        //Functions for Problem 5
        int gtNmAct(string region){
            int result;
            do{
                cout<<"How many driving accidents did "<<region<<" have last "
                        "year?"<<endl;
                cin>>result;
            }while(result<=0);
            return result; 
        }

        void fndLwst(int north,int south,int east,int west,int central){
            //sorts so find the lowest driving accidents
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
//000000001111111111222222222233333333334444444444555555555566666666667777777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************** Gaddis_7thEd_Chap6_Prob8_CoinToss ***********************
//description: Coin Toss with added counting
//******************************************************************************
void prob6(){
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int repeat,     //how many times to flip the coin
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
}

        //Functions for Problem 6
        int coinTss(int rpt,int &hds,int &tls){
            int coin=0;
            for(int toss=1;toss<=rpt;toss++){
                coin=rand()%2+1;
                coin==1?(cout<<"Heads"<<endl)&&(hds++):
                    (cout<<"Tails"<<endl)&&(tls++);
            }
        }
//000000001111111111222222222233333333334444444444555555555566666666667777777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************** Savitch_8thEd_Chap5_Prob9_PoundsToKilograms ******************
//description: Pounds to Kilograms
//******************************************************************************
void prob7(){
    //Declare all Variables Here
    char choice;
    int ounces=0;
    float kilogms=0.0f,
            grams=0.0f,
            pounds=0.0f;
    
    //Loop on the menu
    do{
            //Input or initialize values Here
            cout<<"Pounds/Ounces to Metric Conversions"<<endl;
            cout<<"Would you like to do a conversion?"<<endl;
            cout<<"Type 1 to do a conversion or anything else to exit"<<endl;
            cin>>choice;

            //Switch to determine the problem
        switch(choice){
            case '1':{float pounds=lbsInpt();
            float kilogms=cnvClc3(pounds);
            kgOtpt(kilogms);
                }
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice=='1');
}

        //Functions for Problem 7
        float lbsInpt(){
            float pounds, ounces;
            cout<<"How many pounds?"<<endl;
            cin>>pounds;
            cout<<"How many ounces?"<<endl;
            cin>>ounces;

            return pounds+ounces/16.0;
        }

        float cnvClc3(float pounds){
            float kilogms=pounds/2.2046;
            return kilogms;
        }

        float kgOtpt(float kilograms){
            cout<<"The length is "<<kilograms<<" kilograms or "
                    <<kilograms*1000<<" grams"<<endl;
        }
//000000001111111111222222222233333333334444444444555555555566666666667777777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************* Savitch_8thEd_Chap5_Prob6_FeetToMeters********************
//description: Converts feet/inches to meters/centimeters
//******************************************************************************
void prob8(){
    //Declare all Variables Here
    char choice;
    int inchs=0;         //inches
    float meters=0.0f,
            cntmtrs=0.0f,//centimeters
            feet=0.0f;
    
    //Loop on the menu
    do{
            //Input or initialize values Here
            cout<<"Inches/Feet to Metric Conversions"<<endl;
            cout<<"Would you like to do a conversion?"<<endl;
            cout<<"Type 1 to do a conversion or anything else to exit"<<endl;
            cin>>choice;

            //Switch to determine the problem
        switch(choice){
            case '1':{float feet=ftInpt();
            float meters=cnvClc2(feet);
            mtrOtpt(meters);
            
            
                }
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice=='1');
}
        //Functions for Problem 8
        float ftInpt(){//input feet and inches
            float feet, inchs;
            cout<<"How many feet?"<<endl;
            cin>>feet;
            cout<<"How many inches?"<<endl;
            cin>>inchs;

            return feet+inchs/12.0;//converts inches to feet and adds to feet
        }

        float cnvClc2(float feet){
            float meters=feet*0.3048;//Feet to meters

            return meters;
        }

        float mtrOtpt(float meters){
            cout<<"The length is "<<meters<<" meters or "
                    <<meters*100<<" centimeters"<<endl;
        }
//000000001111111111222222222233333333334444444444555555555566666666667777777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//****************** Savitch_8thEd_Chap5_Prob1_24HrTo12Hr **********************
//description: 24 hour conversion to 12 hours
//******************************************************************************
void prob9(){
    //Declare all Variables Here
    char choice,
            amPm;
    int milHrs=0,//Military time hours
            milMins=0,//Military time minutes
            stdHrs=0;//standard time
    
    //Loop on the menu
    do{
            //Input or initialize values Here
            cout<<"24 hour time format to 12 hour format conversion."<<endl;
            cout<<"Would you like to do a conversion?"<<endl;
            cout<<"Type 1 to do a conversion or anything else to exit"<<endl;
            cin>>choice;

            //Switch to determine the problem
        switch(choice){
            case '1':{
                t24Inpt(milHrs,milMins);//Input
            stdHrs=cnvClc1(milHrs,amPm);//Conversion set = to stdHrs
            t12Otpt(milHrs,milMins,stdHrs,amPm);//Output
            break;
                }
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice=='1');
}

        //Functions for Prob 9
        void t24Inpt(int &hours,int &mins){
            cout<<"Please input the time in 24 hour format. "
                    "Separate the hours and minutes with a space. "
                    "(eg 14:45 would be input as 14 45)"<<endl;
            cin>>hours>>mins;

            //Validate time
            while(hours>23||mins>59){
             cout<<"Invalid input, make sure the hours are between 0-23"
                     " and the minutes are between 0-59"<<endl;
             cin>>hours>>mins;
            }
        }

        int cnvClc1(int hours,char &aP){
            if(hours>12){
                hours-=12;
                aP='P';}
            else{
                aP='A';}
            return hours;
        }

        void t12Otpt(int mHrs,int mMins,int sdHrs,char aP){
            cout<<mHrs<<":"<<mMins<<" is equivalent to "
                    ""<<sdHrs<<":"<<mMins<<" "<<aP<<"M"<<endl;
        }


