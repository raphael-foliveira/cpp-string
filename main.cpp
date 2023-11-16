#include <iostream>
#include "string.hpp"
#include "utils.hpp"
using namespace std;


int main() {
    String s1("hello");
    bool isOdd = odd(s1);

    cout << s1 << "\n";
    return 0;
}
