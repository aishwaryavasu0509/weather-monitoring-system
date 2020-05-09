#ifndef user_h
#define user_h
#include<iostream>
using namespace std;
class User
{
    string username;
    string contactnumber;
    string address;

public:
    string date;
    string time;
    User();
    string getdata();
};
#endif // user_h
