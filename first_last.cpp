#include<iostream>
#include<cstring>


int main()
{
	char first_name[20] = {};
	char last_name[20] = {};
	char full_name[40] = {};

	std::cout << "Enter your first name: ";
	std::cin.getline(first_name, 20);

	std::cout << "Enter your last name: ";
	std::cin.getline(last_name, 20);

	strcat(full_name, last_name);
	strcat(full_name, ", ");
	strcat(full_name, first_name);

	std::cout << "Here's the information in a single string: " << full_name << std::endl;

	return 0;


}