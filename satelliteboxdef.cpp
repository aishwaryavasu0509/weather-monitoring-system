#include"satellitebox.h"
#include<iostream>
using namespace std;
void Satellitebox::getweatherinfo()
{
    int ch;
    string result;
    cout<<"choose any of the options"<<endl;
    cout<<"1.rainfall readings"<<endl;
    cout<<"2.temperature readings"<<endl;
    cout<<"3.wind readings"<<endl;
    cout<<"4.pressure readings"<<endl;
    switch(ch)
    {
    case 1:
        cout<< w.r.getrainfall();
        break;
    case 2:
        cout<<w.t.gettemperature();
        break;
    case 3:
        cout<<w.w.getwindspeed();
        break;
    case 4:
        cout<<w.b.getbarometricpressure();
        break;
    }
}
void Satellitebox::sendweatherinfo()
{
    w.getweatherinfo();
}
