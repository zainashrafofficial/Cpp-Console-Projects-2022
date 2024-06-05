#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
class bank
{
    string fullname,address,accounttype = "";
    int balance=0;
    public:
    void open_account();
    void deposit_money();
    void displayaccount();
    void withdraw_money();
};
void bank :: open_account()
{
    system ("CLS");
    cout<<"*** Welcome Here ***\n\n";
    cout<<"Enter Your Full Name : ";
    cin.ignore();
    getline (cin,fullname);
    cout<<"\nEnter Your Address : ";
    // cin.ignore();
    // cin.ignore(20 , '/n');
    getline (cin,address);
    cout<<"\nWhich Type of Account You Want to Register 'Current Account or Saving Account' : ";
    // cin.ignore();
    // cin.ignore(20 , '/n');
    getline (cin,accounttype);
    cout<<"\nEnter Amount you want to Deposit in Account : ";
    cin>>balance;
    cout<<"\nCongrats!  Your Account is Created. ";
}
void bank :: deposit_money()
{
    int newdeposit;
    cout<<"\nEnter ammount of Money you want to Deposit : ";
    cin>>newdeposit;
    cout<<"\nYour Previous account Balance is : "<<balance;
    balance +=newdeposit;
    cout<<"\nNow Total Balance in account is  : "<<balance<<endl;
}
void bank :: displayaccount()
{
    system ("CLS");
    cout<<"  *** Account Status ***\n\n";
    cout<<"Your Full Name Is : "<<fullname;
    cout<<"\nYour Adress Is : "<<address;
    cout<<"\nYour Account type is "<<accounttype;
    cout<<"\nTotal Balance of Your Account is "<<balance;
}
void bank :: withdraw_money()
{
    int ammount;
    cout<<"       *** Withdraw Money ***\n\n";                                                                 
    cout<<"Enter Amount of Money You want to Withdraw : ";
    cin>>ammount;
    balance -= ammount;
    cout<<"\nYour Remaining Balance in Account is : "<<balance;

}
int main()
{
    int opt,x;
    bank obj;
    do
    {
        system ("CLS");
        cout<<"\t      Welcome to HBL  \n\n\n";
        cout<<"Select from the Given Options Which You Want : \n\n";
        cout<<"1) Open a New Account \n";
        cout<<"2) Deposit Money In Account \n";
        cout<<"3) Account Present Status \n";
        cout<<"4) Withdraw Money In Account \n";
        cout<<"5) Exit \n";
        cout<<"\n\nWhich Option You want to Select : ";
        cin>>opt;
        switch(opt)
        {
        case 1:
        cout<<"Welcome Here for opening a new Account. \n\n";
        obj.open_account();
        break;
    
        case 2:
        system ("CLS");
        cout<<"     *** Depositing Money ***\n\n";
        obj.deposit_money();
        break;

        case 3: 
        system ("CLS");
        obj.displayaccount();
        break;

        case 4:
        system ("CLS");
        obj.withdraw_money();
        break;

        case 5:
        exit (1);

        default:
        cout<<"Choose Options Appropriately. It does'nt Exist. \n\n";
        }
        cout<<"\n\nIf You want to choose Option Again then Press 'Y' ";
        x = getch();
    }
    while(x == 'y' || x == 'Y');
}