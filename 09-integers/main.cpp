#include <iostream>

int main()
{
    /*
        // Brace initialization
        int turkey_meat_count{10};
        int chicken_meat_count{15};
        int cow_meat_count{17};

        // expression initialization of a variable
        int all_meat_count{turkey_meat_count + chicken_meat_count + cow_meat_count};

        // print all variables to the console
        std::cout << "total number of turkey meat: " << turkey_meat_count << std::endl;
        std::cout << "total number of chicken meat: " << chicken_meat_count << std::endl;
        std::cout << "total number of cow meat: " << cow_meat_count << std::endl;

        std::cout << "total number of meats exported is: " << all_meat_count << std::endl;
    */

    // Functional initialization of a variable

    /*
    int goat_meat_count(23);
    int cow_meat_count(12);
    int grasscutter_meat_count(10);

    int total_meats_counts(goat_meat_count + cow_meat_count + grasscutter_meat_count);

    // printing total number of meats exported to the console
    std::cout << "total goat meat: " << goat_meat_count << std::endl;
    std::cout << "total cow_meat_count: " << cow_meat_count << std::endl;
    std::cout << "total grasscutter_meat_count: " << grasscutter_meat_count << std::endl;
    std::cout << "total meats exported: " << total_meats_counts << std::endl;
    */

    // Assgiment notation
    int bird_meat_count = 5;
    int guinea_fowl_meat_count = 10;
    int pepper_bags_count = 5;

    int total_stuffs = bird_meat_count + guinea_fowl_meat_count + pepper_bags_count;

    // printing all stuffs to the console
    std::cout << "total bird meat: " << bird_meat_count << std::endl;
    std::cout << "total guinea_fowl_meat_count: " << guinea_fowl_meat_count << std::endl;
    std::cout << "total pepper bags count " << pepper_bags_count << std::endl;
    std::cout << "total number of goods imported is: " << total_stuffs << std::endl;

    // finding the size of the variable
    std::cout << "total size of bird_meat_count (int) is: " << sizeof(bird_meat_count) << std::endl;
    std::cout << "total size of guinea fowl meat (int) is: " << sizeof(guinea_fowl_meat_count) << std::endl;
    std::cout << "total size of pepper bags (int) is: " << sizeof(pepper_bags_count) << std::endl;

    return 0;
}