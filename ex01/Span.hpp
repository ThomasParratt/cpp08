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
        void addManyNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);  //should it work for any container? In which case <typename iterator> should be used
        unsigned int shortestSpan();
        unsigned int longestSpan();
};