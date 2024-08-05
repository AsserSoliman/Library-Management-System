#include "member.h"

/**
 * @brief Construct a new Member object
 * 
 * @param n Name
 * @param i ID
 */
Member::Member(string n , int i):Person(n,i)
{

}

/**
 * @brief Displaying member information
 * 
 */
void Member::display(void)
{
    cout<<"Member Name: " << name << ", ID: " << id << endl;
}