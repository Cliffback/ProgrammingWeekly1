// Weekly1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <set>
#include <cstdlib>
#include <conio.h>

int chooseTask;
int testing;

int menuKey()
{
	std::cout << "\nPress a key to go back to the main menu: ";
	char something = _getch();
	return 0;
}

void taskList()
{
	system("CLS");
	std::cout << "\nWeekly 1 - Mathias Eek\n";
	std::cout << "\nThe Tasks:";
	std::cout << "\n1 - Personal Information Extractor";
	std::cout << "\n2 - The Coffee Checker";
	std::cout << "\n3 - Youngness Detector";
	std::cout << "\n4 - Poison of Choice";
	std::cout << "\n5 - Beautiful Console Art";
	std::cout << "\n0 - Exit console\n";
	std::cout << "\nType the corresponding number to proceed:\n";
}

int task1()
{
	system("CLS");
	std::string fullName;
	int age;
	long int phoneNumber;
	char initial;
	
	std::string birthday;
	std::cout << "\nTask 1 - The Personal Information Extractor\n";
	std::cout << "\nGreetings, traveler! I'm going to need some information from you.";
	std::cout << "\nPlease enter your full name: ";
	std::getline(std::cin.ignore(32767, '\n'), fullName);
	std::cout << "Please enter the initial of your first name: ";
	std::cin >> initial;
	std::cout << "Please enter your age: ";
	std::cin >> age;
	std::cout << "Please enter your phone number: ";
	std::cin >> phoneNumber;
	std::cout << "Please enter your date of birth: ";
	std::getline(std::cin.ignore(32767, '\n'), birthday);
	
	system("CLS");
	
	std::cout << "\nThank you! This is what I've extracted from you:\n";
	std::cout << "\n- - - - - - - - - - - - - - - - -";
	std::cout << "\n  |  Name:        | " << fullName;
	std::cout << "\n  |  Initial      | " << initial;
	std::cout << "\n  |  Age          | " << age;
	std::cout << "\n  |  Phone number | " << phoneNumber;
	std::cout << "\n  |  Birthday     | " << birthday;
	std::cout << "\n- - - - - - - - - - - - - - - - -\n";
	menuKey();

	return 0;
}

int task2()
{
		system("CLS");

	std::string input;
	std::cout << "\nTask 2 - The Coffee Checker\n";
	std::cout << "\nExcuse me, sir! Do you drink coffe? (y/n): ";
	std::cin >> input;
		
	if (input == "Yes" || input == "yes" || input == "y" || input == "Y")
	{
		system("CLS");
		std::cout << "\nIt seems you like coffee\n";
		menuKey();
	}
		
	else if (input == "No" || input == "no" || input == "n" || input == "N")
	{
		system("CLS");
		std::cout << "\nOh, you don't like coffee\n";
		menuKey();
	}
		
	else
	{
		system("CLS");
		std::cout << "Fatal error. Press a key to try again.";
		char something = _getch();
		task2;
	}
	return 0;
}

int task3()
{
	system("CLS");
	int age;
	std::cout << "\nTask 3 - The Youngness Detector\n";
	std::cout << "\nSorry for being rude, but how old are you?\n\n";
	std::cin >> age;
	if (age < 20)
	{
		std::cout << "\nYou are so young!\n";
		menuKey();

	}
	else if (age >= 20 && age <= 40)
	{
		std::cout << "\nYou are a grown up!\n";
		menuKey();
	}
	else if (age >= 41 && age <= 59)
	{
		std::cout << "\nYou are quite old!\n";
		menuKey();

	}
	else if (age >= 60 && age <= 199)
	{
		std::cout << "\nYou are getting REALLY old!\n";
		menuKey();
	}
	else if (age >= 200)
	{
		std::cout << "\n...you are ancient!";
		menuKey();

	}

	return 0;
}

int task4() {
	system("CLS");

	return 0;
}

int task5() {
	system("CLS");

	return 0;
}

int main()
{
	

	while (true) {
		void clear() noexcept;
		taskList();
		std::cin >> chooseTask;
		if (chooseTask == 1)
		{
			task1();
		}
		if (chooseTask == 2)
		{
			task2();
		}
		if (chooseTask == 3)
		{
			task3();
		}
		if (chooseTask == 4)
		{
			task4();
		}
		if (chooseTask == 5)
		{
			task5();
		}
		if (chooseTask == 0)
		{
			return 0;
		}

	}
	
	return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
