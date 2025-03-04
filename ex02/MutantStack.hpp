#pragma once
#include <iostream>
#include <stack>
#include <list>

template<typename T, typename D = std::deque<T>>
class MutantStack : public std::stack<T, D> //CANONICAL FORM
{
    private:
        using std::stack<T>::c;
    public:
        MutantStack()
        {

        }

        MutantStack(const MutantStack&)
        {

        }

        MutantStack& operator=(const MutantStack&)
        {

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

        typedef typename D::const_iterator const_iterator;
        const_iterator    cbegin()
        {
            return (c.cbegin());
        }

        const_iterator    cend()
        {
            return (c.cend());
        }

        typedef typename D::const_reverse_iterator const_reverse_iterator;
        const_reverse_iterator    crbegin()
        {
            return (c.crbegin());
        }

        const_reverse_iterator    crend()
        {
            return (c.crend());
        }
};