#include <iostream>

int main()
{
    // compile time error
    std::cout << "hello world!" << std::endl;

    // Runtime error
    int value = 7 / 0;
    std::cout << "value :" << value << std::endl;

    return 0;
}