#include "../include/Dictionary.h"

Dictionary::Dictionary()
{}
Dictionary::Dictionary(istream& is)
{}

void Dictionary::Flush()
{
    words.clear();
}

unsigned int Dictionary::Size() const
{
    return words.size();
}

void Dictionary::Insert(const string& str, const string& trad_str)
{
    words.insert(value_type(str,trad_str));
}

void Dictionary::Remove(const string& str)
{
    words.erase(str);
}

string Dictionary::Translate(const string& str) const
{
    const_iterator it;
    it = words.find(str);
    return it->second;
}

ostream& Dictionary::PrintOn(ostream& os) const
{
    for(const_iterator it=words.begin();it != words.end();++it)
    os << endl << (*it).first <<'\t'<< (*it).second;
    return os;
}

istream& Dictionary::ReadFrom(istream& is)
{

}

istream& Dictionary::ReadPair(istream& is)
{

}

istream& operator >> (istream& is, Dictionary& dico)
{

}
