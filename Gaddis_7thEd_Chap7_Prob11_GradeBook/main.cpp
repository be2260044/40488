/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 16, 2017, 6:30 PM
 * Purpose:  rainfall
 */

//System Libraries Here
#include <iostream>
#include <string>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void filAray(float [],float [],float [],float [], float [],string [],int,int);
float avgAray(float [],int);
void filAry(string [],int);
//Program Execution Begins Here
int main(int argc, char** argv) {
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
    //Process/Calculations Here
    
    
    
    //Output Located Here
    

    //Exit
    return 0;
}

void filAry(string a[],int n){
    string name="scott";
    for(int i=0;i<n;i++){
        cout<<"What is student #"<<i+1<<"'s name?"<<endl;
        getline(cin,name);
    }
}

void filAray(float a[],float b[],float c[],float d[],float e[],string f[],int n,int m){
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