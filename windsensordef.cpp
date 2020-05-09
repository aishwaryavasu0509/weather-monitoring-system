#include"windsensor.h"
#include<iostream>
using namespace std;
Windsensor::Windsensor()
{
    Wdate=u.date;
    Wtime=u.time;
}
string Windsensor::getwindspeed()
{
    cout<<"wind speed"<<windspeed;
}
string Windsensor::getwinddirection()
{
    cout<<"wind direction"<<winddirection;
}
