#include "application.h"


int main(void)
{
    Library x;  // Creating Library

    // Adding Books
    x.addBook(Book("Python","Mecking","9854"));
    x.addBook(Book("C","Robet","954"));
    x.addBook(Book("C++","Armin","984"));

    // Adding Librarians
    x.addLibrarian(Librarian("Mark",19100864));

    // Adding Members
    x.addMember(Member("Martin",19101965));

    // Displaying
    x.displayBooks();
    x.displayMembers();
    x.displayLibrarians();

    return 0;
}