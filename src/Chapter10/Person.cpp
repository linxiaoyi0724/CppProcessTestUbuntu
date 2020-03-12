#include "./Person.h"
#include <cstring>
namespace PS
{
    Person::Person()
    {
        lname = "";
        fname[0] = '\0';
    }

    Person::Person(const std::string& ln, const char* fn)
    {
        lname = ln;
        std::strcpy(fname,fn);
    }

    Person::~Person()
    {
        std::cout <<"The Class is closed" <<std::endl;
    }

    void Person::Show() const
    {
        std::cout << "Name: " << fname << " " << lname << std::endl;
    }

    void Person::FormalShow() const
    {
        std::cout << "Name: " << lname << " " << fname <<std::endl;
    }
}