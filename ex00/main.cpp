#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main() {
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    try {
        std::vector<int>::iterator it = easyfind(vec, 20);
        std::cout << "Found in vector: " << *it << std::endl;

        it = easyfind(vec, 99);
        std::cout << "Found in vector: " << *it << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::list<int> lst;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);

    try {
        std::list<int>::iterator it2 = easyfind(lst, 2);
        std::cout << "Found in list: " << *it2 << std::endl;

        it2 = easyfind(lst, 42);
        std::cout << "Found in list: " << *it2 << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
