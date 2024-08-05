#include "librarian.h"

/**
 * @brief Construct a new Librarian object
 * 
 * @param n 
 * @param i 
 */
Librarian::Librarian(string n, int i) : Person(n,i)
{

}

/**
 * @brief Displaying librarian information
 * 
 */
void Librarian::display(void)
{
    cout<<"Librarian Name: " << name << ", ID: " << id << endl;
}