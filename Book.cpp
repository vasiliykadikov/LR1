#include "Book.h"
Book::Book()
{
	author = name = "";
	pages = 0;
}
void Book::set(string author, string name, int pages)
{
    this->author = author;
    this->name = name;
    this->pages = pages;
}
void Book::print()
{
    cout << "\nauthor: " << author << "\nname: " << name << " \npages: " << pages << endl;
}
int Book::page_return()
{
    return pages;
}