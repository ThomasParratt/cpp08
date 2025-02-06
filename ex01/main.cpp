#include "Span.hpp"

int main(void)
{
    Span sp = Span(3);
    sp.addNumber(2);
    sp.addNumber(10);
    sp.addNumber(5);
    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.longestSpan() << std::endl;
}