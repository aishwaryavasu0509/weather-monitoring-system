#ifndef rainfallsensor_h
#define rainfallsensor_h
#include"user.h"
#include<iostream>
using namespace std;
class Rainfallsensor
{

public:
    User u;
    int rainfalllevel;
    string RSdate;
    string RStime;
    Rainfallsensor();
    void detectrainfall();
    int getrainfall();
};
#endif // rainfallsensor_h
