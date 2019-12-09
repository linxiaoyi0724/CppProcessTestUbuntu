/*
//task 1
#include <iostream>
#include <string.h>
#include <stdio.h>
#include "golf.h"
void setgolf(golf& g, const char* name, int hc)
{
    stpcpy(g.fullname, name);
    g.handocap = hc;
}

int setgolf(golf& g)
{
    std::cout  << "Please input your name: ";
    std::cin.getline(g.fullname,Len);
    if(!strcmp(g.fullname,""))
    {
        std::cin.clear();
        std::cin.ignore();
        return 0;
    }
    std::cout << "Please input your handocap: ";
    std::cin >> g.handocap;
    if(!std::cin)
    {
        std::cin.clear();
        std::cin.ignore();
        return 0;
    }
    std::cin.clear();
    std::cin.ignore();
    return 1;
}

void handicap(golf& g, int hc)
{
    g.handocap = hc;
}

void showgolf(const golf& g)
{
    std::cout << "golf's fullname: " << g.fullname << std::endl;
    std::cout << "golf's handicap: " << g.handocap << std::endl;
}
*/




