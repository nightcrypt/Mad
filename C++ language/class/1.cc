#include <iostream>
using namespace std;

class student {
private:
    int roll_no;
    int marks;
    string name;
    string work;

public:
    void details() {
        cout << "Enter the Name of Student : ";
        getline(cin,name);
        cout<<"Enter the work : ";
        getline(cin,work);
        cout << "Enter the Roll No. and Marks of student :"<<endl;
        cin >> roll_no >> marks;
    }
    void display() {
        cout << "Name : " << name << endl;
        cout<<"Work : "<<work<<endl;
        cout << "Roll no. : " << roll_no << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main() {
    student s1;

    s1.details();
    s1.display();

    return 0;
}
