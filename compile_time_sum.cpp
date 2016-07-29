#include <iostream>

/**
 *  This code snippet is used to calculate 0+1+2+...+n-1+n at compile time.
 *  It's also an answer to question "how do you compute sum from 0 to n without using loop"
 */

template<unsigned int n>
struct Sum
{
    enum {result = n + Sum<n-1>::result};
};

template<>
struct Sum<0>
{
    enum {result = 0};
};

int main() {
    std::cout<<Sum<10>::result;
}
