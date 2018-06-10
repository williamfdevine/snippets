/**
	@file bracket_initializer_rules.cpp
*/

#include <iostream>
#include <vector>

int main()
{

	std::cout << "Bracket initialization is a feature from c++11, but it has gotten" << std::endl;
	std::cout << "smarter in c++17." << std::endl;
	std::cout << "For instance, the following methods of initializing an int are all" << std::endl;
	std::cout << "valid: int val = 4   int val = {4}    int val {4}" << std::endl;
	std::cout << "You can also use auto vars like such: auto val {4} (int)" << std::endl;
	std::cout << "auto val {3.14} (float)    auto val = {4, 5, 6} (std::initializer_list<int>)" << std::endl;
	std::cout << "NOTE: in order to define a list, = must be used." << std::endl;

	int val = 4;
	int val1 {4};
	int val2 = {4};

	auto val3 = 4;
	auto val4 {4};
	auto val5 = {4};

	auto val6 = {4, 5, 6};
	std::vector<int> val7 = {4, 5, 6};
	std::vector<int> val8 {4, 5, 6};

	std::cout << val << " - " << val1 << " - " << val2 << std::endl;
	std::cout << val3 << " - " << val4 << " - " << val5.begin()[0] << std::endl;
	std::cout << val6.begin()[0] << " - " << val6.begin()[1] << " - " << val6.begin()[2] << std::endl;
	std::cout << val7[0] << " - " << val7[1] << " - " << val7[2] << std::endl;
	std::cout << val8[0] << " - " << val8[1] << " - " << val8[2] << std::endl;

	return 0;

}