#include <iostream>
#include <string>

int addition(int param_one, int param_two)
{
    int results = param_one + param_two;
    return results;
}

int main()
{
    std::string user_name;
    std::cout << "Enter your full name" << std::endl;
    std::getline(std::cin, user_name);

    int first_num,
        second_num;
    std::cout << "Hello, " << user_name << " Welcome to Simple Math Calculator" << std::endl;
    std::cout << "First Number: ";
    std::cin >> first_num;
    std::cout << "Second Number: ";
    std::cin >> second_num;

    std::cout << "The sum of your two numbers " << first_num << " and " << second_num << " are : " << addition(first_num, second_num) << std::endl;

    return 0;
}