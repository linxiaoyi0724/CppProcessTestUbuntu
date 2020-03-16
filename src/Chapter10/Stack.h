#ifndef STACK_H_
#define STACK_H_

namespace ST
{
    const int MAX = 10;
    struct customer
    {
        char fullname[35];
        double payment;
    };
    

    typedef customer Item;

    class Stack
    {
    private:
        Item items[MAX];
        int top;
    public:
        Stack();
        ~Stack();
        bool isempty() const;
        bool isfull() const;
        bool push (const Item& item);
        bool pop(Item& item);
    };    
}



#endif