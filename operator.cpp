#include"operator.h"
#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
Operator::Operator()
{
  operatorname="admin";
  operatornumber="0000000000";
  operatoraddress="admin";
  operatordate=u.date;
  operatortime=u.time;
}
string Operator::getdata()
{
    cout<<"in getdata";
    int ch;
    cout<<"enter the data to be accessed of the operator"<<endl;
    cout<<"1.operator name"<<endl;
    cout<<"2.operator contact number"<<endl;
    cout<<"3.operator address"<<endl;
    cout<<"4.operator date"<<endl;
    cout<<"5.operator time"<<endl;
    cin>>ch;
    switch(ch)
        {
        case 1:
            {
                cout<<operatorname;
                break;
            }
        case 2:
            {

                cout<<operatornumber;
                break;
            }
        case 3:
            {

                cout<<operatoraddress;
                break;
            }
        case 4:
            {

                cout<<operatordate;
                break;
            }
        case 5:
            {

                cout<<operatortime;
                break;
            }
        default:
            {
                cout<<"invalid choice"<<endl;
               break;
            }
        }
}
