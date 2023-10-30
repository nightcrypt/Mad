#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Login {
public:
    char id[100];
    char password[100];

    void getid() {
        cout << "Enter the username: ";
        cin >> id;
        cout << "\nEnter the password: ";
        cin >> password;
    }

    void display_login() {
        cout << "Your Username is: " << id << endl;
        cout << "Your password is: " << password << endl;
    }
};

class Details {
public:
    int train_no;
    char train_name[100];
    char boarding_point[100];
    char destination[100];
    int class1, class1fare;
    int class2, class2fare;
    int dd, mm, yyyy;

    void getdetails() {
        cout << "Enter the Train Number: ";
        cin >> train_no;
        cout << "\nEnter the Train Name: ";
        cin.ignore();
        cin.getline(train_name, 100);
        cout << "\nEnter the Boarding Point: ";
        cin.ignore();
        cin.getline(boarding_point, 100);
        cout << "\nEnter the destination: ";
        cin.ignore();
        cin.getline(destination, 100);
        cout << "\nEnter the Number of seats in VIP Class: ";
        cin >> class1;
        cout << "\nEnter the Fare of VIP class: ";
        cin >> class1fare;
        cout << "\nEnter the Number of seats in General Class: ";
        cin >> class2;
        cout << "\nEnter the Fare of General class: ";
        cin >> class2fare;
        cout << "\nEnter the date: ";
        cin >> dd;
        cout << "\nEnter the month: ";
        cin >> mm;
        cout << "\nEnter the year: ";
        cin >> yyyy;
    }

    void display_details() {
        cout << "Train No.: " << train_no << "\nTrain Name: " << train_name << "\nBoarding point: " << boarding_point << "\nDestination: " << destination;
        cout << "\nNumber of seats in VIP class: " << class1 << "\nFare of VIP Class: " << class1fare << "\nNumber of seats in General class: " << class2 << "\nFare of General class: " << class2fare;
        cout << "\nDate of Departure: " << dd << "/" << mm << "/" << yyyy << endl;
    }
};

class Reservation : public Details {
public:
    int passenger_no;
    char passenger_name[20][100]; // Array for multiple passengers
    int age[20];                   // Array for ages
    char classes[100];
    char cat[100];
    int nos; // Number of seats
    int i;   // Loop variable

    void get_reservation() {
        cout << "Enter the Details" << endl;
        cout << "\nEnter the Passenger Number: ";
        cin >> passenger_no;
        display_details();
        cout << "\nEnter the number of seats: ";
        cin >> nos;

        for (i = 0; i < nos; i++) {
            cout << "Passenger Name: ";
            cin.ignore();
            cin.getline(passenger_name[i], 100);
            cout << "Age: ";
            cin >> age[i];
        }

        cout << "\nEnter the Classes: ";
        cin.ignore();
        cin.getline(classes, 100);
        cout << "\nEnter the date: ";
        cin >> dd;
        cout << "\nEnter the month: ";
        cin >> mm;
        cout << "\nEnter the year: ";
        cin >> yyyy;
        cout << "\nEnter the concession category: ";
        cout << "\n1. Military\n2. PwD\n3. Senior citizen\n4. None\n";
        cin >> cat;
        cout << "~~~~Thanks for Details~~~~~~" << endl;
    }

    void display_reservation() {
        cout << "Reservation Details:" << endl;
    }
};

void database();
void user();
void reserve();
void cancel();
void enquiry();
void newUser();

int main() {
    Login l1;
    int ch;
    cout << "----- RAILWAY RESERVATION SYSTEM -----\n";
    do {
        cout << "\n MAIN MENU \n";
        cout << "1.Admin mode\n2.User mode\n3.New User Sign Up\n4.Exit \n";
        cout << "Enter your choice : ";
        cin >> ch;
        switch (ch) {
            case 1:
                database();
                break;
            case 2:
                user();
                break;
            case 3:
                newUser();
                cout << "Thanks For Choosing us";
                break;
            default:
                exit(0);
        }
    } while (ch <= 3);

    return 0;
}

void database() {
    int ch;
    char c;
    Details d1;
    fstream f1;
    fstream f2;
    Login l1;
    char password[10] = "admin";
    char input_password[10];
    cout << "Enter Admin Password: ";
    cin >> input_password;

    if (strcmp(input_password, password) != 0) {
        cout << "Incorrect password. Access denied.\n";
        return;
    }

    do {
        cout << "\n --- ADMINISTRATOR MENU --- \n";
        cout << "1. Add Train details \n";
        cout << "2. Display Train details \n";
        cout << "3. User Management \n";
        cout << "4. Modify Train Details \n";
        cout << "5. Delete Train Details \n";
        cout << "6. Display Passenger details \n";
        cout << "7. Return to Main Menu \n";
        cout << "Enter your choice : ";
        cin >> ch;

        switch (ch) {
            case 1:
                f1.open("train_details.txt", ios::out | ios::binary);
                do {
                    d1.getdetails();
                    f1.write((char *)&d1, sizeof(d1));
                    cout << "Do you want to add a new record? (y/n): ";
                    cin >> c;
                } while (c == 'y');
                f1.close();
                break;
            case 2:
                f1.open("train_details.txt", ios::in | ios :: out | ios::binary);
                while (f1.read((char *)&d1, sizeof(d1))) {
                    cout<<"\n";
                    d1.display_details();
                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                }
                f1.close();
                break;
            case 3:
                f1.open("id.txt", ios::in | ios::out | ios::binary);
                f1.seekg(0);
                while (f1.read((char *) &l1, sizeof(l1))) {
                    l1.display_login();
                }
                f1.close();
                break;
            case 4:
                f1.open("train_details.txt", ios::in| ios::out| ios::binary);
                while (f1.read((char *)&d1, sizeof(d1))) {
                    cout<<"\n";
                    d1.display_details();
                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                }
                do {
                    int newTrain;
                    cout << "Enter the Train Number you want to Modify : ";
                    cin >> newTrain;
                    cout << "\n";
                    while (!f1.read((char *)&d1, sizeof(d1)).eof()) {
                        if (newTrain == d1.train_no) {
                            //f1.seekp(ios::cur);
                            d1.getdetails();
                            f1.write((char *)&d1, sizeof(d1));
                            
                        } else {
                            cout << "Enter the Correct Train No." << endl;
                            //goto x;
                        }
                    }
                    cout << "Do you want to continue y/yes n/no : ";
                    cin >> c;
                    cout << "\n";
                } while (c == 'y');
                f1.close();
                break;
            case 5:
                f1.open("train_details.txt", ios::in | ios::binary);
                f2.open("temp.txt", ios::out | ios::binary | ios::app);
                while (f1.read((char *)&d1, sizeof(d1))) {
                    cout<<"\n";
                    d1.display_details();
                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                }
                do {
                    int newTrain;
                    cout << "Enter the Train Number you want to Delete : ";
                    cin >> newTrain;
                    cout << "\n";
                    while (f1.read((char *)&d1, sizeof(d1))) {
                        if (newTrain != d1.train_no) {
                            f2.write((char *)&d1, sizeof(d1));
                        }
                    }
                    f1.close();
                    f2.close();
                    remove("train_details.txt");
                    rename("temp.txt", "train_details.txt");
                } while (c == 'y');
                break;
        }
    } while (ch != 7);
}

void user() {
    Login l1;
    char ch;
    char userId[10];
    char password[100];
    fstream f1;

    cout << "~~~~LOGIN USER~~~~~\n";
    f1.open("id.txt", ios::in | ios::binary);

    cout << "Enter the id : ";
    cin >> userId;
    cout << "Enter the password : ";
    cin >> password;

    while (f1.read((char *)&l1, sizeof(l1))) {
        if (strcmp(l1.id, userId) == 0 && strcmp(l1.password, password) == 0) {
            do {
                cout << "1.Reserve" << endl;
                cout << "2.Cancel" << endl;
                cout << "3.Enquiry" << endl;
                cout << "4.Return to Previous Menu" << endl;
                cout << "Enter your Choice : ";
                cin >> ch;
                cout << "\n";

                switch (ch) {
                    case 1:
                        // reserve();
                        break;
                    case 2:
                        // cancel();
                        break;
                    case 3:
                        // enquiry();
                        break;
                }

            } while (ch <= 3);
        } else {
            cout << "Incorrect Id and password\n";
        }
    }
    f1.close();
}

void newUser() {
    Login l1;
    fstream f;
    f.open("id.txt", ios::out  | ios::app);
    l1.getid();
    f.write((char *)&l1, sizeof(l1));
    f.close();
}
