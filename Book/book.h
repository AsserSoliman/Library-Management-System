#ifndef _BOOK_
#define _BOOK_

#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
    string title;
    string author;
    string ISBN;
    bool available;

public:
    Book(string t, string a, string i);
    string getTitle(void);
    string getAuthor(void);
    string getISBN(void);
    bool getAvailability(void);
    void display(void);
};
#endif /* _BOOK_ */
