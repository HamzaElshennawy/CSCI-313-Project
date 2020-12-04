#include <iostream>
#include "user.h"
using namespace std;
int number_of_users = 20;
//string *users[20];

int main()
{
	user u1;
	if (u1.login() == true)
	{
		int opt;
		cout << "Please Choose What do you want to do...\n";
		cout << "1-Creat account\n2-Delete accout\n";
		cin >> opt;
		switch (opt)
		{
		case 1:
			if (u1.__init__account_level == 2)
			{
				u1.creat_account();
				break;
			}
			else
			{
				cout << "You don't have the permisson to creat account";
				break;
			}
		case 2:
			if (u1.__init__account_level == 2)
			{
				u1.delete_account();
				break;
			}
			else
			{
				cout << "You don't have the permisson to creat account";
				break;
			}
		}
	}
	else
	{
		//action
	}
	return 0;
}

//void insert_objects(user *u[20])
//{
//	for (int i = 0; i < 20; i++)
//	{
//		if (users[i] == NULL)
//		{
//			users[i] = u;
//		}
//	}
//}
