#pragma once 
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cstdlib>
#include <ctime>

class Span //CANONICAL FORM
{
    private:
        unsigned int        _N;
        std::vector<int>    _vec;
    public:
        Span(unsigned int _N);
        void addNumber(unsigned int num);
        void addManyNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        unsigned int shortestSpan();
        unsigned int longestSpan();
};