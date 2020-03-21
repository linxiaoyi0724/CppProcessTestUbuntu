#ifndef LIST_H_
#define LIST_H_

namespace LT
{
    typedef int Item;
    class List
    {
    private:
        enum {MAX = 5};
        Item items[MAX];
        int top = 0;
    public:
        List();
        ~List();
        void Add(const Item& item);
        bool IsEmpty();
        bool IsFull();
        void visit(void (*pf)(Item& item));
        void showItem();
    };

    void Plus100(Item& item);
}

#endif