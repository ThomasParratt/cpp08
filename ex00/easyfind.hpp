#pragma once 
#include <iostream>

template<typename T>
int    easyfind(T &a, int &b)
{
    for (auto &it : a)
    {
        if (it == b)
            return (1);
    }
    return (0);
}