#ifndef _LIBRARY_
#define _LIBRARY_

#include <bits/stdc++.h>
#include "..\Book\book.h"
#include "..\Member\member.h"
#include "..\Librarian\librarian.h"

class Library
{
private:
    vector<Book>books;
    vector<Member>members;
    vector<Librarian>librarians;

public:
    void addBook(Book temp);
    void addMember(Member temp);
    void addLibrarian(Librarian temp);
    void displayBooks(void);
    void displayMembers(void);
    void displayLibrarians(void);
};


#endif /* _LIBRARY_ */
