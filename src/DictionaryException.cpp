#include "../include/DictionaryException.h"

DictionaryException::DictionaryException(const std::string& _message) : m_message(_message)
{}

DictionaryException::~DictionaryException() throw()
{}

std::string DictionaryException::message() const throw()
{
    return m_message;
}
