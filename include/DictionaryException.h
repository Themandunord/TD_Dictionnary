#ifndef DICTIONARYEXCEPTION_H
#define DICTIONARYEXCEPTION_H

#include <sstream>
#include <exception>

class DictionaryException : public std::exception
{
    public:
        DictionaryException(const std::string&);
        virtual ~DictionaryException() throw();
        std::string message() const throw();
    private:
        std::string m_message;
};

#endif // DICTIONARYEXCEPTION_H
