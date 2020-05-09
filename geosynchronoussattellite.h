#ifndef geosynchronoussattellite_h
#define geosynchronoussattellite_h
#include<iostream>
#include"user.h"
using namespace std;
class Geosat
{
    string communicationlink;
    string geodate;
    string geotime;
    User s;
public:
    Geosat();
    void setdata();
    void enablecommunication();
    void sendinfotocontrolpannel();
};
#endif // geosynchronoussattellite_h
