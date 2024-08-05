#ifndef _LIBRARIAN_
#define _LIBRARIAN_

#include "..\Person\person.h"

class Librarian : public Person
{
public:
    Librarian(string n, int i);
    void display(void) override;
};

#endif /* _LIBRARIAN_ */
