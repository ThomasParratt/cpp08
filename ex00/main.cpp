#include "easyfind.hpp"

int main() 
{
    std::vector<int> vec = {1, 2, 3, 4, 5};
    
    try 
    {
        auto it = easyfind(vec, 9);
        std::cout << "Found value: " << *it << std::endl;
    }
    catch (const std::exception &e) 
    {
        std::cout << e.what() << std::endl;
    }
}