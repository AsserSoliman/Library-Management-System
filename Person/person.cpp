#include "person.h"

/**
 * @brief Construct a new Person object
 * 
 * @param n Name
 * @param i ID
 */
Person::Person(string n, int i):name(n), id(i)
{

}

/**
 * @brief Getting person name
 * 
 * @return string 
 */
string Person::getName(void)
{
    return name;
}

/**
 * @brief Getting person ID
 * 
 * @return int 
 */
int Person::getId(void)
{
    return id;
}