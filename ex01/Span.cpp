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

void Span::addManyNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if ((vec.size() + std::distance(begin, end)) <= N) // why less than or equal to?
        vec.insert(vec.end(), begin, end);
    else
        throw std::runtime_error("No more elements can be added");
}

unsigned int Span::shortestSpan()
{
    if (vec.size() < 2)
        throw std::runtime_error("Not enough numbers stored. Span cannot be found"); 

    std::sort(vec.begin(), vec.end());

    std::vector<int> diff(vec.size());
    std::adjacent_difference(vec.begin(), vec.end(), diff.begin());

    return (*std::min_element(diff.begin() + 1, diff.end()));
}

unsigned int Span::longestSpan()
{
    if (vec.size() < 2)
        throw std::runtime_error("Not enough numbers stored. Span cannot be found");

    auto max = std::max_element(vec.begin(), vec.end());
    auto min = std::min_element(vec.begin(), vec.end());
    return (*max - *min);
}