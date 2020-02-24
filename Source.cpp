#include <iostream>
#include <string>
using namespace std;
class Book
{
    string author, name;
    int pages;
public:
    Book()
    {
        author = name = "";
        pages = 0;
    }
    void set(string author, string name, int pages)
    {
        this -> author = author;
        this -> name = name;
        this -> pages = pages;
    }
    void print()
    {
        cout << "\nauthor: " << author << "\nname: " << name << " \npages: " << pages;
    }
    int page_return()
    {
        return pages;
    }
};
int main()
{
    int N, max, a = 0;
    cout << "N=";
    cin >> N;
    Book *pBook;
    pBook = new Book[N];
    for (int i = 0; i < N; i++)
    {
        string aut, Name;
        int Pages;
        cout << "\nBook " << i + 1 << "\nauthor: ";
        cin >> aut;
        cout << "\nname: ";
        cin >> Name;
        cout << " \npages: ";
        cin >> Pages;
        pBook[i].set(aut, Name, Pages);
    }
    for (int i = 0; i < N; i++)
    {
        pBook[i].print();
    }
    max = pBook[0].page_return();
    for (int i = 0; i < N; i++)
    {
        if (max < pBook[i].page_return()) {
         max = pBook[i].page_return();
         a = i; 
        }
    }
    cout << "\nmax Pages: ";
    pBook[a].print();
    system("pause");
}