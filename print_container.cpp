#include <iostream>

template<typename T, typename U>
std::ostream& operator<<(std::ostream & os, const std::pair<T, U>& val)
{
    os<<"["<<val.first<<","<<val.second<<"]";
    return os;
}

template<template<typename, typename...>class ContainerType,
        typename val,
        typename ...args>
void print_container(const ContainerType<val, args...>& c)
{
    for (auto &v : c)
    {
        std::cout<<v<<" ";
    }
}


