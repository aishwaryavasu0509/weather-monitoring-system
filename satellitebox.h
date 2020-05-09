#ifndef satellitebox_h
#define satellitebox_h
#include<iostream>
#include"weatherinformationsystem.h"
using namespace std;
class Satellitebox
{
    string satboxnumber;
    string location;
    string weatherinformation;
public:
    Weatherinfosystem w;
    void getweatherinfo();
    void sendweatherinfo();
};
#endif // satellitebox_h
