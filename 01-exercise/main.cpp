#include <iostream>
#include <string>

int calAge(int current_year, int year_of_birth)
// function to calculate age
{
    int new_age = current_year - year_of_birth;
    return new_age;
};

int main()
{

    // take the user's year of birth and fullname
    std::string fullname;
    int year_of_birth;

    std::cout << "Please enter your fullname" << std::endl;
    std::getline(std::cin, fullname);
    std::cout << "Please enter your year of birth" << std::endl;
    std::cin >> year_of_birth;

    int new_age = calAge(2023, year_of_birth);
    std::cout << "Hi " << fullname << " you would be " << new_age << " this year!" << std::endl;
    std::clog << "Verifying fullname " << fullname << " againts other names in DB ......" << std::endl;
    std::cerr << fullname << " has not provided the correct year of birth. This can be verified from the DB" << std::endl;

    return 0;
};