#include<iostream>
using namespace std ;

class Login
{
    public:
    char id[100];
    char password[100];
    
    void getid()
    {
        cout<<"Enter the username : ";
        cin>>id;
        cout<<"\nEnter the password : ";
        cin>>password;
    }
    void display_login()
    {
        cout<<"Your Username is : "<<id<<endl;
        cout<<"Your password is : "<<password<<endl;
    }

}

class details //train details
{
    Public :
    int train_no;
    char train_name[100];
    char boarding_point[100];
    char destination[100];
    int class1 , class1fare;
    int class2 , class2fare;
    int dd,mm,yyyy;

    void getdetails()
    {
        cout<<"Enter the Train Number : ";
        cin>>train_no;
        cout<<"\nEnter the Train Name : ";
        cin>>train_name;
        cout<<"\nEnter the Boarding Point : ";
        cin>>boarding_point;
        cout<<"\nEnter the destiantion : ";
        cin>>destination;
        cout<<"\nEnter the Number of seats in VIP Class : ";
        cin>>class1;
        cout<<"\nEnter the Fare of VIP class : ";
        cin>>class1fare;
        cout<<"\nEnter the Number of seats in General Class : ";
        cin>>class2;
        cout<<"\nEnter the Fare of VIP class : ";
        cin>>class2fare;
        cout<<"\nEnter the date : ";
        cin>>dd;
        cout<<"\nEnter the month : ";
        cin>>mm;
        cout<<"\nEnter the year : ";
        cin>>yyyy;
    }
    void display_details()
    {
        cout<<"Train No. : \nTrain Name : \nBoarding point : \nDesination : "<<train_no<<train_name<<boarding_point<<destination;
        cout<<"\nNumber of seats in VIP class : \nFare of VIP Class : \nNumber of seats in General class : \nFare of General class : "<<class1<<class1fare<<class2<<class2fare;
        cout<<"\nDate of Departaure : "<<dd<<"/"<<mm<<"/"<<yyyy;
    }

}

class reservation()
{
    public :
    int passenger_no;
    int train_no;
    char trian_name[100];
    char boarding_point[100];
    char destination[100];
    char passenger_name[100];
    int age[20];
    char classes[100];
    int i;
    int dd,mm,yyyy;
    int nos;
    char category[200];
    int payment;

    void get_reservation()
    {
        cout<<"Enter the Passenger Number : ";
        cin>>passenger_no;
        cout<<"\nEnter the Train Number : ";
        cin>>train_no;
        cout<<"\nEnter the Boarding Point : ";
        cin>>boarding_point;
        cout<<"\nEnter the destiantion : ";
        cin>>destination;
        cout<<"\nEnter the Passenger Name : ";
        cin>>passenger_name;
        cout<<"\nEnter the Age of passenger : ";
        cin>>age;
        cout<<"\nEnter the Classes : ";
        cin>>classes;
        cout<<"\nEnter the date : ";
        cin>>dd;
        cout<<"\nEnter the month : ";
        cin>>mm;
        cout<<"\nEnter the year : ";
        cin>>yyyy;
        for()
    }



}
