#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
struct crops
{
	string name, area, breed;
	int production ;
};

struct cow
{
	string name, tag, breed;
	int production ;
};

struct emp
{
	string name, id, address;
	int contact, salary;
};

emp a[20];
int total = 0;
crops c[20];
int totalcrops = 0;

cow b[20];
int totalcows = 0;

void fdata()
{
	int choice;
	cout << " How many crops data you want to store ?" << endl;
	cin >> choice;

	for (int i = totalcrops; i < totalcrops+ choice; i++)
	{
		cout << " Enter data of crop " << i + 1 << endl;
		cout << " Crop Name : " << endl;
		cin >> c[i].name;
		cout << "Plantation area :" << endl;
		cin >> c[i].area;
		cout << "Breed :" << endl;
		cin >> c[i].breed;
		cout << "Production per acre :" << endl;
		cin >> c[i].production;

	}
	totalcrops = totalcrops + choice;
}
void fshow()
{
	if (totalcrops != 0)
	{

		for (int i = 0; i < totalcrops; i++)
		{
			cout << "Data of crop " << i + 1 << endl;

			cout << " Name of crop :" << c[i].name << endl;
			cout << " Plantation area of crop :" << c[i].area << endl;
			cout << " Breed of crop :" << c[i].breed << endl;
			cout << " Production per acre of crop :" << c[i].production << endl;

		}
	}
	else
	{
		cout << "\a Your record is empty !" << endl;
	}
}
void fsearch()
{
	if (totalcrops != 0)
	{
		string tag;

		cout << " Enter the name of the desired crop " << endl;
		cin >>tag;
		for (int i = 0; i < totalcrops; i++)
		{
			if (tag == c[i].area)
			{
			cout << " Name of crop :" << c[i].name << endl;
			cout << " Plantation area of crop :" << c[i].area << endl;
			cout << " Breed of crop :" << c[i].breed << endl;
			cout << " Production per acre of crop :" << c[i].production << endl;

				break;
			}
			if (i == totalcrops - 1)
			{
				cout << "\a No crop exists with this name !" << endl;
			}
		}
	}
	else
	{
		cout << "\a Your record is empty !" << endl;
	}
}
void fupdate()
{
	if (totalcrops != 0)
	{
		string namef;

		cout << " Enter the name of the desired crop " << endl;
		cin >> namef;
		for (int i = 0; i < totalcrops; i++)
		{
			cout << "Previous data of crops " << i + 1 << endl;

			
			cout << " Name of crop :" << c[i].name << endl;
			cout << " Plantation area of crop :" << c[i].area << endl;
			cout << " Breed of crop :" << c[i].breed << endl;
			cout << " Production per acre of crop :" << c[i].production << endl;

			cout << "*Update* " << endl;
			cout << " Crop Name : " << endl;
			cin >> c[i].name;
			cout << "Plantation area :" << endl;
			cin >> c[i].area;
			cout << "Breed :" << endl;
			cin >> c[i].breed;
			cout << "Production per acre :" << endl;
			cin >> c[i].production;

		
//			break;

			if (i == totalcrops- 1)
			{
				cout << "\a No cow exists with this tag number !" << endl;
			}

			else
			{
				cout << "\a Your record is empty !" << endl;
			}
		}
	}
}
void cdel()
{
	if (totalcows != 0)
	{
		char user;
		cout << " Press 1 to delete full record " << endl;
		cout << " Press 2 to delete specfic record " << endl;
		user = getch();
system("CLS");
		if (user == '1')
		{
			totalcows = 0;
			cout<<" Please wait"<<endl;
	for (int i = 0; i <= 8; i++)
	{
		cout << ".";
		Sleep(1000);
	}
			cout << " All record has been deleted !" << endl;
		}

		else if (user == '2')
		{
			string tag;
			cout << " Enter the tag number  of the desired cow " << endl;
			cin >>tag;

			for (int i = 0; i < totalcows; i++)
			{
				if (tag == b[i].tag)
				{
					for(int j = i; j < totalcows; j++) {
						b[j].name = b[j + 1].name;
						b[j].tag = b[j + 1].tag;

						b[j].breed = b[j + 1].breed;
						b[j].production = b[j + 1].production;
						totalcows--;
					}

					break;
				}
				if (i == totalcows - 1)
				{
					cout << "\a No cow exists with this tag number !" << endl;
				}
			}
		}
	}
	else
	{
		cout << "\a Your record is empty !" << endl;
	}
}

void cdata()
{
	int choice;
	cout << " How many cow's data you want to store ?" << endl;
	cin >> choice;

	for (int i = totalcows; i < totalcows+ choice; i++)
	{
		cout << " Enter data of cow " << i + 1 << endl;
		cout << " Cow Name : " << endl;
		cin >> b[i].name;
		cout << "Tag :" << endl;
		cin >> b[i].tag;
		cout << "Breed :" << endl;
		cin >> b[i].breed;
		cout << "Production :" << endl;
		cin >> b[i].production;

	}
	totalcows = totalcows + choice;
}
void cshow()
{
	if (totalcows != 0)
	{

		for (int i = 0; i < totalcows; i++)
		{
			cout << "Data of cow " << i + 1 << endl;

			cout << " Name of cow :" << b[i].name << endl;
			cout << " Tag number of cow :" << b[i].tag << endl;
			cout << " Breed of cow :" << b[i].breed << endl;
			cout << " Production of cow :" << b[i].production << endl;

		}
	}
	else
	{
		cout << "\a Your record is empty !" << endl;
	}
}
void csearch()
{
	if (totalcows != 0)
	{
		string tag;

		cout << " Enter the tag number of the desired cow " << endl;
		cin >>tag;
		for (int i = 0; i < totalcows; i++)
		{
			if (tag == b[i].tag)
			{
			cout << " Name of cow :" << b[i].name << endl;
			cout << " Tag number of cow :" << b[i].tag << endl;
			cout << " Breed of cow :" << b[i].breed << endl;
			cout << " Production of cow :" << b[i].production << endl;

				break;
			}
			if (i == totalcows - 1)
			{
				cout << "\a No cow exists with this tag number !" << endl;
			}
		}
	}
	else
	{
		cout << "\a Your record is empty !" << endl;
	}
}
void cupdate()
{
	if (totalcows != 0)
	{
		string tag;

		cout << " Enter the tag number of the desired cow " << endl;
		cin >> tag;
		for (int i = 0; i < totalcows; i++)
		{
			cout << "Previous data of cow " << i + 1 << endl;

			
			cout << " Name of cow :" << b[i].name << endl;
			cout << " Tag number of cow :" << b[i].tag << endl;
			cout << " Breed of cow :" << b[i].breed << endl;
			cout << " Production of cow :" << b[i].production << endl;

			cout << "*Update* " << endl;
			
		cout << " Cow Name : " << endl;
		cin >> b[i].name;
		cout << "Tag :" << endl;
		cin >> b[i].tag;
		cout << "Breed :" << endl;
		cin >> b[i].breed;
		cout << "Production :" << endl;
		cin >> b[i].production;
		
			break;

			if (i == totalcows- 1)
			{
				cout << "\a No cow exists with this tag number !" << endl;
			}

			else
			{
				cout << "\a Your record is empty !" << endl;
			}
		}
	}
}
void fdel()
{
	if (total != 0)
	{
		char user;
		cout << " Press 1 to delete full record " << endl;
		cout << " Press 2 to delete specfic record " << endl;
		user = getch();
		system("CLS");
		if (user == '1')
		{
			total = 0;
			cout<<" Please wait"<<endl;
			for (int i = 0; i <= 8; i++)
			{
				cout << ".";
				Sleep(1000);
			}
			cout << " All record has been deleted !" << endl;
		}

		else if (user == '2')
		{
			string id;
			cout << " Enter the id of the desired emp " << endl;
			cin >>id;

			for (int i = 0; i < total; i++)
			{
				if (id == a[i].id)
				{
					for(int j = i; j < total; j++) {
						a[j].name = a[j + 1].name;
						a[j].id = a[j + 1].id;

						a[j].address = a[j + 1].address;
						a[j].contact = a[j + 1].contact;
						total--;
					}

					break;
				}
				if (i == total - 1)
				{
					cout << "\a No emp exists with this id number !" << endl;
				}
			}
		}
	}
	else
	{
		cout << "\a Your record is empty !" << endl;
	}
}
void data()
{
	int choice;
	cout << " How many employees data you want to store ?" << endl;
	cin >> choice;

	for (int i = total; i < total + choice; i++)
	{
		cout << " Enter data of Employee " << i + 1 << endl;
		cout << " Employee Name : " << endl;
		cin >> a[i].name;
		cout << "ID :" << endl;
		cin >> a[i].id;
		cout << "Address:" << endl;
		cin >> a[i].address;
		cout << "Contact :" << endl;
		cin >> a[i].contact;
		cout << "Salary :" << endl;
		cin >> a[i].salary;
	}
	total = total + choice;
}
void show()
{
	if (total != 0)
	{

		for (int i = 0; i < total; i++)
		{
			cout << "Data of employee " << i + 1 << endl;

			cout << " Name of employee :" << a[i].name << endl;
			cout << " ID of employee :" << a[i].id << endl;
			cout << " Contact of employee :" << a[i].contact << endl;
			cout << " Address of employee :" << a[i].address << endl;
			cout << " Salary of employee :" << a[i].salary << endl;
		}
	}
	else
	{
		cout << "\a Your record is empty !" << endl;
	}
}
void search()
{
	if (total != 0)
	{
		string id;

		cout << " Enter the ID of the desired employee " << endl;
		cin >> id;
		for (int i = 0; i < total; i++)
		{
			if (id == a[i].id)
			{
				cout << " Name of employee :" << a[i].name << endl;
				cout << " Contact of employee :" << a[i].contact << endl;
				cout << " Address of employee :" << a[i].address << endl;
				cout << " Salary of employee :" << a[i].salary << endl;

				break;
			}
			if (i == total - 1)
			{
				cout << "\a No employee exists with this ID !" << endl;
			}
		}
	}
	else
	{
		cout << "\a Your record is empty !" << endl;
	}
}
void update()
{
	if (total != 0)
	{
		string id;

		cout << " Enter the ID of the desired employee " << endl;
		cin >> id;
		for (int i = 0; i < total; i++)
		{
			cout << "Previous data of employee " << i + 1 << endl;

			cout << " Name of employee :" << a[i].name << endl;
			cout << " ID of employee :" << a[i].id << endl;
			cout << " Contact of employee :" << a[i].contact << endl;
			cout << " Address of employee :" << a[i].address << endl;
			cout << " Salary of employee :" << a[i].salary << endl;

			cout << "*Update* " << endl;
			cout << " Employee Name : " << endl;
			cin >> a[i].name;
			cout << "ID :" << endl;
			cin >> a[i].id;
			cout << "Address:" << endl;
			cin >> a[i].address;
			cout << "Contact :" << endl;
			cin >> a[i].contact;
			cout << "Salary :" << endl;
			cin >> a[i].salary;
			break;

			if (i == total - 1)
			{
				cout << "\a No employee exists with this ID !" << endl;
			}

			else
			{
				cout << "\a Your record is empty !" << endl;
			}
		}
	}
}
void del()
{
	if (total != 0)
	{
		char user;
		cout << " Press 1 to delete full record " << endl;
		cout << " Press 2 to delete specfic record " << endl;
		user = getch();

		if (user == '1')
		{
			total = 0;
			Sleep(2000);
			cout << " All record has been deleted !" << endl;
		}

		else if (user == '2')
		{
			string id;
			cout << " Enter the ID of the desired employee " << endl;
			cin >> id;

			for (int i = 0; i < total; i++)
			{
				if (id == a[i].id)
				{
					for(int j = i; j < total; j++) {
						a[j].name = a[j + 1].name;
						a[j].id = a[j + 1].id;
						a[j].contact = a[j + 1].contact;
						a[j].address = a[j + 1].address;
						a[j].salary = a[j + 1].salary;
						total--;
					}

					break;
				}
				if (i == total - 1)
				{
					cout << "\a No employee exists with this ID !" << endl;
				}
			}
		}
	}
	else
	{
		cout << "\a Your record is empty !" << endl;
	}
}

int main()
{
system("color 3");
	cout << "\a **Welcome to FARMENEUR**" << endl;
	cout << " Please sign-up to continue " << endl;
	string username, password;
	cout << " Enter your username :";
	cin >> username;
	cout << " Enter your password :";
	cin >> password;

	cout << " Please wait ";
	for (int i = 0; i <= 8; i++)
	{
		cout << ".";
		Sleep(1000);
	}
	system("CLS");
	cout << " ID created successfully " << endl;
	system("CLS");

	cout << "**FARMENEUR**" << endl;

	cout << " Login to continue " << endl;
	Sleep(2000);
	system("CLS");

	string username1, password1;
start:
	cout << " Enter your username :";
	cin >> username1;
	cout << " Enter your password :";
	cin >> password1;

	if (username == username1 && password == password1)
	{
		system("CLS");

		char user;
		char type;

		while (1)
		{

			cout << " What thing do you want to enter data about?" << endl;
			cout << " Press 1 to enter data about cows" << endl;
			cout << " Press 2 to enter data about employees" << endl;
				cout << " Press 3 to enter data about crops" << endl;
			type = getch();
			
			cout << " Press 1 to enter data " << endl;
			cout << " Press 2 to show data " << endl;
			cout << " Press 3 to search data " << endl;
			cout << " Press 4 to update data " << endl;
			cout << " Press 5 to logout " << endl;
			cout << " Press 6 to delete data " << endl;
			cout << " Press 7 to exit currently " << endl;
			user = getch();
			
			switch (user)
			{

			case '1':
				if(type == '1') cdata();
				else if (type == '2') data();
				else if (type == '3') fdata();
				break;

			case '2':
				if(type == '1') cshow();
				else if (type == '2') show();
								else if (type == '3') fshow();
				break;

			case '3':
				if(type == '1') csearch();
				else if (type == '2') search();
								else if (type == '3') fsearch();
				break;


			case '4':
				if(type == '1') cupdate();
				else if (type == '2') update();
								else if (type == '3') fupdate();
				
				break;

			case '5':
				goto start;
				break;

			case '6':
				if(type == '1') cdel();
				else if (type == '2') del();
								else if (type == '3') fdel();
				break;

			default:
				Sleep(2000);
				cout << "\a  You made an invalid input !!";
			}
		}
	}
	else if (username != username1)
	{
		cout << "\a Username is incorrect ! " << endl;
		Sleep(3000);
		goto start;
	}
	else if (password != password1)
	{
		cout << "\a Password is incorrect !" << endl;
		Sleep(3000);
		goto start;
	}

	return 0;
}
