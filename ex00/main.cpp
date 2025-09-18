#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
    try
    {
        std::vector<int> vec;
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(3);

        std::cout << "Searching for 2 in vector..." << std::endl;
        std::vector<int>::iterator it = easyfind(vec, 2);
        std::cout << "Found: " << *it << std::endl;

        std::cout << "Searching for 42 in vector..." << std::endl;
        it = easyfind(vec, 42);
        std::cout << "Found: " << *it << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
