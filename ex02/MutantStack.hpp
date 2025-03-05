#pragma once
#include <iostream>
#include <stack>
#include <list>

template<typename T, typename D = std::deque<T>>
class MutantStack : public std::stack<T, D>
{
    private:
        using std::stack<T>::c;
    public:
        MutantStack(){};

        MutantStack(const MutantStack& cpy) : std::stack<T, D>(cpy)
        {
            *this = cpy;
        }

        MutantStack& operator=(const MutantStack& cpy)
        {
            if (this == &cpy)
                return (*this);
            std::stack<T, D>::operator=(cpy);
            return (*this);
        }

        ~MutantStack(){};

        typedef typename D::iterator iterator;
        iterator    begin()
        {
            return (c.begin());
        }

        iterator    end()
        {
            return (c.end());
        }

        typedef typename D::reverse_iterator reverse_iterator;
        reverse_iterator    rbegin()
        {
            return (c.rbegin());
        }

        reverse_iterator    rend()
        {
            return (c.rend());
        }
};