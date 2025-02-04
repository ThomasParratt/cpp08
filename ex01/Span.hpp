#pragma once 
#include <iostream>
#include <vector>

class Span //CANONICAL FORM
{
    private:
        unsigned int        N;
        std::vector<int>    vec;
    public:
        Span(unsigned int N);
        void addNumber(unsigned int num);
        //unsigned int shortestSpan();
        //unsigned int longestSpan();
};