#include "string.hpp"


String::String() : len(0) {
    charp = new char[1];
    charp[0] = '\0';
}

String::String(const char* str) {
    len = 0;
    while (str[len] != '\0') {
        len++;
    }
    charp = new char[len + 1];
    for (int i = 0; i < len; i++) {
        charp[i] = str[i];
    }
}

String::String(const String& other) {
    len = other.len;
    charp = new char[len + 1];
    for (int i = 0; i < len; i++) {
        charp[i] = other.charp[i];
    }
}

String& String::operator=(const String& rhs) {
    delete[] charp;
    len = rhs.len;
    charp = new char[len + 1];
    for (int i = 0; i < len; i++) {
        charp[i] = rhs.charp[i];
    }
    return *this;
}

String::~String() {
    delete[] charp;
}

void String::giveMeAllAs() {
    for (int i = 0; i < len; i++) {
        charp[i] = 'a';
    }
}

ostream& operator<<(ostream& os, const String& s) {
    return os << s.charp;
}

int String::length() {
    return len;
}
