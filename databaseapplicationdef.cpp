#include"databaseapplication.h"
#include<iostream>
#include<cstring>
using namespace std;
Databaseapplication::Databaseapplication()
{
   databaseapplicationdate=u.date;
   databaseapplicationtime=u.time;
   cout<<"packet date:"<<endl;
   cin>>packetid;
}
void Databaseapplication::recieveweatherinfo()
{
    cout<<databaseapplicationdate<<endl<<databaseapplicationtime;
}
void Databaseapplication::publish()
{
    w.getweatherinfo();
}

