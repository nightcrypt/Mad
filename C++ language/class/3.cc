#include <iostream>
using namespace std;

class employee
{
    private :
    int id;
    string name;
    string designation;

    public :

    void setdata()
    {
        cout<<"Enter the employee id :";
        cin>>id;
        cout<<"Enter the Name of employee : ";
        getline(cin,name);
        cout<<"Enter the designation : ";
        getline(cin,designation);
        
    }
    void getdata()



}