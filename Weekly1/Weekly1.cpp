// Weekly 1 by Mathias Eek

#include <iostream>
#include <string>
#include <set>
#include <cstdlib>
#include <conio.h>

int chooseTask;
int testing;

// The following function is for returning to the main menu, so that I don't have to type it out every time
void menuKey()
{
	std::cout << "\nPress a key to return to the main menu: ";
	char something = _getch();
	
}

// The following function is the choices of the menu
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

// This function contains Task 1
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

// This function contains Task 2
int task2()
{
		system("CLS");

	std::string input;
	std::cout << "\nTask 2 - The Coffee Checker\n";
	std::cout << "\nExcuse me, sir! Do you drink coffe? (y/n): ";
	std::cin >> input;
		
	// Added different ways people could write yes or no
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
		
	// And also added a message and a reset of the function if they type something else
	else
	{
		system("CLS");
		std::cout << "Fatal error. Press a key to try again.";
		char something = _getch();
		task2();
	}
	return 0;
}

// This function contains Task 3
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

	// Had to add an easter egg
	else if (age >= 200)
	{
		std::cout << "\n...you are ancient!";
		menuKey();

	}

	return 0;
}

// This function contains Task 4
int task4() {
	system("CLS");
	int favoriteDrink;
	std::cout << "\nTask 4 - Poison of Choice\n";
	std::cout << "\nWhat are your favorite drink?\n";
	std::cout << "\n1. Coffe";
	std::cout << "\n2. Tea";
	std::cout << "\n3. Coca Cola\n";
	std::cout << "\nSelect between 1 to 3: ";
	std::cin >> favoriteDrink;

	if (favoriteDrink==1)
	{
		std::cout << "\n\nCoffee is delicious\n";
		menuKey();
	}
	else if (favoriteDrink==2)
	{
		std::cout << "\nTea gives peace of mind\n";
		menuKey();
	}

	else if (favoriteDrink==3)
	{
		std::cout << "\nCoke will give you a white smile\n";
		menuKey();
	}
	else
	{
		std::cout << "\nThere's something wrong with your answer.";
		std::cout << "\nPress a key to try again: ";

		char something = _getch();
		task4();
	}

	return 0;
}

// This function contains Task 5
// Found a code for changing the color of text without additional libraries on the forum on stackowerflow.com: "\033[1;31m*\033[0m"
int task5() {
	system("CLS");
	std::cout << "\nTask 5 - Beautiful Console Art\n\n";
	std::cout << "     1   2   3   4   5   6\n";
	std::cout << "    --- --- --- --- --- ---\n";
	std::cout << "A  : \033[1;31m*\033[0m : \033[1;31m*\033[0m : \033[1;31m*\033[0m : \033[1;31m*\033[0m : \033[1;31m*\033[0m : \033[1;31m*\033[0m :  A\n";
	std::cout << "B  : \033[1;31m*\033[0m : \033[1;31m*\033[0m : \033[1;31m*\033[0m : \033[1;31m*\033[0m : \033[1;31m*\033[0m : \033[1;31m*\033[0m :  B\n";
	std::cout << "C  : \033[1;31m*\033[0m : \033[1;31m*\033[0m : \033[1;31m*\033[0m : \033[1;31m*\033[0m : \033[1;31m*\033[0m : \033[1;31m*\033[0m :  C\n";
	std::cout << "D  : \033[1;31m*\033[0m : \033[1;31m*\033[0m : \033[1;31m*\033[0m : \033[1;31m*\033[0m : \033[1;31m*\033[0m : \033[1;31m*\033[0m :  D\n";
	std::cout << "    --- --- --- --- --- ---\n";
	std::cout << "     1   2   3   4   5   6\n\n";

	menuKey();

	

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