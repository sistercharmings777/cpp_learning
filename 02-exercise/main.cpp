#include <iostream>

// function to add three numbers
int addNumbers(int first_num, int second_num, int third_num)
{
    int result = first_num + second_num + third_num;
    return result;
};

// function to multiply three given numbers
int multiplyNum(int param_one, int param_two, int param_three)
{
    int result = param_one * param_two * param_three;
    return result;
};

// function to divide three number by first adding the last two numbers
int divideNumb(int param_one, int param_two, int param_three)
{
    int divider = param_two + param_three;
    int result = divider / param_one;
    return result;
}

int main()
{

    std::cout << "hello, world" << std::endl;

    // declaration of variables
    int first_num, second_num, result;
    int third_num{13};

    // accepting input from user
    std::cout << "Please enter the first two numbers" << std::endl;
    std::cin >> first_num >> second_num;

    // adding three numbers
    result = addNumbers(first_num, second_num, third_num);
    std::cout << "first_num: " << first_num
              << " second num: " << second_num << " third num: "
              << third_num << std::endl;
    std::cout << "result for addition: " << result << std::endl;

    // multiplyig three numbers
    result = multiplyNum(first_num, second_num, third_num);
    std::cout << "result for multiplication: " << result << std::endl;

    // dividing three numbers
    result = divideNumb(first_num, second_num, third_num);
    std::cout << "result for division: " << result << std::endl;

    return 0;
}