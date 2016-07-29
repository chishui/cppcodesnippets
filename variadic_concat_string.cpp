#include <string>
#include <sstream>
#include <iostream>

void combine(std::ostream &os) {}

template<class F, class... T>
void combine(std::ostream & os, F f, T... args) {
    os << f;
    combine(os, args...);
}


template<typename... Args>
std::string concat_string(Args... args) {
    std::ostringstream oss;
    combine(oss, args...);
    return oss.str();
}

int main() {
    std::cout<<concat_string("hello", ",", "world", "!");
}
