#pragma once 
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

class Span //CANONICAL FORM
{
    private:
        unsigned int        N;
        std::vector<int>    vec;
    public:
        Span(unsigned int N);
        void addNumber(unsigned int num);
        void addManyNumbers();
        unsigned int shortestSpan();
        unsigned int longestSpan();
};