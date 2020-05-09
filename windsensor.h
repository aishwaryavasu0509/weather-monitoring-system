#ifndef windsensor_h
#define windsensor_h
#include"user.h"
#include<iostream>
using namespace std;
class Windsensor
{
    string windspeed;
    string winddirection;
    User u;
public:
    string Wdate;
    string Wtime;
    Windsensor();
    string getwindspeed();
    string getwinddirection();
};
#endif // windsensor_h
