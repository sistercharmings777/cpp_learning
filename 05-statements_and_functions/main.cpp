#include <iostream>

int addNumbers(int first_num, int second_num)
{
    int sum = first_num + second_num;
    return sum;
};

int main()
{
    int first_number{3};
    int second_number{7};

    std::cout << "first Number: " << first_number << std::endl;
    std::cout << "second number: " << second_number << std::endl;

    int sum = first_number + second_number;
    std::cout << "sum : " << sum << std::endl;

    sum = addNumbers(23, 9);
    std::cout << "sum from function : " << sum << std::endl;

    std::cout << "Sum from function : " << addNumbers(70, 89) << std::endl;

    return 0;
}