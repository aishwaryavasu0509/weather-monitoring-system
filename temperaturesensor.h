
#ifndef temperaturesensor_h
#define temperaturesensor_h
#include"user.h"
#include<iostream>
using namespace std;
class Temperaturesensor
{

public:
     User u;
    string currenttemp;
    string currenthumidity;
    string tdate;
    string ttime;
    Temperaturesensor();
    string gettemperature();
    string gethumiditypercentage();
};
#endif // temperaturesensor_h
