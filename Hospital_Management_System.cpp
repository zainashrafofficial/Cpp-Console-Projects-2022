#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
class mainn
{
private:
    string name[10], fname[10], adress[10], doctname[10];
    int i = 0;
    long int cnic[10];

    string sname[10], sfname[10], sadress[10], designation[10];
    int o = 0;
    long int scnic[10];

public:
    void main_menu();
    void doct_info();
    void doct_appoint();
    void check_appoint();
    void sav_staf_info();
    void show_staff_info();
};

void mainn ::show_staff_info()
{
    system("CLS");
    string check_name;
    cout << "Check Staff Members Here..\n\n\n";
    cout << "Enter Member Name : ";
    cin.ignore();
    getline(cin, check_name);
    for (int n = 0; n <= o; n++)
    {
        if (check_name == sname[o])
        {
            cout << "\n\nYour Name is : " << sname[o];
            cout << "\n\nYour Father Name is : " << sfname[o];
            cout << "\n\nYour CNIC No. is : " << scnic[o];
            cout << "\n\nYour Address is : " << sadress[o];
            cout << "\n\nThe Designation of this Member is : " << designation[o];
            cout << "\n\n\nPress any Key to Continue. " << getch();
        }
    }
}

/*=====================================================================================================*/
void mainn ::sav_staf_info()
{
    system("CLS");
    cout << "     Adding Staff Informations\n\n\n";
    cout << "Enter Your Name : ";
    cin.ignore();
    getline(cin, sname[i]);
    cout << "\nEnter Your Father Name : ";
    getline(cin, sfname[i]);
    cout << "\nEnter Your CNIC No. : ";
    cin >> scnic[10];
    cout << "\nEnter Your Address : ";
    cin.ignore();
    getline(cin, sadress[i]);
    cout << "\nEnter Designation : ";
    getline(cin, designation[i]);
    cout << "\n\nOkay. New Staff Member Data is Stored Successfully... ";
    cout << "\n\nPress Any Key To Continue. " << getch();
    o++;
}

/*======================================================================================================*/
void mainn ::check_appoint()
{
    system("CLS");
    string check_name;
    cout << "Check Appointments Here..\n\n\n";
    cout << "Enter Your Name : ";
    cin.ignore();
    getline(cin, check_name);
    for (int n = 0; n <= i; n++)
    {
        if (check_name == name[n])
        {
            cout << "\n\nYour Name is : " << name[n];
            cout << "\n\nYour Father Name is : " << fname[n];
            cout << "\n\nYour CNIC No. is : " << cnic[n];
            cout << "\n\nYour Address is : " << adress[n];
            cout << "\n\nThe Doctor You Choose is : " << doctname[n];
            cout << "\n\n\nPress any Key to Continue. " << getch();
        }
    }
}

/*=========================================================================================================*/

void mainn ::doct_appoint()
{
    system("CLS");
    cout << "               =====DOCTOR APPOINTMENTS=====\n\n\n";
    cout << "Enter Your Name : ";
    cin.ignore();
    getline(cin, name[i]);
    cout << "\nEnter Your Father Name : ";
    getline(cin, fname[i]);
    cout << "\nEnter Your CNIC No. : ";
    cin >> cnic[10];
    cout << "\nEnter Your Address : ";
    cin.ignore();
    getline(cin, adress[i]);
    cout << "\nEnter Doctor Name : ";
    getline(cin, doctname[i]);
    cout << "\n\nOkay. Your Appointment Is Approved. ";
    cout << "\n\nPress Any Key To Continue. " << getch();

    i++;
}

/*===========================================================================================================*/
void mainn ::doct_info()
{
    system("CLS");
    cout << "____________________________________DOCTORS INFORMATION____________________________________\n\n\n"
         << "===========================================================================================\n"
         << "                                     Dr. Iftikhar Ahmad                                    \n"
         << "                                     (Heart Specialist)                                    \n"
         << "\nTimings:\n"
         << "\n     Monday to Friday                                            2PM to 10PM             \n"
         << "\n     Saturday                                                    8AM to 1PM              \n"
         << "\n     Sunday                                                      8AM to 9PM            \n\n";

    cout << "===========================================================================================\n"
         << "                                     Dr. Mazhar Iqbal                                      \n"
         << "                                    (Child Specialist)                                    \n"
         << "\nTimings:\n"
         << "\n     Monday to Friday                                            2PM to 10PM             \n"
         << "\n     Saturday                                                    8AM to 1PM              \n"
         << "\n     Sunday                                                      8AM to 9PM            \n\n";

    cout << "===========================================================================================\n"
         << "                                     Dr. Haroon Rasheed                                    \n"
         << "                                    (Stomach Specialist)                                   \n"
         << "\nTimings:\n"
         << "\n     Monday to Friday                                            2PM to 10PM             \n"
         << "\n     Saturday                                                    8AM to 1PM              \n"
         << "\n     Sunday                                                      8AM to 9PM            \n\n";

    cout << "Press Any Key To Continue " << getch();

    // getch();
}

/*===========================================================================================================*/
void mainn ::main_menu()
{
    int opt;
    do
    {
        system("CLS");
        cout << "\t\t--------------------------------------------------------\n";
        cout << "\t\t||===============CITY HOSPITAL BUREWALA===============||\n";
        cout << "\t\t--------------------------------------------------------\n";
        cout << "\n\n\n";
        cout << "1. Available Doctor Information.\n\n";
        cout << "2. Doctor Appointment.\n\n";
        cout << "3. Checking Patient's Appointment.\n\n";
        cout << "4. Saving Staff Information\n\n";
        cout << "5. Checking Staff's Information\n\n";
        cout << "6. Exit.\n\n\n";
        cout << "\t\tWhich Option You Want to Select : ";
        cin >> opt;
        switch (opt)
        {
        case 1:
            doct_info();
            break;

        case 2:
            doct_appoint();
            break;

        case 3:
            check_appoint();
            break;

        case 4:
            sav_staf_info();
            break;

        case 5:
            show_staff_info();
            break;

        default:
            cout << "Invalid Number.\n";
            cout << "Please Choose Correct Option. ";
            getch();
        }

    } while (opt != 6);
}

/*===========================================================================================================*/

int main()
{
    system("CLS");
    mainn M;
    M.main_menu();
}