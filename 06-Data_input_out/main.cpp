#include <iostream>
#include <string>

int main()
{

    // printing data
    std::cout << "hello c++ 20" << std::endl;

    // printing out age
    int age{21};
    std::cout << "age: " << age << std::endl;

    // std::cerr 'error message'
    std::cerr << "Error message: Something is wrong 😥" << std::endl;

    // std::clog 'log message'
    std::clog << "Log message: Something happened 😅" << std::endl;

    // Data Input
    // getting data into program

    /*
    std::string name;
    int age1;

    std::cout << "Please enter your name and your age" << std::endl;
    // std::cin >> name;
    // std::cin >> age1;
    // or
    std::cin >> name >> age;

    std::cout << "Hello " << name << " you are " << age << " years old!";
*/

    // Data with spaces
    std::string full_name;
    int age3;

    std::cout << "Please enter your full name and age" << std::endl;
    std::getline(std::cin, full_name);
    std::cin >> age3;
    std::cout << "Hello " << full_name << " you are " << age3
              << " years of age!" << std::endl;

    return 0;
}