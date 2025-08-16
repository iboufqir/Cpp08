#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main() {
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    std::vector<int>::iterator it = easyfind(vec, 2);
    if (it != vec.end())
        std::cout << "Found in vector: " << *it << std::endl;
    else
        std::cout << "2 not found in vector" << std::endl;


    std::vector<int>::iterator it2 = easyfind(vec, 42);
    if (it2 != vec.end())
        std::cout << "Found in vector: " << *it2 << std::endl;
    else
        std::cout << "42 not found in vector" << std::endl;

    return 0;
}
