#include "easyfind.hpp"

int main() 
{
    std::vector<int> vec = {1, 2, 3, 4, 5};
    try 
    {
        auto it = easyfind(vec, 3);
        std::cout << "Found value: " << *it << std::endl;
    }
    catch (const std::exception &e) 
    {
        std::cout << e.what() << std::endl;
    }

    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    try 
    {
        auto it = easyfind(arr, 3);
        std::cout << "Found value: " << *it << std::endl;
    }
    catch (const std::exception &e) 
    {
        std::cout << e.what() << std::endl;
    }
}