#ifndef weatherinformationsystem_h
#define weatherinformationsystem_h
#include"user.h"
#include"barometer.h"
#include"temperaturesensor.h"
#include"windsensor.h"
#include"rainfallsensor.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Weatherinfosystem
{
    string systemdate;
    string systemtime;

public:
    User u;
    Barometer b;
    Temperaturesensor t;
    Rainfallsensor r;
    Windsensor w;
    Weatherinfosystem();
    void getweatherinfo();
    void adddata();
};
#endif // weatherinformationsystem_h
