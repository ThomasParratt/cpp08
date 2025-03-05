#pragma once 
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

class Span
{
    private:
        unsigned int        _N;
        std::vector<int>    _vec;
    public:
        Span();
        Span(const Span&);
        Span(unsigned int _N);
        Span& operator=(const Span&);
        ~Span();
        void addNumber(int num);
        void addManyNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        unsigned int shortestSpan();
        unsigned int longestSpan();
};