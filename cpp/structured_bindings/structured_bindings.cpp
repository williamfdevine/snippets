/**
	@file structured_bindings.cpp
*/

#include <iostream>
#include <utility>
#include <tuple>

std::pair<std::string, int> pairBindingTest(std::string first, int second)
{
	return {first, second};
}

std::tuple<std::string, int, float> tupleBindingTest(std::string first, int second, float third)
{
	return {first, second, third};
}

struct test_struct_t
{
	std::string first_;
	int second_;
};

test_struct_t structBindingTest(std::string first, int second)
{
	return {first, second};
}

int main()
{

	std::cout << "THIS IS A TEST OF STRUCTURED BINDINGS IN C++17" << std::endl;
	std::cout << std::endl;

	std::pair<std::string, int> result_pair = pairBindingTest("TEST", 1234);
	std::cout << "THE OLD WAY OF GETTING PAIRS IS TO REFERENCE THE" << std::endl;
	std::cout << "FIRST AND SECOND ELEMENTS WITH pair.first AND pair.second" << std::endl;
	std::cout << "LIKE THIS: " << result_pair.first << " AND " << result_pair.second << std::endl;
	std::cout << std::endl;

	auto [first_pair_var, second_pair_var] = pairBindingTest("TEST", 1234);
	std::cout << "THE NEW WAY IS TO USE STRUCTURED BINDINGS, WHICH LOOKS LIKE" << std::endl;
	std::cout << "auto [first_pair_var, second_pair_var] = <function>. WHEN CALLING THE SAME" << std::endl;
	std::cout << "FUNCTION AS BEFORE, THIS RESULTS IN " << first_pair_var << " AND " << second_pair_var << std::endl;
	std::cout << std::endl;

	std::tuple<std::string, int, float> result_tuple = tupleBindingTest("TEST", 1234, 12.34);
	std::cout << "YOU CAN ALSO DO THIS USING TUPLES, LIKE SO:" << std::endl;
	std::cout << "THE TRADITIONAL WAY TO ACCESS THE ELEMENTS IS BY USING" << std::endl;
	std::cout << "std::get<0>(tuple) ... std::get<n>(tuple), WHICH RESULTS IN:" << std::endl;
	std::cout << std::get<0>(result_tuple) << ", " << std::get<1>(result_tuple) << ", AND " << std::get<2>(result_tuple) << std::endl;
	std::cout << std::endl;

	auto [first_tuple_var, second_tuple_var, third_tuple_var] = tupleBindingTest("TEST", 1234, 12.34);
	std::cout << "THE NEW WAY IS TO USE STRUCTURED BINDINGS, WHICH LOOKS LIKE" << std::endl;
	std::cout << "auto [first_tuple_var, second_tuple_var, third_tuple_var] = <function>. WHEN CALLING" << std::endl;
	std::cout << "THE SAME FUNCTION AS BEFORE, THIS RESULTS IN " << first_tuple_var << ", " << second_tuple_var << ", AND " << third_tuple_var << std::endl;
	std::cout << std::endl;

	test_struct_t result = structBindingTest("TEST", 1234);
	std::cout << "YOU CAN ALSO DO THIS WITH STRUCTS, LIKE SO:" << std::endl;
	std::cout << "THE OLD WAY OF DOING THIS IS TO ACCESS THE STRUCT ELEMENTS LIKE struct.el1, struct.el2, ETC" << std::endl;
	std::cout << "THIS YIELDS " << result.first_ << " AND " << result.second_ << std::endl;
	std::cout << std::endl;

	auto [first_struct_var, second_struct_var] = structBindingTest("TEST", 1234);
	std::cout << "THE NEW WAY IS TO USE STRUCTURED BINDINGS, WHICH LOOKS LIKE" << std::endl;
	std::cout << "auto [first_struct_var, second_struct_var] = <function>" << std::endl;
	std::cout << "WHEN CALLING THE SAME FUNCTION AS BEFORE, THIS RESULTS IN " << first_struct_var << " AND " << second_struct_var << std::endl;
	std::cout << std::endl;

	return 0;
}