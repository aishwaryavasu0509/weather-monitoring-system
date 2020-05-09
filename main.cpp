#include"user.h"
#include"operator.h"
#include"controllpannel.h"
#include"databaseapplication.h"
#include"geosynchronoussattellite.h"
#include"satellitebox.h"
#include"weatherinformationsystem.h"
#include"barometer.h"
#include"temperaturesensor.h"
#include"windsensor.h"
#include"rainfallsensor.h"
#include<iostream>
using namespace std;
int main()
{

    Operator o;
    o.getdata();
    Controllpannel C;
    C.getweatherinfo();
    User u;
    u.getdata();
    Databaseapplication D;
    D.recieveweatherinfo();
    Geosat G;
    Satellitebox S;
    Weatherinfosystem W;
    W.getweatherinfo();
    W.adddata();
   D.recieveweatherinfo();
}
