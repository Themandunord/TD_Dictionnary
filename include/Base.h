#ifndef BASE_H
#define BASE_H

#include <string>
#include <iostream>
#include "class.h"

class Base: public Class
{
    protected:
        virtual std::ostream& PrintOn(std::ostream&) const =0;
    public:
        virtual std::string ToString() const;
        friend std::ostream& operator << (std::ostream&, const Base&);
};

#endif
