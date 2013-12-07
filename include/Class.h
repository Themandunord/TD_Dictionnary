#ifndef CLASS_H
#define CLASS_H
class Class
{
    public:
        Class();
        Class(const Class&);
        virtual ~Class();
        static unsigned int GetRef();
    private:
        static unsigned int ref;
};
#endif
