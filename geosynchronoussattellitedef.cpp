#include"geosynchronoussattellite.h"
#include<iostream>
using namespace std;
Geosat::Geosat()
{
    cout<<"enter the communication link"<<endl;
    cin>>communicationlink;
}
void Geosat::setdata()
{
    geodate=s.date;
    geotime=s.time;
}
void Geosat::enablecommunication()
{

}
void Geosat::sendinfotocontrolpannel()
{

}
