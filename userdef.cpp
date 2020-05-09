#include"user.h"
#include<iostream>
using namespace std;
User::User()
{
    username="admin";
    contactnumber="0000000000";
    address="admin";
    date="09/04/2020";
    time="19:37:30";
}
string User::getdata()
{
    int ch;
    string result;
    cout<<"enter the data to be updated"<<endl;
    cout<<"1.user name"<<endl;
    cout<<"2.contact number"<<endl;
    cout<<"3.address"<<endl;
    cout<<"4.report date"<<endl;
    cout<<"5.report time"<<endl;
    cin>>ch;
    switch(ch)
        {
        case 1:
            {
                cout<<"current data is:"<<username;
                cin>>username;
                result=username;
                return result;
                break;
            }
        case 2:
            {

                cout<<"current number is"<<contactnumber;
                cin>>contactnumber;
                result=contactnumber;
                return result;
                break;
            }
        case 3:
            {

                cout<<"current address:"<<address;
                cin>>address;
                result=address;
                return result;
                break;
            }
        case 4:
            {

                cout<<"current date of report:"<<date;
                cin>>date;
                result=date;
                return result;
                break;
            }
        case 5:
            {

                cout<<"current date of time:"<<time;
                cin>>time;
                result=time;
                return result;
                break;
            }
        default:
            {
                cout<<"invalid choice"<<endl;
               break;
            }
        }
}
