#include "Span.hpp"

int main(void)
{
    Span sp = Span(3);
    sp.addNumber(2);
    sp.addNumber(10);
    sp.addNumber(5);
    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl; // try catch here?
    std::cout << "Longest span: " << sp.longestSpan() << std::endl;

    Span sp1 = Span(2);
    std::vector<int> temp = {1, 2, 3, 4, 5};
    try
    {
        sp1.addManyNumbers(temp.begin(), temp.end());
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << "Shortest span: " << sp1.shortestSpan() << std::endl; // can these both be in a try statement?
        std::cout << "Longest span: " << sp1.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

/*int main() // subject
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
}*/