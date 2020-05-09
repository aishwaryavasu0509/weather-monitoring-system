#include"rainfallsensor.h"
#include<cstring>
#include<iostream>
using namespace std;
Rainfallsensor::Rainfallsensor()
{
    RStime=u.time;
    RSdate=u.date;
    cout<<"enter the rainfall level on"<<RStime<<"\t"<<RSdate;
    cin>>rainfalllevel;
}
void Rainfallsensor::detectrainfall()
{
    if(rainfalllevel==0)
    {
       cout<<"no rainfall";
    }
    else
    {
         cout<<"rainfall detected"<<rainfalllevel;
    }
}
int Rainfallsensor::getrainfall()
{
    return rainfalllevel;
}
