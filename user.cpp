#include <iostream>
#include "user.h";
using namespace std;

bool user::login()
{
	string user;
	string pass;
	cout << "Please Enter User name";
	cin >> user;
	cout << "Please Enter Password";
	cin >> pass;
	if (user == __init__User)
	{
		if (pass == __init__password)
		{
			cout << "Loged in";
			return true;
		}
		else
		{
			cout << "User name or password is incorrect!!";
			return false;
		}
	}
	else
	{
		cout << "User name or password is incorrect!!";
		return false;
	}
}


void user::creat_account()
{
	if (account_level == 2)
	{
		cout << "Please Enter User Name";
		cin >> user_name;
		cout << "Please Enter your Password";
		cin >> password;
		cout << "Please Enter Your Name";
		cin >> name;
		cout << "Please Enter Account Level";
		cin >> account_level;
		cout << "Account Has Been Created";
	}
	else
	{
		cout << "Sorry!! You Can't creat account";
	}
}

void user::delete_account(user *u)
{
	//string delete_name; //delete_name is the name of the variable containg 
	//					//the name of the username wanted to be deleted.
	//cout << "Please Enter the username of the account you want to delete..";
	//cin >> delete_name;
	delete u;


}

//void user::edit_account()
//{
//	action
//}
