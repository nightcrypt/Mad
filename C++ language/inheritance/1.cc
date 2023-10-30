#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    char name[100];

public:
    void getData() {
        cout << "Enter the ID: ";
        cin >> id;
        cout << "Enter the Name: ";
        cin.ignore(); 
        cin.getline(name, 100);
    }

    void display() {
        cout << "ID = " << id << endl;
        cout << "Name = " << name << endl;
    }
};

class Manager : public Employee {
private:
    long total;
    long salary;
    long bonus;
    char department[100];

public:
    void details() {
        getData();
        cout << "Enter the Department: ";
        cin.ignore(); 
        cin.getline(department, 100);
        cout << "Enter the Salary and Bonus: \n";
        cin >> salary >> bonus;
    }

    void display_1() {
        display();
        cout << "Department = " << department << endl;
        total = salary + bonus;
        cout << "Total Salary = " << total << endl;
    }
};

int main() {
    Manager m1;
    m1.details();
    m1.display_1();

    return 0;
}
