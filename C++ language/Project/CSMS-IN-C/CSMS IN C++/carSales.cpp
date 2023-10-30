#include<dos.h>
#include<string.h>
#include<fstream>
#include<iostream>
#include<stdio.h>
#include<process.h>
using namespace std;


class car_sale_system
{
    private:
        char car_model[50]; 
        float car_price; 
        int car_use; 
        float car_distance; 
        long car_id_number; 
    public:
        void get_car(); 
        void show_car();
        long retno();
};


void car_sale_system::get_car()
{
    cout<<"Enter car model: "; gets(car_model);
    cout<<"Enter VIN number: "; cin>>car_id_number;
    cout<<"How much do you want to sell your vehicle for?"; cin>>car_price;
    cout<<"How many years has the vehicle been in use?"; cin>>car_use;
    cout<<"Approximate usage of vehicle? (in kilometers)"; cin>>car_distance;
}


void car_sale_system::show_car()
{
    cout<<"\n\nCar model: "; puts(car_model);
    cout<<"VIN number: "<<car_id_number;
    cout<<"\nPrice: "<<car_price;
    cout<<"\nUsage: "<<car_use;
    cout<<"\nDriven for(in kilometers): "<<car_distance;
}


long car_sale_system::retno()
{
    return car_id_number;
}


int main()
{
    system("clear"); 
    
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++";
    cout<<endl;
    cout<<"                       WELCOME TO ITSOURCECODE CAR SALES MANAGEMENT SYSTEM                      ";
    cout<<endl<<"_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++";
    
    system("clear");
   
    ofstream f1; car_sale_system a; int n, ch; char ch1;
    f1.open("car.dat", ios::out|ios::binary);
    cout<<"\nHow many records do you wish to store? "; cin>>n;
    for(int i=0; i<n; i++)
    {
        a.get_car();
        f1.write((char*)&a,sizeof(a));
    }
    f1.close();
   
    do
    {
        system("clear");
        cout<<"\nOption 1: Append";
        cout<<"\nOption 2: Modify";
        cout<<"\nOption 3: Search";
        cout<<"\nOption 4: Delete";
        cout<<"\nOption 5: Display";
        cout<<"\nOption 6: Exit";
        cout<<"\nEnter your choice: "; cin>>ch;
        switch(ch)
        {
            case 1: 
            {
                f1.open("car.dat",ios::app|ios::binary);
                a.get_car();
                f1.write((char*)&a,sizeof(a));
                f1.close();
                break;
            }
            case 2:  
            {
                ofstream f2;
                f2.open("car.dat", ios::out|ios::ate|ios::binary);
                int n1;
                cout<<"\nEnter the record which has to be modified: "; cin>>n1;
                int x=(n1-1)*sizeof(a);
                f2.seekp(x,ios::beg);
                a.get_car();
                f2.write((char*)&a,sizeof(a));
                f2.close();
                break;
            }
            case 3: 
            {
                ifstream f3; int flag=0;
                f3.open("car.dat",ios::in|ios::binary);
                f3.seekg(0,ios::beg);
                long id;
                cout<<"\nEnter VIN number: "; cin>>id;
                while(f3.read((char*)&a,sizeof(a)))
                {
                    if(a.retno()==id)
                    {
                        a.show_car();
                        flag=1;
                    }
                }
                if(flag==0)
                    cout<<"\nID number not found. SORRY!";
                f3.close();
                break;
            }
            case 4: 
            {
                ofstream f41; ifstream f42; long c;
                f42.open("car.dat",ios::in|ios::binary);
                f41.open("newcar.dat",ios::out|ios::app|ios::binary);
                f42.seekg(0,ios::beg);
                cout<<"\nEnter vin number: "; cin>>c;
                while(f42.read((char*)&a,sizeof(a)))
                {
                    if(c!=a.retno())
                    f41.write((char*)&a,sizeof(a));
                }
                remove("car.dat"); rename("newcar.dat","car.dat");
                f41.close(); f42.close();
                break;
            }
            case 5: 
            {
                ifstream f5;
                f5.open("car.dat",ios::in|ios::binary);
                f5.seekg(0,ios::beg);
                while(f5.read((char*)&a,sizeof(a)))
                    a.show_car();
                f5.close();
                break;
            }
            case 6: 
            {
                system("clear");
                cout<<"_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++\n\n";
                cout<<"\n                Thank you for using the ITSOURCECODE CAR SYSTEM!! 				   \n\n";
                cout<<"_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++_++";
                
                exit(0);
            }
        }
        cout<<"\nDo you wish to continue? "; cin>>ch1; 
    }
    while(ch1=='Y'||ch1=='y');
    return 0;
}
