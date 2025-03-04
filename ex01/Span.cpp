#include "Span.hpp"

Span::Span(unsigned int N) : _N(N)
{
            
}

void Span::addNumber(unsigned int num)
{
    if (_vec.size() < _N)
        _vec.push_back(num);
    else
        throw std::runtime_error("No more elements can be added");
}

void Span::addManyNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if ((_vec.size() + std::distance(begin, end)) <= _N)
        _vec.insert(_vec.end(), begin, end);
    else
        throw std::runtime_error("No more elements can be added");
}

unsigned int Span::shortestSpan()
{
    if (_vec.size() < 2)
        throw std::runtime_error("Not enough numbers stored. Span cannot be found");

    std::sort(_vec.begin(), _vec.end());

    std::vector<int> diff(_vec.size());
    std::adjacent_difference(_vec.begin(), _vec.end(), diff.begin());

    return (*std::min_element(diff.begin() + 1, diff.end())); //first element always zero
}

unsigned int Span::longestSpan()
{
    if (_vec.size() < 2)
        throw std::runtime_error("Not enough numbers stored. Span cannot be found");

    auto max = std::max_element(_vec.begin(), _vec.end());
    auto min = std::min_element(_vec.begin(), _vec.end());
    return (*max - *min);
}