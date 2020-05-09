#ifndef controllpannel_h
#define controllpannel_h
#include<iostream>
#include"user.h"
#include"weatherinformationsystem.h"
#include"satellitebox.h"
using namespace std;
class Controllpannel
{

    string boxnumber;
    User u;
    Weatherinfosystem w;
    Satellitebox s;
public:
    string controllpanneltime;
    string controllpanneldate;
    Controllpannel();
    void getweatherinfo();
    void monitorweather();
    void putsatellitesafe();
};
#endif
