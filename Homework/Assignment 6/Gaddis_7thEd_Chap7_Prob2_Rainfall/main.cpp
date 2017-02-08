/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 16, 2017, 6:30 PM
 * Purpose:  rainfall
 */

//System Libraries Here
#include <iostream>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void filAray(float [],int);
float fndSmll(float [],int);
float fndLrge(float [],int);
float sumAray(float [],int);
//Program Execution Begins Here
int main(int argc, char** argv) {
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
    cout<<"The total amount of rainfall for the year is "<<sum<<" inches"<<endl;
    cout<<"The average monthly rainfall is "<<avg<<" inches"<<endl;
    cout<<"The month with the most rainfall was month #"<<fndLrge(array,SIZE)<<endl;
    cout<<"The month with the least rainfall was month #"<<fndSmll(array,SIZE)<<endl;

    //Exit
    return 0;
}

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