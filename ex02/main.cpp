#include "MutantStack.hpp"

int main()
{
    {
        std::cout << "TEST ONE" << std::endl;
        MutantStack<int> mstack1;
        MutantStack<int> mstack(mstack1);
        mstack.push(5);
        mstack.push(17);
        std::cout << "Top of stack => " << mstack.top() << std::endl;
        mstack.pop();
        std::cout << "Size of stack => " << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);

        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        std::cout << "Beginning to end: " << std::endl;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        MutantStack<int>::reverse_iterator rev_it = mstack.rbegin();
        MutantStack<int>::reverse_iterator rev_ite = mstack.rend();
        ++rev_it;
        --rev_it;
        std::cout << "End to beginning: " << std::endl;
        while (rev_it != rev_ite)
        {
            std::cout << *rev_it << std::endl;
            ++rev_it;
        }

        MutantStack<int>::iterator cit = mstack.begin();
        MutantStack<int>::iterator cite = mstack.end();
        ++cit;
        --cit;
        std::cout << "Beginning to end: " << std::endl;
        while (cit != cite)
        {
            std::cout << *cit << std::endl;
            ++cit;
        }
        MutantStack<int>::reverse_iterator crev_it = mstack.rbegin();
        MutantStack<int>::reverse_iterator crev_ite = mstack.rend();
        ++crev_it;
        --crev_it;
        std::cout << "End to beginning: " << std::endl;
        while (crev_it != crev_ite)
        {
            std::cout << *crev_it << std::endl;
            ++crev_it;
        }
        std::stack<int> s(mstack);
    }
    {
        std::cout << "TEST TWO" << std::endl;
        std::list<int> list;
        list.push_back(5);
        list.push_back(17);
        std::cout << "Top of stack => " << list.back() << std::endl;
        list.pop_back();
        std::cout << "Size of stack => " << list.size() << std::endl;
        list.push_back(3);
        list.push_back(5);
        list.push_back(737);
        //[...]
        list.push_back(0);

        std::list<int>::iterator it = list.begin();
        std::list<int>::iterator ite = list.end();
        ++it;
        --it;
        std::cout << "Beginning to end: " << std::endl;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::list<int>::reverse_iterator rev_it = list.rbegin();
        std::list<int>::reverse_iterator rev_ite = list.rend();
        ++rev_it;
        --rev_it;
        std::cout << "End to beginning: " << std::endl;
        while (rev_it != rev_ite)
        {
            std::cout << *rev_it << std::endl;
            ++rev_it;
        }

        std::list<int>::iterator cit = list.begin();
        std::list<int>::iterator cite = list.end();
        ++cit;
        --cit;
        std::cout << "Beginning to end: " << std::endl;
        while (cit != cite)
        {
            std::cout << *cit << std::endl;
            ++cit;
        }
        std::list<int>::reverse_iterator crev_it = list.rbegin();
        std::list<int>::reverse_iterator crev_ite = list.rend();
        ++crev_it;
        --crev_it;
        std::cout << "End to beginning: " << std::endl;
        while (crev_it != crev_ite)
        {
            std::cout << *crev_it << std::endl;
            ++crev_it;
        }
    }
    return 0;
}

// int main()
// {
//     {
//         std::cout << "TEST ONE" << std::endl;
//         MutantStack<int> mstack;
//         mstack.push(5);
//         mstack.push(17);
//         std::cout << mstack.top() << std::endl;
//         mstack.pop();
//         std::cout << mstack.size() << std::endl;
//         mstack.push(3);
//         mstack.push(5);
//         mstack.push(737);
//         //[...]
//         mstack.push(0);
//         MutantStack<int>::iterator it = mstack.begin();
//         MutantStack<int>::iterator ite = mstack.end();
//         ++it;
//         --it;
//         while (it != ite)
//         {
//             std::cout << *it << std::endl;
//             ++it;
//         }
//         std::stack<int> s(mstack);
//     }
//     {
//         std::cout << "TEST TWO" << std::endl;
//         std::list<int> list;
//         list.push_back(5);
//         list.push_back(17);
//         std::cout << list.back() << std::endl;
//         list.pop_back();
//         std::cout << list.size() << std::endl;
//         list.push_back(3);
//         list.push_back(5);
//         list.push_back(737);
//         //[...]
//         list.push_back(0);
//         std::list<int>::iterator it = list.begin();
//         std::list<int>::iterator ite = list.end();
//         ++it;
//         --it;
//         while (it != ite)
//         {
//             std::cout << *it << std::endl;
//             ++it;
//         }
//     }
//     return 0;
// }