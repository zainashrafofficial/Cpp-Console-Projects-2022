#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>
using namespace std;
COORD coord = {0, 0};
void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
class hotel
{
private:
public:
    int roomno, roomid, room;
    string fullname,cnic,roomtype;
    void start_menu();
    void add_room_record();
    void display_room_record();
    void delete_room_record();
};

void hotel :: add_room_record()
{
    system("cls");
    cout << "\t          ***********************\n\n";
    cout << "\t             New Entry of Room   \n\n";
    cout << "\t          ***********************\n\n\n";
    cout << "Enter Your Full Name : ";
    cin.ignore();
    getline(cin, fullname);
    cout << "\nEnter Room ID : ";
    cin >> roomid;
    cout << "\nEnter Room N.o : ";
    cin >> roomno;
    cout<<"\nEnter Your CNIC N.o : ";
    cin.ignore();
    getline(cin,cnic);
    cout << "\nThere are Two Types of Room ' 1) Simple ' or ' 2) Luxury ' \n";
    cout << "\nWhich Type You Want : ";
    cin >> room;
    if ( room == 1 )
    {
        roomtype = " Simple";
    }
    else 
    roomtype = "\"Luxury\"";
    cout << "\nCongratulations!  Your Room Is Ready Now. \n";
    getch();
}

void hotel ::display_room_record()
{
    system ("CLS");
    cout<<"\t             ********************Room Records********************";
    cout<<"\n\nFollowing are the Details of Room you Previously Created...";
    cout<<"\n\n\nName of Owner of Room is : "<<fullname;
    cout<<"\n\nRoom ID is : "<<roomid;
    cout<<"\n\nRoom No. is :"<<roomno;
    cout<<"\n\nCNIC No. of Room Owner is : "<<cnic;
    cout<<"\n\nThe type of Room you select is : "<<roomtype<<endl;
    getch();
}

void hotel :: delete_room_record()
{
    fullname = "";
    roomid = 0;
    roomno = 0;
    cnic = "";
    roomtype = "";
    system ("CLS");
    cout<<" \t          *************Deleting Room Data*************";
    cout<<"\n\nOkay!\n\nThe Room you previously created is Deleted Now."<<endl;
    getch();
}

void hotel ::start_menu()
{
    int choice;
    do
    {
        system("Cls");
        cout << "                                   Main Menu                                       \n";
        cout << "        ********************       ---------      *********************          \n\n";
        cout << "         Flame & Coal Hotel                         Main Lahore Road               \n";
        cout << "             Burewala                              Near Punjab College           \n\n";
        cout << "        ********************                      *********************    \n\n\n\n\n";
        cout << "                          1.  Add Room Records\n\n";
        cout << "                          2.  Display Room Records\n\n";
        cout << "                          3.  Delete Room Records\n\n";
        cout << "                          4.  Exit\n\n";
        cout << "                             Select Your Choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            add_room_record();
            break;

        case 2:
            display_room_record();
            break;

        case 3:
            delete_room_record();
            break;

        case 4:
            system("CLS");
            cout << "            ********************************\n";
            cout << "\n\n             Thanks For Visiting this Hotel\n\n\n";
            cout << "            ********************************\n\n";
            getch();
            exit(0);
        }
    } while (choice != 4);
}
int main()
{
    system("CLS");
    hotel obj;
    obj.start_menu();
}