#include "Plorg.h"
#include <iostream>
#include <cstring>

namespace PG
{
    Plorg::Plorg(char* name)
    {
        std::strcpy(mName,name);
        mCI = 50;
    }

    Plorg::~Plorg()
    {
        std::cout <<"The Plorg is closed." <<std::endl;
    }

    void Plorg::ChangeCI(int CI)
    {
        mCI = CI;
    }

    void Plorg::ShowPlorg()const
    {
        std::cout << "Plorg's name is: " << mName << std::endl;
        std::cout << "Plorg's CI is: " << mCI << std::endl;
    }
}