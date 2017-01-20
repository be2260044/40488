/* 
 * File:   main.cpp
 * Author: Bradley Erwin
 * Created on January 16, 2017, 11:45 PM
 * Purpose:  Assignment 3
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>//random number generator and seed
#include <ctime>  //time used for random seed
#include <iomanip>//for rounding
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const int bmiCnst=703;//body mass index constant for conversion
const float GRAVITY=9.8;//in meters/sec/sec
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int choice;
    const int p1=1,
            p2=2,
            p3=3,
            p4=4,
            p5=5,
            p6=6,
            p7=7,
            p8=8,
            p9=9,
            p10=10;
    //Input or initialize values Here
    cout<<"All problems are from Gaddis, 7th Edition, Chapter 4:"<<endl;
    cout<<"1.  Problem 1:  Minimum/Maximum"<<endl;
    cout<<"2.  Problem 2:  Roman Numeral Converter"<<endl;
    cout<<"3.  Problem 3:  Magic Dates"<<endl;
    cout<<"4.  Problem 4:  Area of Rectangles"<<endl;
    cout<<"5.  Problem 5:  Body Mass Index"<<endl;
    cout<<"6.  Problem 6:  Mass and Weight"<<endl;
    cout<<"7.  Problem 7:  Time Calculator"<<endl;
    cout<<"8.  Problem 8:  Change for a Dollar Game"<<endl;
    cout<<"9.  Problem 9:  Math Tutor"<<endl;
    cout<<"10. Problem 10: Software Sales"<<endl;
    cout<<"Which program would you like to see?"<<endl;
    cin>>choice;
    //Process/Calculations Here
    
    //Output Located Here
    if (choice==p1)
    {
        float number1,number2;
    string result;
    
    cout<<"This program determines which "
            "number that you enter is bigger?"<<endl;
    cout<<"Enter 2 numbers"<<endl;
    cin>>number1>>number2;
    
    if (number1>number2)     result=" is bigger than ";
    else if (number2>number1)result=" is smaller than ";
    else                     result=" is equal to ";
    
    cout<<number1<<result<<number2<<endl;
    }
    
    else if (choice==p2)
    {
        int numb;
    string result;
    
    cout<<"This program will convert a number "
            "between 1-10 to Roman Numerals"<<endl;
    cout<<"Enter a number between 1 and 10"<<endl;
    cin>>numb;
    
    if      (numb==10)result="X";
    else if (numb==9) result="IX";
    else if (numb==8) result="VIII";
    else if (numb==7) result="VII";
    else if (numb==6) result="VI";
    else if (numb==5) result="V";
    else if (numb==4) result="IV";
    else if (numb==3) result="III";
    else if (numb==2) result="II";
    else if (numb==1) result="I";
    else             result="not a valid entry";
                                        
        
    
    cout<<static_cast<short>(numb)<<" = "<<result<<endl;
    }
    
    else if (choice==p3)
    {
        short month,day,year;
    
    cout<<"Input the number of the month"<<endl;
    cin>>month;
    cout<<"Input the numerical day of the month"<<endl;
    cin>>day;
    cout<<"Input the last 2 digits of the year"<<endl;
    cin>>year;
    
    cout<<month<<"/"<<day<<"/"<<year<<endl;
    cout<<((month*day==year)?"is a magic date":"is not a magic date")<<endl;
    }
    
    else if (choice==p4)
    {
        float width1,width2,length1,length2,area1,area2;//in inches and inches^2
    string result;
    
    cout<<"This program determines which rectangle "
            "that you entered has a bigger area"<<endl;
    cout<<"Enter the length & width of the first rectangle (in inches)"<<endl;
    cin>>width1>>length1;
    cout<<"Enter the length & width of the second rectangle (in inches)"<<endl;
    cin>>width2>>length2;
    
    area1=width1*length1;
    area2=width2*length2;
    if (area1>area2)     result=" is bigger than ";
    else if (area2>area1)result=" is smaller than ";
    else                 result=" is equal to ";
    
    cout<<"Area of Rectangle 1 = "<<area1<<" inches"<<endl;
    cout<<"Area of Rectangle 2 = "<<area2<<" inches"<<endl;
    cout<<"Rectangle 1"<<result<<"Rectangle 2"<<endl;
    }
    
    else if (choice==p5)
    {
       float weight,//person's weight in lbs
            height,//person's height in inches
            BMI;//body mass index
    string result;
    
    cout<<"This program calculates Body Mass Index"<<endl;
    cout<<"Enter your weight (in pounds)"<<endl;
    cin>>weight;
    cout<<"Enter your heigh (in inches)"<<endl;
    cin>>height;
    
    BMI=weight*bmiCnst/(height*height);
    if (BMI>25)                    result="overweight";
    else if (BMI<=25 && BMI>=18.5) result="at optimal weight";
    else                           result="underweight";
    
    cout<<setprecision(1)<<fixed<<endl;
    cout<<"Your BMI is "<<BMI<<endl;
    cout<<"According to the Body Mass Index, "
            "you are "<<result<<endl; 
    }
    
    else if (choice==p6)
    {
        float mass,//in kilograms
            weight;//in Newtons
    
    cout<<"This program calculates an objects weight given its mass"<<endl;
    cout<<"Enter the object's mass (in kilograms)"<<endl;
    cin>>mass;
    
    weight=mass*GRAVITY;

    cout<<"The object's weight is "<<weight<<" Newtons"<<endl;
    cout<<((weight>1000)?"This object is too heavy":
        (weight<10)?"This object is too light":"")<<endl;
    }
    
    else if (choice==p7)
    {
        float minutes,hours,days,seconds,
            result1;//output for the amount of days, hours, etc
    string result2;//output for the units of days, hours, etc
    
    cout<<"This program will convert seconds into "
            "minutes, hours, or days."<<endl;
    cout<<"Enter the number of seconds."<<endl;
    cin>>seconds;

    minutes=seconds/60;
    hours=seconds/3600;
    days=seconds/86400;
    
    if (seconds>=86400)    result1=days, result2=" day(s)";
    else if (seconds>=3600)result1=hours, result2=" hour(s)";
    else if (seconds>=60)  result1=minutes, result2=" minute(s)";
    else                  result1=seconds, result2=" second(s)";
    cout<<setprecision(2)<<fixed<<endl;
    cout<<seconds<<" seconds = "<<result1<<result2<<endl;
    }
    
    else if (choice==p8)
    {
        short quarter=25,//number of cents in coinage
                dime=10,
                nickel=5,
                penny=1;
    int nQrts,nDimes,nNickls,nPenies;
    float total;
    string result;
           
    cout<<"This is a game to guess a combination "
            "of coins to equal 1 dollar"<<endl;
    cout<<"Enter the amount of Quarters, Dimes, Nickels, and Pennies"<<endl;
    cout<<"Type all in the same line i.e. 12 8 0 3"<<endl;
    cin>>nQrts>>nDimes>>nNickls>>nPenies;
    
    total=nQrts*quarter/100.0f +
            nDimes*dime/100.0f +
            nNickls*nickel/100.0f +
            nPenies*penny/100.0f;
    if (total==1) result="Congratulations, You Win!!!";
    else if (total>1) result="Sorry, that is more than a dollar.";
    else if (total<1) result="Sorry, that is less than a dollar.";
    
    cout<<result<<endl;
    }
    
    else if (choice==p9)
    {
        srand(static_cast<unsigned int>(time(0)));
    
    unsigned short numb1,numb2,sum,answer,result2;
    string result1;
    
    numb1=rand()%1000+1;//[1,1000]
    numb2=rand()%1000+1;//[1,1000]
    cout<<"What is "<<numb1<<" + "<<numb2<<" = ?"<<endl;
    cin>>answer;
    
    sum=numb1+numb2;
    
    if (answer==sum) result1="That is Correct! You're #", result2=1;
    else result1="Sorry, the correct answer is ", result2=sum;
    cout<<result1<<result2<<endl;
    }
    
    else
    {
        float qntSld,//quantity sold
            cost1,cost2,cost3,cost4,cost5,result;
 
    cout<<"This program calculates the total cost of "
            "purchase with quantity discounts"<<endl;
    cout<<"Input the number of units sold"<<endl;
    cin>>qntSld;
    
    cost1=qntSld*99;
    cost2=(qntSld-9)*99*8/10+(9*99);
    cost3=(qntSld-19)*99*7/10+(10*99*8/10)+(9*99);
    cost4=(qntSld-49)*99*6/10+(30*99*7/10)+(10*99*8/10)+(9*99);
    cost5=(qntSld-99)*99/2+(50*99*6/10)+(30*99*7/10)+(10*99*8/10)+(9*99);
    if (qntSld>=100)     result=cost5;
    else if (qntSld>=50) result=cost4;
    else if (qntSld>=20) result=cost3;
    else if (qntSld>=10) result=cost2;
    else                 result=cost1;
    
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"The cost of "<<qntSld<<" units is $"<<result<<endl;
    }

    //Exit
    return 0;
}

