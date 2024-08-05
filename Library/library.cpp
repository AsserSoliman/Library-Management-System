#include "library.h"

/**
 * @brief Adding book to library
 * 
 * @param temp Book
 */
void Library::addBook(Book temp)
{
    books.push_back(temp);
}

/**
 * @brief Adding member to library
 * 
 * @param temp Member
 */
void Library::addMember(Member temp)
{
    members.push_back(temp);
}

/**
 * @brief Adding librarian to library
 * 
 * @param temp Librarian
 */
void Library::addLibrarian(Librarian temp)
{
    librarians.push_back(temp);
}

/**
 * @brief Displaying library books
 * 
 */
void Library::displayBooks(void)
{   
    cout<<"Books List: "<<endl;
    cout<<"-------------"<<endl;
    for(vector<Book>::iterator it = books.begin(); it != books.end() ; it++)
    {
        it->display();
    }
    cout<<"---------------------------------------------------------------"<<endl;
}

/**
 * @brief Displaying library members
 * 
 */
void Library::displayMembers(void)
{
    cout<<"Members List: "<<endl;
    cout<<"---------------"<<endl;
    for(vector<Member>::iterator it = members.begin(); it != members.end() ; it++)
    {
        it->display();
    }
    cout<<"---------------------------------------------------------------"<<endl;
}

/**
 * @brief Displaying library librarians
 * 
 */
void Library::displayLibrarians(void)
{   
    cout<<"Librarians List: "<<endl;
    cout<<"-----------------"<<endl;
    for(vector<Librarian>::iterator it = librarians.begin(); it != librarians.end() ; it++)
    {
        it->display();
    }
    cout<<"---------------------------------------------------------------"<<endl;
}