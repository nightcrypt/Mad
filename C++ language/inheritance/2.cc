#include <iostream>
using namespace std;

class company
{
    private :
    char cmp_name[100];
    char web[100];
    char city[100];
    char country[100];
    char address[100];
    int pin;

    public :
    void cmp_details()
    {
        cout<<"Enter the Company Name : ";
        cin.getline(cmp_name,100);
        cout<<"Enter the Website of Company : ";
        cin.ignore();
        cin.getline(web,100);
        cout<<"Enter the city of company ";
        cin.ignore();
        cin.getline(city,100);
        cout<<"Enter the country of company : ";
        cin.ignore();
        cin.getline(country,100);
        cout<<"Enter the address : ";
        cin.ignore();
        cin.getline(address,100);
        cout<<"PINCODE : ";
        cin>>pin;

    }

    void cmp_display()
    {
        cout<<"Company Name = "<<cmp_name<<endl<<"Website = "<<web<<endl;
        cout<<"Address Of company = "<<address<<","<<city<<","<<country<<","<<pin<<endl;

    }
};

class employee : public company,public contact_details
{
    private :
    int id;
    char name[100];
    int d,m,y;
    int dd,mm,yy;
    char address[100];
    char city[100];
    char country[100];
    int pin;

    public :
    void emp_details()
    {
        cout<<"Enter the Employee id : ";
        cin>>id;
        cout<<"Enter the employee name : ";
        cin.getline(name.100);
        cout<<"Enter the Date of birth : \n";
        cin>>d>>m>>y;
        cout<<"Enter the date of joining : \n";
        cin>>dd>>mm>>yy;
        cout<<"Enter the city : ";
        cin.ignore();
        cin.getline(city,100);
        cout<<"Enter the country : ";
        cin.ignore();
        cin.getline(country,100);
        cout<<"Enter the address : ";
        cin.ignore();
        cin.getline(address,100);
        cout<<"Enter the Pincode : ";
        cin>>pin;
        contat_details();
        cmp_details();
    }

    void emp_display
    {
        cout<<"ID = "<<id<<endl<<"Employee name = "<<name<<endl<<"Date of Birth(d.o.b.) = "<<d<<"/"<<m<<"/"<<y;
        cout<<"Date of Joining(d.o.j.) = "<<dd<<"/"<<mm<<"/"<<yy;
        cout<<"Address = "<<address<<","<<city<<","<<country<<","<<pincode;
        dispaly_contact();
        cmp_display();

    }

};

class contat_details
{
    private :
    char name[100];
    char email[100];
    long contact_no;

    public :
    void contact_detail()
    {
        cout<<"Enter the Contact person name : ";
        cin.getline(name,100);
        cout<<"Enter the Email : ";
        cin.ignore();
        cin.getline(email,100);
        cout<<"Enter the contact Number : ";
        cin>>contact_no;

    }

    void dispaly_contact()
    {
        cout<<"Contact person name = "<<name<<endl<<"Email ID = "<<email;
        cout<<"Contact Number = "<<contact_no<<endl;

    }
    
};

class HR
{
    private :
    long salary;
    long bonus;
    int total;
    int designation;

    public :
    void hr_details()
    {
        emp_details();
        cout<<"Enter the Designation \n1.Manager \n2.Assitant Manager \n3.Clerk \n4.Peon ";
        cin>>designation;
        cout<<"Enter the salary : ";
        cin>>salary;
        cout<<"Enter the bonus : ";
        cin>>bonus;
        
    }

    void hr_display()
    {
        emp_display();
        cout<<"Designation = "<<designation<<endl
        total=salary+bonus;
        cout<<"Total of HR = "<<total<<endl;
    }

};

class sales
{
    private :
    long salary;
    long bonus;
    int total;
    int designation;

    public :
    void sales_details()
    {
        emp_details();
        cout<<"Enter the Designation \n1.Manager \n2.Assitant Manager \n3.Clerk \n4.Peon ";
        cin>>designation;
        cout<<"Enter the salary : ";
        cin>>salary;
        cout<<"Enter the bonus : ";
        cin>>bonus;
        
    }

    void sales_display()
    {
        emp_display();
        cout<<"Designation = "<<designation<<endl
        total=salary+bonus;
        cout<<"Total of Sales = "<<total<<endl;
    }

};

int main (){
    int choice;
    HR h1;
    sales s1;
    do{
    cout<<"~~~Company mangament system~~~\n";
    cout<<"1.Enter Details for Hr Departmaent\n";
    cout<<"2.ENter Details for sales Department\n";
    cout<<"3.HR Departmant Employee details\n";
    cout<<"4.Sales Department Employee details\n";
    cout<<"5.Exit\n";
    cout<<"Enter your choice : ";
    cin>>choice;
    switch(choice)
    case 1 : h1.hr_details();
    break;
    case 2 : s1.sales_details();
    break;
    case 3 : h1.hr_display();
    break;
    case 4 : s1.sales_display();
    break;
    case 5 : cout<<"\n~~Thanks for chossing~~\n";
    break;
    default : cout<<"Invalid command";
    break;
    }while (choice!=5);

    return 0;
}