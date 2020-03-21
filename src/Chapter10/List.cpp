#include "./List.h"
#include <iostream>
namespace LT
{
    List::List()
    {
        top = 0;
    }

    List::~List()
    {
        std::cout << "The List class is closed!" << std::endl;
    }

    void List::Add(const Item& item)
    {
        if(top > MAX)
        {
            std::cout << "The List is full !"<<std::endl;
        }

        items[top++] = item;
    }

    bool List::IsEmpty()
    {
        return top == 0;
    }

    bool List::IsFull()
    {
        return top == MAX;
    }

    void List::visit(void (*pf)(Item& item))
    {
        for(int i = 0; i < top; i++)
        {
            pf(items[i]);
        }
    }

    void List::showItem()
    {
        for(int i = 0; i < top; i++)
        {
            std::cout << "items[" << i << "]: " << items[i] << std::endl;
        }
    }

    void Plus100(Item& item)
    {
        item += 100;
    }
}