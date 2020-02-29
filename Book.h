#pragma once
#include <string>
#include <iostream>
using namespace std;
class Book
{
    string author, name;
    int pages;
public:
    Book();

    void set(string author, string name, int pages);
    void print();
    int page_return();
};


