#include"temperaturesensor.h"
#include<iostream>
using namespace std;
Temperaturesensor::Temperaturesensor()
{
    tdate=u.date;
    ttime=u.time;
    cout<<"enter the current temp and humidity on"<<tdate<<"\t"<<ttime;
    cin>>currenttemp;
    cin>>currenthumidity;
}
string Temperaturesensor::gettemperature()
{
    cout<<"temperature is:"<<currenttemp;
}
string Temperaturesensor::gethumiditypercentage()
{
    cout<<"humidity:"<<currenthumidity;
}
