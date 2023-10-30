#include <iostream>
using namespace std;

class showroom 
{
    private :
    string showroom_name;
    string manager_name;
    string city;
    string state;
    string address;
    int plot_no;
    int totl_employee;
    int totl_car;
    

    public :
    void shrm_details()
    {
        cout<<"Enter the Showroom Name : ";
        cin.ignore();
        getline(cin,showroom_name);
        cout<<"Enter the name of Manager of showroom : ";
        cin.ignore();
        getline(cin,manager_name);
        cout<<"Enter the name of City : ";
        cin.ignore();
        getline(cin,city);
        cout<<"Enter the name of State : ";
        cin.ignore();
        getline(cin,state);
        cout<<"Enter the Plot Number : ";
        cin.ignore();
        cin>>plot_no;
        cout<<"Enter the address : ";
        cin.ignore();
        getline(cin,address);
        cout<<"Enter the Total number of employee in showroom : ";
        cin>>totl_employee;
        cout<<"Enter the Total number of car in showroom : ";
        cin>>totl_car;
    }

    void shrm_display()
    {
        cout<<"Showroom Name = "<<showroom_name<<endl<<"Manager Name = "<<manager_name<<endl;
        cout<<"Address = "<<plot_no<<address<<","<<city<<","<<state<<endl;
        cout<<"Total Number of Employee = "<<totl_employee<<endl;
        cout<<"Total Number of Car = "<<totl_car<<endl;
    }
  
};

class Employee : public showroom
{
    private :
    int id;
    string emp_name;
    int department;
    int age;
    int i;

    public :
    void emp_details()
    {
        cout<<"Enter the Employee ID : ";
        cin>>id;
        cout<<"Enter the Employee Name : ";
        cin.ignore();
        getline(cin,emp_name);
        cout<<"Enter the Age of Employee : ";
        cin>>age;
        cout<<"Enter the Department of Employee : "<<endl;
        cout<<"1.Sales\n";
        cout<<"2.HR\n";
        cout<<"3.Service\n";
        cout<<"4.Other staff\n";
        cin>>department; 
    }

    void emp_display()
    {
        cout<<"Employee ID = "<<id<<endl<<"Employee Name = "<<emp_name<<endl;
        cout<<"Employee Age = "<<age<<endl;
        cout<<"~~~~Departments~~~\n1.Sales\n2.HR\n3.Service\n4.Other staff\nEmployee department = "<<department<<endl;
    }
};

class availCar : public showroom
{
    private : 
    string carName;
    int color;
    int fuelType;
    long price;
    int carType;
    int carTransmission;

    public : 
    void car_details()
    {
        cout<<"Enter the car Name : ";
        cin.ignore();
        getline(cin,carName);
        cout<<"Enter the Color of Car : "<<endl;
        cout<<"1.Black\n";
        cout<<"2.White\n";
        cin>>color;
        cout<<"Enter the fuel type : "<<endl;
        cout<<"1.Petrol\n";
        cout<<"2.Deseal\n";
        cout<<"3.Electric\n";
        cout<<"4.CNG\n";
        cin>>fuelType;
        cout<<"Enter the Car type : "<<endl;
        cout<<"1.Maruti suzuki\n";
        cout<<"2.Ford\n";
        cout<<"3.Toyota\n";
        cout<<"3.Tata\n";
        cin>>carType;
        cout<<"Enter the Car Transmission : "<<endl;
        cout<<"1.Manual\n";
        cout<<"2.automatic\n";
        cin>>carTransmission;
        cout<<"Enter the price of car : ";
        cin>>price;
    }

    void car_display()
    {
        cout<<"Car Name = "<<carName<<endl;
        cout<<"~~~Colour~~~\n1.Black\n2.White\nSelected Colour  = "<<color<<endl;
        cout<<"~~~Fuel Type~~~\n1.Petrol\n2.Deseal\n3.Electric\n4.CNG\nSelected Type = "<<fuelType<<endl;
        cout<<"~~~Car Type~~~\n1.Maruti Suzuki\n2.Ford\n3.Toyota\n4.Tata\nSelected Type = "<<carType<<endl;
        cout<<"~~~Car Transmission~~~\n1.Manual\n2.Automatic = "<<carTransmission<<endl;
        cout<<"Price of car = "<<price<<endl;
    }
};

int main() {
    Employee e1[5];
    availCar c1[5];
    int choice;

    do {
        cout << "\n~~~~Car Showroom Management System~~~~~\n";
        cout << "1. Add Showroom\n";
        cout << "2. Add Employee\n";
        cout << "3. Add Car\n";
        cout << "4. Display Showroom Details\n";
        cout << "5. Display Employee\n";
        cout << "6. Display Car\n";
        cout << "7. Display all details\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "\n";

        switch (choice) {
            case 1:
                e1[0].shrm_details(); 
                break;
            case 2:
                e1[0].emp_details(); 
                break;
            case 3:
                c1[0].car_details(); 
                break;
            case 4:
                e1[0].shrm_display(); 
                break;
            case 5:
                e1[0].emp_display(); 
                break;
            case 6:
                c1[0].car_display(); 
                break;
            case 7:
                for (int i = 0; i < 5; ++i) {
                    e1[i].shrm_display();
                    e1[i].emp_display();
                    c1[i].car_display();
                    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
                }
                break;
            case 8:
                cout << "\n~~Thanks for using Car Showroom Management System~~\n";
                break;
            default:
                cout << "Invalid choice\n";
                break;
        }
    } while (choice != 8);

    return 0;
}
