/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on February 07, 2017, 11:30 PM
 * Purpose:  Assignment # 6
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
void filAray(int [],int);
int fndSmll(int [],int);
int fndLrge(int [],int);
void prntAry(int [],int);
void filAray(float [],int);
float fndSmll(float [],int);
float fndLrge(float [],int);
float sumAray(float [],int);
void  fillAry(float [],float [],float [],int);
float avgAray(float [],float [],float [],int);
float fndSmll(float [],float [],float [],int);
float fndLrge(float [],float [],float [],int);
void filAray(float [],float [],float [],float [], float [],string [],int,int);
float avgAray(float [],int);
void filAry(string [],int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char choice;
    
    //Loop on the menu
    do{
            //Input or initialize values Here
            cout<<"Choose from the list"<<endl;
            cout<<"Type 1 for Problem with Largest/Smallest"<<endl;
            cout<<"Type 2 for Problem with Rainfall"<<endl;
            cout<<"Type 3 for Problem with Monkey Business"<<endl;
            cout<<"Type 4 for Problem with Grade Book"<<endl;
            
            cin>>choice;

            //Switch to determine the problem
        switch(choice){
            case '1':{prob1();break;}
            case '2':{prob2();break;}
            case '3':{prob3();break;}
            case '4':{prob4();break;}
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='4');
    
    
    

    //Exit
    return 0;
}
//000000001111111111222222222233333333334444444444555555555566666666667777777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//****************** Gaddis_7thEd_Chap7_Prob1_Largest-Smallest *****************
//description: finds largest and smallest value in array
//******************************************************************************
void prob1(){
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    const int SIZE=10;
    int array[SIZE]={};//Initialize entire array to 0
    
    //Input or initialize values Here
    filAray(array,SIZE);
    
    //Process/Calculations Here
    
    
    //Output Located Here
    cout<<"The entire Array "<<endl;
    prntAry(array,SIZE);
    cout<<"The smallest value is "<<fndSmll(array,SIZE)<<endl;
    cout<<"The largest value is "<<fndLrge(array,SIZE)<<endl;
}

        //Functions for problem 1
        void prntAry(int a[],int n){
            cout<<endl;
            for (int i=0;i<n;i++){
                cout<<(a[i]<=9?' ':'\0')<<a[i]<<" ";
                if(i%10==9)cout<<endl;
            }
            cout<<endl;
        }

        int fndSmll(int a[],int n){
            int smllst=a[0];
            for (int i=0;i<n;i++){
                if(a[i]<smllst)smllst=a[i];
            }
            return smllst;
        }

        int fndLrge(int a[],int n){
            int lrgst=a[0];
            for (int i=0;i<n;i++){
                if(a[i]>lrgst)lrgst=a[i];
            }
            return lrgst;
        }

        void filAray(int a[],int n){
            int num;
            for (int i=0;i<n;i++){
                cout<<"Enter a value for array slot "<<i<<endl;
                cin>>num;
                a[i]=num;
            }
        }
//000000001111111111222222222233333333334444444444555555555566666666667777777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//******************** Gaddis_7thEd_Chap7_Prob2_Rainfall ***********************
//description: calculates average rainfall
//******************************************************************************
void prob2(){
    //Declare all Variables Here
    const int SIZE=12;
    float array[SIZE]={};//Initialize entire array to 0
    float sum,
            avg;
    
    //Input or initialize values Here
    filAray(array,SIZE);
    
    //Process/Calculations Here
    sum=sumAray(array,SIZE);
    avg=sum/SIZE;
    
    //Output Located Here
    cout<<"The total amount of rainfall "
            "for the year is "<<sum<<" inches"<<endl;
    cout<<"The average monthly rainfall is "<<avg<<" inches"<<endl;
    cout<<"The month with the "
            "most rainfall was month #"<<fndLrge(array,SIZE)<<endl;
    cout<<"The month with the "
            "least rainfall was month #"<<fndSmll(array,SIZE)<<endl;
}

        //Functions for Problem 2
        float fndSmll(float a[],int n){
            float smllst=a[0];
            int mnth=0;
            for (int i=0;i<n;i++){
                if(a[i]<smllst)(smllst=a[i])&&(mnth=i);
            }
            return mnth+1;
        }

        float fndLrge(float a[],int n){
            float lrgst=a[0];
            int mnth=0;
            for (int i=0;i<n;i++){
                if(a[i]>lrgst)(lrgst=a[i])&&(mnth=i);
            }
            return mnth+1;
        }

        void filAray(float a[],int n){
            float num;
            for (int i=0,mnth=1;i<n;i++,mnth++){
                cout<<"Enter the rainfall (in inches) for month "<<mnth<<endl;
                cin>>num;
                while(num<0){
                    cout<<"Invalid rainfall, please enter "
                            "number great or equal to 0"<<endl;
                    cin>>num;
                }
                a[i]=num;
            }
        }

        float sumAray(float a[],int n){
            float sum=0.0f;
            for (int i=0;i<n;i++){
                sum+=a[i];
            }
            return sum;
        }
//000000001111111111222222222233333333334444444444555555555566666666667777777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//****************** Gaddis_7thEd_Chap7_Prob4_MonkeyBusiness *******************
//description: calculates monkeys' food consumption
//******************************************************************************
void prob3(){
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
}

        //Functions for Problem 3
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

//000000001111111111222222222233333333334444444444555555555566666666667777777777
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//***************** Gaddis_7thEd_Chap7_Prob11_GradeBook *********************
//description: Finding the region with best sales
//******************************************************************************
void prob4(){
    //Declare all Variables Here
    const int SIZE=5;
    const int TESTNUM=4;
    string nmAry[SIZE]={};
    float tstAry1[TESTNUM]={},//Initialize entire array to 0
            tstAry2[TESTNUM]={},
            tstAry3[TESTNUM]={},
            tstAry4[TESTNUM]={},
            tstAry5[TESTNUM]={};
    float avg1,
            avg2,
            avg3,
            avg4,
            avg5;
    
    //Input or initialize values Here
    filAry(nmAry,SIZE);
    cout<<nmAry[1]<<endl;
    filAray(tstAry1,tstAry2,tstAry3,tstAry4,tstAry5,nmAry,TESTNUM,SIZE);
    avg1=avgAray(tstAry1,TESTNUM);
    avg2=avgAray(tstAry2,TESTNUM);
    avg3=avgAray(tstAry3,TESTNUM);
    avg4=avgAray(tstAry4,TESTNUM);
    avg5=avgAray(tstAry5,TESTNUM);
    cout<<avg1<<" "<<avg2<<" "<<avg3<<" "<<avg4<<" "<<avg5<<" "<<endl;
}

        //Functions for Problem 4
        void filAry(string a[],int n){
        string name="scott";
        for(int i=0;i<n;i++){
        cout<<"What is student #"<<i+1<<"'s name?"<<endl;
        getline(cin,name);
        }
        }   

        void filAray(float a[],float b[],float c[],float d[],
                float e[],string f[],int n,int m){
        float num;
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                cout<<"Enter test #"<<i+1<<" score for "<<f[j]<<endl;
                cin>>num;
                while(num<0||num>100){
                    cout<<"Invalid score, please enter "
                            "test score between 0 and 100"<<endl;
                    cin>>num;
                }
                a[i]=num;           
            }j++;

            for(int i=0;i<n;i++){
                cout<<"Enter test #"<<i+1<<" score for "<<f[j]<<endl;
                cin>>num;
                while(num<0||num>100){
                    cout<<"Invalid score, please enter "
                            "test score between 0 and 100"<<endl;
                    cin>>num;
                }
                b[i]=num;
            }j++;

            for(int i=0;i<n;i++){
                cout<<"Enter test #"<<i+1<<" score for "<<j<<endl;
                cin>>num;
                while(num<0||num>100){
                    cout<<"Invalid score, please enter "
                            "test score between 0 and 100"<<endl;
                    cin>>num;
                }
                c[i]=num;
            }j++;

            for(int i=0;i<n;i++){
                cout<<"Enter test #"<<i+1<<" score for "<<j<<endl;
                cin>>num;
                while(num<0||num>100){
                    cout<<"Invalid score, please enter "
                            "test score between 0 and 100"<<endl;
                    cin>>num;
                }
                d[i]=num;
            }j++;

            for(int i=0;i<n;i++){
                cout<<"Enter test #"<<i+1<<" score for "<<j<<endl;
                cin>>num;
                while(num<0||num>100){
                    cout<<"Invalid score, please enter "
                            "test score between 0 and 100"<<endl;
                    cin>>num;
                }
                e[i]=num;
            }j++;
        }cout<<"Hi"<<endl;
        }

        float avgAray(float a[],int n){
            float sum=0.0f;
            for (int i=0;i<n;i++){
                sum+=a[i];
            }
            return sum/4;
        }
