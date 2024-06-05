#include <iostream>
#include <conio.h>
#include <windows.h>
//#include <stdlib.h>
//#include <string>
//#include <istream>
//#include<bits/stdc++.h>
COORD cord = {0,0};
void gotoxy(int x , int y)
{
     cord.X = x;
     cord.Y = y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cord);
}

using namespace std;					 
main()
{
	string name, fname;
	int age;
	//cout<<"Hello World";
	//return 0:
	system("CLS");
   	cout<<"Hello Welcome.\n";
   	cout<<"So Let's Start.\n"<<endl;
   	cout<<"Kindly press Enter key:";

   	getch();
	
   	system("CLS");
   	cout<<"Enter Your Name:\n";
   	getline(cin,name);
   	cout<<"\nYour Name Is:\n\n"<<"\t\t"<<name<<endl;
   	cout<<endl<<endl;
   	cout<<"Enter Your Father Name:\n";
   	getline(cin,fname);
   	cout<<"\nYour Father Name Is:\n\n"<<"\t\t"<<fname<<endl;
   	getch();
   	system("CLS");
   	
   	cout<<"\nEnter Your Age (In years):"<<endl;
   	cin>>age;
   	cout<<"\nYour Age Is:\n\n"<<"\t\t"<<age<<" Years"<<endl;
   	cout<<"\n\nPress ENTER Key for your Vote Casting Verification:-"<<endl;
   	getch();
   	if(age>=18)
   	cout<<"\n\t\tCongratulations! You can Cast Vote.";
   	else
   	cout<<"\n\t\tOops! You can't Cast Vote.";
   	//getch();
  			 	
   	getch();
}
    
