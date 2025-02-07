#pragma once
#include <iostream>
#include <stack>

template<typename T, typename D = std::deque<T>>
class MutantStack   :   public std::stack<T, D>
{
    private:

    public:
};