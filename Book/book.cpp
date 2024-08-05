#include "book.h"

/**
 * @brief Construct a new Book object
 * 
 * @param t Title
 * @param a Author
 * @param i ISBN
 */
Book::Book(string t, string a, string i): title(t), author(a),ISBN(i),available(true)
{

}

/**
 * @brief Getting book title
 * 
 * @return string 
 */
string Book::getTitle(void)
{
    return title;
}

/**
 * @brief Getting book author
 * 
 * @return string 
 */
string Book::getAuthor(void)
{
    return author;
}

/**
 * @brief Getting book ISBN
 * 
 * @return string 
 */
string Book::getISBN(void)
{
    return ISBN;
}

/**
 * @brief Checking book availability
 * 
 * @return true 
 * @return false 
 */
bool Book::getAvailability(void)
{
    return available;
}

/**
 * @brief Displaying book information
 * 
 */
void Book::display()
{
    cout << "Title: " << title << ", Author: " << author << ", ISBN: " << ISBN << ", Available: " << (available? "Yes":"No") << endl;
}
