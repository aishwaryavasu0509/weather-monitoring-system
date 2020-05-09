#include"barometer.h"
#include<iostream>
using namespace std;
Barometer::Barometer()
{
    bdate=u.date;
    btime=u.time;
    cout<<"enter the pressure at "<<bdate<<"\t"<<btime;
    cin>>barometricpressure;
}
string Barometer::getbarometricpressure()
{
    cout<<"barometric pressure on"<<bdate<<"\t"<<btime<<endl<<barometricpressure;
}
