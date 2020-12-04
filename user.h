#pragma once
#include <iostream>
using namespace std;


class user
{
public:
	string user_name; // account username
	string name;	  // account name
	int id; // id is unique id number for every user.
	int __init__account_level = 2;
	bool login();
	void creat_account(); // account creation function
	/*void edit_account();*/ // account editing function
	void delete_account(user *u); // account deleting function

	

protected:
	int account_level;// account level is the account permissions level (level 1 is for staff // level 2 is for managers)
	


private:
	string __init__User = "Hamza";
	string __init__password = "123456";
	
	string password; // account password


};

//class item_menu
//{
//public:
//
//
//private:
//
//};
