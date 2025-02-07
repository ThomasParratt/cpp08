#pragma once
#include <iostream>
#include <stack>

template<typename T, typename D = std::deque<T>>
class MutantStack : public std::stack<T, D>
{
    private:
        using std::stack<T>::c;
    public:
        typedef typename D::iterator iterator;
        iterator    begin()
        {
            return (c.begin());
        }

        iterator    end()
        {
            return (c.end());
        }
};