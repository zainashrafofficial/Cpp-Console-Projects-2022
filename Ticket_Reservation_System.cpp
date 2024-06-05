#include <iostream>
#include <conio.h>
using namespace std;
class Bus
{
    int buses,busid[20];
    string desti[20],time[20];
    public:
        void enter_data();
        void display_data();
        void delete_data();
        void booking_ticket();
    
};
void Bus :: enter_data()
{
    system ("CLs");
    cout<<"         ***************Bus Entries***************\n\n\n";
    cout<<"How many Buses you want to Enter : ";
    cin>>buses;
    for ( int i = 0 ; i < buses ; i++)
    {
        system ("CLS");
        cout<<endl<<"\nBus No."<<"("<<i<<")\n";
        cout<<"\nEnter Bus Id : ";
        cin>>busid[i];
        cout<<"\nEnter the Destination : ";
        cin>>desti[i];
        cout<<"\nEnter time of Travel : ";
        cin>>time[i];
        cout<<"\n\nBus Added Successfully.\n";
        getch();
    }
}
void Bus :: display_data()
{
    int dispbus;
    system ("CLS");
    cout<<"         ***************Displaying Bus Entries***************\n\n\n";
    cout<<"Enter the Bus ID which You want to display : ";
    cin>>dispbus;
    cout<<"\n-----------Following are the Details of Bus-----------";
    for (int i = 0 ; i<buses ; i++)
    {
        if(dispbus == busid[i])
        {
            cout<<"\n\n\nBus ID : "<<busid[i];
            cout<<"\n\nThe Destination of Bus is "<<desti[i];
            cout<<"\n\nThe Time Travel of this Bus is "<<time[i];
            getch();
        }
    }

}
void Bus :: delete_data()
{
    int delid;
    system ("CLS");
    cout<<"     ______________Deletion of Bus Data______________\n\n\n";
    cout<<"Which ID You Want to Delete : ";
    cin>>delid;
    for ( int m = 0 ; m<buses ; m++)
    {
        if (delid == busid[m])
        {
        busid[m] = 0;
        desti[m] = "";
        time[m] = "";
        }
    }
    cout<<"\n\nBus ID Deleted Successfully...\n";
    getch();

}
void Bus :: booking_ticket()
{
    system ("CLS");
    long book,CNIC;
    string name,time;
    cout<<" *********Welcome Here For Booking Of Tickets*********";
    cout<<"\n\n\nEnter How Many Tickets You Want to Book : ";
    cin>>book;
    for (int p = 1 ; p <= book ; p++)
    {
        cout<<"\n\nTicket No. : "<<p;
        cout<<"\n\nEnter Your Name : ";
        cin.ignore();
        getline (cin , name);
        cout<<"\nCNIC No. : ";
        cin>>CNIC;
        cout<<"\n\nEnter Time of Bus : ";
        cin.ignore();
        getline (cin ,time);
        cout<<"\n\n\n__________________Thanks for Booking Ticket__________________\n\n\n";
        getch();
    }

}
int main()
{
    int select = 0;
    Bus bus;
    do
    {
    system("CLS");
    cout<<"                -----------------------------------               \n";
    cout<<" ************ | Welcome to Ticet Reservation System | ************\n";
    cout<<"                -----------------------------------               \n";
    cout<<"\n\n\n1. Enter Bus Data";
    cout<<"\n\n2. Display Bus Data";
    cout<<"\n\n3. Delete Bus Data";
    cout<<"\n\n4. Booking of Tickets";
    cout<<"\n\n5. Exit";
    cout<<"\n\n\n\t Which Option you want to select : ";
    cin>>select;
    switch (select)
    {
        case 1:
        bus.enter_data();
        break;

        case 2:
        bus.display_data();
        break;

        case 3:
        bus.delete_data();
        break;

        case 4:
        bus.booking_ticket();
        break;

        case 5:
        system("CLS");
            cout << "            *******************************************\n";
            cout << "\n\n             Thanks For Checking Ticket Reservation System\n\n\n";
            cout << "            *******************************************\n\n";
            getch();
            exit(0);
    }
    }
    while (select != 5);
}