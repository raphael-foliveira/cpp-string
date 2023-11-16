#ifndef STRING_HPP
#define STRING_HPP


#include <iostream>
using namespace std;


class String {
    char* charp;
    int len;

public:
    String();

    String(const char* charp);

    String(const String& other);

    ~String();

    int length();

    void giveMeAllAs();

    friend ostream& operator<<(ostream& ostream, const String& str);

    String& operator=(const String& other);
};

#endif