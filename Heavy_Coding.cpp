#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	system("CLS");
	char ch[20];
	cout<<"Enter Your Name : ";
	cin.getline(ch,20);
	cout<<endl<<"Your Name is : "<<ch;
	getch();
}