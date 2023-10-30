#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
#include<stdio.h>
using namespace std;

class login
{
    public:
    char id[40], password[40];

    void getid()
    {
        cout<<"\nEnter your id=";
        cin>>id;
        cout<<"\nEnter your password=";
        cin>>password;
    }

    void displayid()
    {
        cout<<"\nYour login id is="<<id;
        cout<<"\nYour password is= "<<password;
    }
};

class detail
{
    public: int train_no,cla,d,m,y;
    char train_name[40],boarding[40],destination[40];
    
    public:
    void getdetails()
    {
        cout<<"\nEnter the train number= ";
        cin>>train_no;
        cout<<"\nEnter the train name= ";
        cin>>train_name;
        cout<<"\nEnter the train boarding place= ";
        cin>>boarding;
        cout<<"\nEnter the train destination= ";
        cin>>destination;
        cout<<"\n1. Class 1";
        cout<<"\n2. Class 2";
        cout<<"\nEnter your choice= ";
        cin>>cla;
        cout<<"\nEnter the date (DD/MM/YYYY)= ";
        cin>>d>>m>>y;
    }

    void displaydetails()
    {
        cout<<"\nThe train number is= "<<train_no;
        cout<<"\nThe train name is= "<<train_name;
        cout<<"\nThe train boarding place is= "<<boarding;
        cout<<"\nThe train destination is= "<<destination;
        cout<<"\nYour class is= "<<cla;
        cout<<"\nThe date is= "<<d<<"/"<<m<<"/"<<y;
    }
};

class reservation
{
    fstream f1;
    public: int train_n, cla, c1fai, c2fai, ch, people, i, age[20], payment, category;
    char train_name[40], boarding[30], destination[30];
    string name[30];
    public: void getreservation()
    {
        cout<<"\nEnter the Train No.= ";
        cin>>train_n;
        cout<<"\nEnter the Train name= ";
        cin>>train_name;
        cout<<"\nEnter the boarding point= ";
        cin>>boarding;
        cout<<"\nEnter the destination point= ";
        cin>>destination;
        cout<<"\nEnter the number of people= ";
        cin>>people;

        for(i=1; i<=people; i++)
        {
            cout<<"\nEnter the passenger name= ";
            cin>>name[i];
            cout<<"\nEnter the age= ";
            cin>>age[i];
        }

        cout<<"\nCharges for first class is 100 rupees per person";
        cout<<"\nCharges for second class is 50 rupees per person";
        cout<<"\nEnter the class (1/2): ";
        cin>>cla;
        cout<<"\n1. Military (30 rupee discount)";
        cout<<"\n2. Senior (20 rupee discount)";
        cout<<"\n3. Children below 5 years (Free)";
        cout<<"\n4. General (No discount)";
        cout<<"\nEnter your choice: ";
        cin>>category;  
       
    }

    public: void calculation()
    {
        if(cla == 1)
        {
            if(category == 1)
            {
                payment = people * 70;
            }
            else if(category == 2)
            {
                payment = people * 80;
            }
            else if(category == 3)
            {
                payment = 0;
            }
            else
            {
                payment = people * 100;
            }
        }
        else if(cla == 2)
        {
            if(category == 1)
            {
                payment = people * 20;
            }
            else if(category == 2)
            {
                payment = people * 30;
            }
            else if(category == 3)
            {
                payment = 0;
            }
            else
            {
                payment = people * 50;
            }
        }
    }

    public: void displayreservation()
    {
        cout<<"\nThe Train No. is= "<<train_n;
        cout<<"\nThe Train name is= "<<train_name;
        cout<<"\nThe boarding point is= "<<boarding;
        cout<<"\nThe destination point is= "<<destination;
        cout<<"\nThe number of people is= "<<people;

        for(i=1; i<=people; i++)
        {
            cout<<"\nThe passenger name is: "<<name[i];
            cout<<"\nThe age is: "<<age[i];
        }

        cout<<"\nThe class is= "<<cla;
        cout<<"\nThe category is= "<<category;
        cout<<"\nThe total payment is= "<<payment<<" rupees";
    }

    int returnTrainNo()
    {
        return train_n;
    }
};

class cancel
{
    int train_n;
    char train_name[40], boarding[30], destination[30];
    string name[30];
    
    public:
    void getcancel()
    {
        cout<<"\nEnter the Train No.=";
        cin>>train_n;
        cout<<"\nEnter the Train name=";
        cin>>train_name;
        cout<<"\nEnter the boarding point=";
        cin>>boarding;
        cout<<"\nEnter the destination point=";
        cin>>destination;
        cout<<"\nEnter the passenger name=";
        cin>>name[0];
    }

    void displaycancel()
    {
        cout<<"\nThe Train No. is= "<<train_n;
        cout<<"\nThe Train name is= "<<train_name;
        cout<<"\nThe boarding point is= "<<boarding;
        cout<<"\nThe destination point is "<<destination;
        cout<<"\nThe passenger name is: "<<name[0];
    }
};
class database
{
    public:
    void create()
    {
        ofstream f1;
        f1.open("detail.txt",ios::out|ios::binary);
        detail d1;
        d1.getdetails();
        f1.write((char*)&d1,sizeof(d1));
        f1.close();
    }

    void add()
    {
        ofstream f1;
        f1.open("detail.txt",ios::app|ios::binary);
        detail d1;
        d1.getdetails();
        f1.write((char*)&d1,sizeof(d1));
        f1.close();
    }

    void disp()
    {
        ifstream f1;
        f1.open("detail.txt",ios::in | ios::binary);
        detail d1;
        while(f1.read((char*)&d1,sizeof(d1)))
        {
            d1.displaydetails();
        }
        f1.close();
    }

    void user_manage()
    {
        ofstream f1;
        f1.open("id.txt",ios::out | ios::binary);
        login l1;
        l1.getid();
        f1.write((char*)&l1,sizeof(l1));
        f1.close();
    }

    void passanger_detal()
    {
        ofstream f1;
        f1.open("reservation.txt",ios::out |ios::binary);
        reservation r1;
        r1.getreservation();
        r1.calculation();
        f1.write((char*)&r1,sizeof(r1));
        f1.close();
    }
    void displ()
    {
        fstream f1;
        login l1;
        while(f1.read((char*)&l1,sizeof(l1)))
        {
        f1.open("id.txt",ios::out);
        l1.displayid();
        f1.close();
        }
    }
};
int main()
{
    class cancel c;
    class login l1;
    fstream f1;
    class database data;
    int m_ch, m2_cho, j, x, m2_choise, y,flag=0;
    char pass1[20], mainme, admdo, id_user[20], pass_user[30];
    string pass = "admin";

    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"....WELCOME TO RAILWAY RESERVATION SYSTEM....\n";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    do
    {
        cout << "\n1. Administration Mode";
        cout << "\n2. User Mode";
        cout << "\n3. Exit";
        cout << "\nEnter your choice=";
        cin >> m_ch;

        if (m_ch == 1)
        {
            cout << "\nEnter your password=";
            cin >> pass1;
            j = pass.compare(pass1);

            if (j == 0)
            {
                do
                {
                    cout << "\n1. Create";
                    cout << "\n2. Add";
                    cout << "\n3. Display";
                    cout << "\n4. User Management";
                    cout << "\n5. Passenger Details";
                    cout << "\n6. Exit";
                    cout << "\nEnter your choice=";
                    cin >> m2_cho;

                    switch (m2_cho)
                    {
                        case 1:
                            data.create();
                            break;
                        case 2:
                            data.add();
                            break;
                        case 3:
                            data.disp();                            
                            break;
                        case 4:
                            data.user_manage();
                            break;
                        case 5:
                            data.passanger_detal();
                            break;
                        case 7:
                            exit(0);
                            break;
                        case 6: 
                        f1.open("id.txt",ios::out);
                        data.displ();
                        f1.close();
                        break;
                        default:
                            cout << "\nInvalid choice";
                            break;
                    }

                    cout << "\nDo you want to go to the administration mode (y/n): ";
                    cin >> admdo;
                } while (admdo == 'y');
            }
        }
        else if (m_ch == 2)
        {
            cout << "\nEnter your id=";
            cin >> id_user;
            cout << "\nEnter your password=";
            cin >> pass_user;

            f1.open("id.txt", ios::in);

            while(f1.read((char*)&l1,sizeof(l1)))
                {
                    l1.displayid();
                
                    if((strcmp(l1.id,id_user)==0 )&& (strcmp(l1.password,pass_user)==0))
                    {
                    flag=1;
                    cout << "\n1. Reservation";
                    cout << "\n2. Cancel";
                    cout << "\n3. Exit";
                    cout << "\nEnter your choice=";
                    cin >> m2_choise;

                    switch (m2_choise)
                    {
                        case 1:
                        {
                            f1.open("reservation.txt",ios:: app);
                            reservation r;
                            r.getreservation();
                            f1.write((char*)&r,sizeof(r));
                            r.calculation();
                            r.displayreservation();
                            break;
                        }
                        case 2:
                        {
                            cancel c;
                            c.getcancel();
                            c.displaycancel();
                            break;
                        }
                        case 3:
                            exit(0);
                            break;
                        default:
                            cout << "\nInvalid choice";
                            break;
                    }
                }
            }
            
            f1.close();

            if (flag!=1)
            {
                cout << "\nInvalid id or password. Please try again.";
            }
        }

        cout << "\nDo you want to go to the main menu (y/n)=";
        cin >> mainme;
    } while (mainme == 'y');

    return 0;
}
