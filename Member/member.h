#ifndef _MEMBER_
#define _MEMBER_

#include "..\Person\person.h"

class Member : public Person
{
public:
    Member(string n , int i);
    void display(void) override;
};

#endif /* _MEMBER_ */
