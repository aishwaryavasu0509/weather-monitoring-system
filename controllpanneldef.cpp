#include"controllpannel.h"
#include<iostream>
#include<cstring>
using namespace std;
Controllpannel::Controllpannel()
{
    cout<<"enter the box number"<<endl;
    cin>>boxnumber;
}
void Controllpannel::getweatherinfo()
{
    cout<<u.time;
    cout<<u.date;
}
void Controllpannel::monitorweather()
{
    w.getweatherinfo();

}
void Controllpannel::putsatellitesafe()
{
    s.getweatherinfo();
}
