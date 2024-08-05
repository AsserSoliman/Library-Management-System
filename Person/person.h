#ifndef _PERSON_
#define _PERSON_

#include <iostream>
#include <string>

using namespace std;

class Person
{
protected:
    string name;
    int id;
public:
    Person(string n, int i);
    string getName(void);
    int getId(void);
    virtual void display(void) = 0;
};

#endif /* _PERSON_ */
