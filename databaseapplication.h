#ifndef databaseapplication_h
#define databaseapplication_h
#include"user.h"
#include"weatherinformationsystem.h"
#include<iostream>
using namespace std;
class Databaseapplication
{
    string packetid;
    string databaseapplicationdate;
    string databaseapplicationtime;
    string weatherinformation;
    User u;
    Weatherinfosystem w;
public:
    Databaseapplication();
    void recieveweatherinfo();
    void save();
    void publish();
};
#endif // databaseapplication_h
