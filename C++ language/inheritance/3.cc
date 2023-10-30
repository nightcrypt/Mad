#include <iostream>
using namespace std;

class ContactDetails {
private:
    char name[100];
    char email[100];
    long contact_no;

public:
    void contact_detail() {
        cout << "Enter the Contact person name: ";
        cin.ignore();
        cin.getline(name, 100);
        cout << "Enter the Email: ";
        cin.getline(email, 100);
        cout << "Enter the contact Number: ";
        cin >> contact_no;
    }

    void display_contact() {
        cout << "Contact person name = " << name << endl;
        cout << "Email ID = " << email << endl;
        cout << "Contact Number = " << contact_no << endl;
    }
};

class Company {
private:
    char cmp_name[100];
    char web[100];
    char city[100];
    char country[100];
    char address[100];
    int pin;

public:
    void cmp_details() {
        cout << "Enter the Company Name: ";
        cin.ignore();
        cin.getline(cmp_name, 100);
        cout << "Enter the Website of Company: ";
        cin.getline(web, 100);
        cout << "Enter the city of company: ";
        cin.getline(city, 100);
        cout << "Enter the country of company: ";
        cin.getline(country, 100);
        cout << "Enter the address: ";
        cin.getline(address, 100);
        cout << "Enter PINCODE: ";
        cin >> pin;
    }

    void cmp_display() {
        cout << "Company Name = " << cmp_name << endl;
        cout << "Website = " << web << endl;
        cout << "Address Of company = " << address << ", " << city << ", " << country << ", " << pin << endl;
    }
};

class Employee : public Company, public ContactDetails {
private:
    int id;
    char name[100];
    int d, m, y;
    int dd, mm, yy;
    char emp_address[100];
    char emp_city[100];
    char emp_country[100];
    int emp_pin;

public:
    void emp_details() {
        cout << "Enter the Employee id: ";
        cin >> id;
        cout << "Enter the employee name: ";
        cin.ignore();
        cin.getline(name, 100);
        cout << "Enter the Date of birth:\n";
        cin >> d >> m >> y;
        cout << "Enter the date of joining:\n";
        cin >> dd >> mm >> yy;
        cout << "Enter the city: ";
        cin.ignore();
        cin.getline(emp_city, 100);
        cout << "Enter the country: ";
        cin.getline(emp_country, 100);
        cout << "Enter the address: ";
        cin.getline(emp_address, 100);
        cout << "Enter the Pincode: ";
        cin >> emp_pin;
        contact_detail();
        cmp_details();
    }

    void emp_display() {
        cout << "ID = " << id << endl;
        cout << "Employee name = " << name << endl;
        cout << "Date of Birth(d.o.b.) = " << d << "/" << m << "/" << y << endl;
        cout << "Date of Joining(d.o.j.) = " << dd << "/" << mm << "/" << yy << endl;
        cout << "Address = " << emp_address << ", " << emp_city << ", " << emp_country << ", " << emp_pin << endl;
        display_contact();
        cmp_display();
    }
};

class HR : public Employee{
private:
    long salary;
    long bonus;
    int total;
    int designation;

public:
    void hr_details() {
        emp_details();
        cout << "Enter the Designation:\n1.Manager\n2.Assistant Manager\n3.Clerk\n4.Peon\n";
        cin >> designation;
        cout << "Enter the salary: ";
        cin >> salary;
        cout << "Enter the bonus: ";
        cin >> bonus;
        total = salary + bonus;
    }

    void hr_display() {
        emp_display();
        cout << "Designation = " << designation << endl;
        cout << "Total of HR = " << total << endl;
    }
};

class Sales : public Employee{
private:
    long salary;
    long bonus;
    int total;
    int designation;

public:
    void sales_details() {
        emp_details();
        cout << "Enter the Designation:\n1.Manager\n2.Assistant Manager\n3.Clerk\n4.Peon\n";
        cin >> designation;
        cout << "Enter the salary: ";
        cin >> salary;
        cout << "Enter the bonus: ";
        cin >> bonus;
        total = salary + bonus;
    }

    void sales_display() {
        emp_display();
        cout << "Designation = " << designation << endl;
        cout << "Total of Sales = " << total << endl;
    }
};

int main() {
    int choice;
    HR h1;
    Sales s1;

    do {
        cout << "\n~~~Company Management System~~~\n";
        cout << "1. Enter Details for HR Department\n";
        cout << "2. Enter Details for Sales Department\n";
        cout << "3. HR Department Employee details\n";
        cout << "4. Sales Department Employee details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<"\n";

        switch (choice) {
            case 1:
                h1.hr_details();
                break;
            case 2:
                s1.sales_details();
                break;
            case 3:
                h1.hr_display();
                break;
            case 4:
                s1.sales_display();
                break;
            case 5:
                cout << "\n~~Thanks for choosing~~\n";
                break;
            default:
                cout << "Invalid command" << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}
