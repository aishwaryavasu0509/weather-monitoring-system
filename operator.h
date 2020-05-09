#ifndef operator_h
#define operator_h
#include<iostream>
#include "user.h"
using namespace std;
class Operator
{
  string operatorname;
  string operatornumber;
  string operatoraddress;
  string operatordate;
  string operatortime;
  User u;
  public:
      Operator();
      string getdata();
};
#endif // operator_h
