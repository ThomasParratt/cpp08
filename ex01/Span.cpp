#include "Span.hpp"

Span::Span(unsigned int N) : N(N)
{
            
}

void Span::addNumber(unsigned int num)
{
    if (vec.size() < N)
        vec.push_back(num);
    else
        throw std::runtime_error("No more elements can be added");
}

/*unsigned int Span::shortestSpan()
{
        
}

unsigned int Span::longestSpan()
{

}*/