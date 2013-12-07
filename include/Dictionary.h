#ifndef DICTIONARY_H
#define DICTIONARY_H
#include "Base.h"
#include <map>

using namespace std;

class Dictionary : public Base
{
    public:
        Dictionary();
        Dictionary(istream&);
        virtual ~Dictionary() {};

        virtual void Flush();
        virtual unsigned int Size() const;
        virtual void Insert(const string&, const string&);
        virtual void Remove(const string&);
        virtual string Translate(const string&) const;
        virtual ostream& PrintOn(ostream&) const;
    protected:
        virtual istream& ReadFrom(istream& );
        virtual istream& ReadPair(istream&);
        friend istream& operator >> (istream&, Dictionary&);
    private:
        typedef map<string, string> Words;
        typedef Words::value_type value_type;
        typedef Words::iterator iterator;
        typedef Words::const_iterator const_iterator;
    private:
        Words words;
};
#endif
