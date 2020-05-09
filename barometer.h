#ifndef barometer_h
#define barometer_h
#include"user.h"
#include<iostream>
using namespace std;
class Barometer
{

public:
    User u;
     string barometricpressure;
    string bdate;
    string btime;
    Barometer();
    string getbarometricpressure();
};
#endif // baromete_h
