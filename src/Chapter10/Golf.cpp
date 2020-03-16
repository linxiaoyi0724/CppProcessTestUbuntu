#include "./Golf.h"
#include <cctype>
#include <iostream>
#include <cstring>

namespace GF
{
    golf::golf()
    {

    }

    golf::golf(const char* name, int hc)
    {
        std::strcpy(fullname,name);
        handicap = hc;
    }

    golf::golf(golf& g)
    {
        std::strcpy(fullname, g.fullname);
        handicap = g.handicap;
    }

    void golf::setgolf(const char* name, int hc)
    {
        golf gl(name, hc);
        std::strcpy(this->fullname, gl.fullname);
        this->handicap = gl.handicap;
    }

    void golf::showgolf(const golf& g)const
    {
        std::cout << "name:  "<<g.fullname<<std::endl;
        std::cout << "handicap: " << g.handicap << std::endl;
    }

    golf::~golf()
    {
        std::cout << "The class is closed."<<std::endl;
    }
}