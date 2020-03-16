#include "./Move.h"
#include <iostream>

namespace ME
{
    Move::Move(double a, double b)
    {
        x = a;
        y = b;
    }

    Move::~Move()
    {
        std::cout << "The Move is closed! " << std::endl;
    }

    void Move::ShowMove()const
    {
        std::cout << "Current x: " << x <<std::endl;
        std::cout << "Current y: " << y << std::endl;
    }

    Move Move::add(const Move& m)const
    {
        Move a;
        a.x = m.x;
        a.y = m.y;
        return a;
    }

    void Move::reset(double a, double b)
    {
        x = a;
        y = b;
    }
}