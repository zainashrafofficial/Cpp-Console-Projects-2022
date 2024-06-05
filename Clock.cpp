#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    system ("CLS");
    int S,H,M,err,A;
    err = A = 0;
    cout<<"***** Your Time Clock is Going to Start Now ***** ";
    while (err==0)
    {
        cout<<"\n\nEnter Hours : ";
        cin>>H;
        cout<<"Enter Minutes : ";
        cin>>M;
        cout<<"Enter Seconds : ";
        cin>>S;
        if( H<24 && M<60 && S<60)
          err++;
        else 
          system ("CLS");
    }
    cout<<"Your Time Clock is ";
    while ( A == 0)
    {
        system("CLS");
        cout<<H<<" : "<<M<<" : "<<S<<endl;
        S++;
        Sleep(1000);
        if( S>59 )
        {
            S=0;
            M++;
        }
        if( M>59 )
        {
            M=0;
            H++;
        }
        if(H>24)
        {
            H=0;
        }
    }
 return 0;
}

