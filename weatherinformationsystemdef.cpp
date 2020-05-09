#include"weatherinformationsystem.h"
#include<iostream>
using namespace std;
Weatherinfosystem::Weatherinfosystem()
{
    systemdate=u.date;
    systemtime=u.time;
}
void Weatherinfosystem::getweatherinfo()
{
    cout<<"weather report on"<<systemdate<<"\t"<<systemtime<<endl;
    cout<<"pressure levels on"<<systemdate<<"\t"<<systemtime<<endl;
    b.getbarometricpressure();
    cout<<"temperature readings on"<<systemdate<<"\t"<<systemtime<<endl;
    t.gettemperature();
    t.gethumiditypercentage();
    cout<<"rainfall levels on"<<systemdate<<"\t"<<systemtime<<endl;
    r.detectrainfall();
    r.getrainfall();
    cout<<"wind readings on"<<systemdate<<"\t"<<systemtime<<endl;
    w.getwindspeed();
    w.getwinddirection();
}
void Weatherinfosystem::adddata()
{
    Weatherinfosystem wi;
    char x;
    fstream file("weatherdata.txt",ios::out|ios::app);
    if(!file.is_open())
    {
        cout<<"unable to open file"<<endl;
    }
    else
    {
        do
        {
            wi.getweatherinfo();
            file.write(wi.systemdate.c_str(),wi.systemdate.length()+1);
            file.write(wi.systemtime.c_str(),wi.systemtime.length()+1);
            file.write(wi.b.barometricpressure.c_str(),wi.b.barometricpressure.length()+1);
            file.write(wi.t.currenttemp.c_str(),wi.t.currenttemp.length()+1);
            file.write(reinterpret_cast<char *>(&wi.systemdate),sizeof(wi.systemdate));
            file.write(reinterpret_cast<char *>(&wi.systemtime),sizeof(wi.systemtime));
            file.write(reinterpret_cast<char *>(&wi.b.barometricpressure),sizeof(wi.b.barometricpressure));
            file.write(reinterpret_cast<char*>(&wi.t.currenttemp),sizeof(wi.t.currenttemp));
        }
        while(x=='y');
        file.close();
    }
}
