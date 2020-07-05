/* 

// task1
#include "./BankAccount.h"
#include <iostream>
int main()
{
    Bank::BankAccount ba("xiaoyi", "781210678", 10000);
    ba.Display();
    ba.StoreMoney(10000);
    ba.Display();
    ba.PickUpMoney(8000);
    ba.Display();
    return 0;
}
*/



/*
//task2
#include "./Person.h"
#include <iostream>
int main()
{
    PS::Person one;
    PS::Person two("Smythecraft");
    PS::Person three("Dimwiddy", "Sam");

    one.Show();
    std::cout << std::endl;
    one.FormalShow();

    three.Show();
    three.FormalShow();
    return 0;
}
*/





/*

//task3
#include "golf.h"
int main()
{
    GF::golf gl0("xiaoyi", 1000);
    GF::golf gl1;
    gl1.setgolf("meizhen",2000);
    gl0.showgolf(gl0);
    gl1.showgolf(gl1);
    return 0;
}
*/


/*
//task4
#include "./Sales.h"
int main()
{
    double s1[4] = {1,2,3,4};
    SL::Sales sl1(s1, 4);
    SL::Sales sl2;
    sl2.setSales(sl1);
    sl1.showSales(sl1);
    sl2.showSales(sl2);
    return 0;
}
*/


/*
//task5
#include "./Stack.h"
int main()
{
    double sumPayment = 0;
    ST::Stack st;
}
*/



/*
//task6
#include "./Move.h"
int main()
{
    ME::Move m1;
    ME::Move m2(100,200);
    m1 = m2.add(m2);
    m1.ShowMove();
    m2.ShowMove();
    m1.reset();
    m2.reset();
    return 0;
}
*/
    


/*
//task7
#include "./Plorg.h"
int main()
{
    PG::Plorg pg("xiaoyi");
    pg.ChangeCI(100);
    pg.ShowPlorg();
    return 0;
}
*/




/*
//task 8

#include "./List.h"
#include <cctype>
#include <iostream>
int main()
{
    int data;
    LT::List l;
    char ch;

    std::cout << "Please enter c to create list, enter p to process list, enter s to showitem, enter q to quit" <<  std::endl;

    while ( std::cin >> ch && toupper(ch) != 'Q')
    {
        while (std::cin.get() != '\n')
        {
            continue;
        }

        switch (ch)
        {
        case 'C':
        case 'c':
            if(l.IsFull())
            {
                std::cout << "The list is full. " << std::endl;
            }
            else
            {
                std::cout << "Enter the data: ";
                std::cin >> data;
                l.Add(data);
            }
            break;
        case 'P':
        case 'p':
            if(l.IsEmpty())
            {
                std::cout << "The list already empty!" << std::endl;
            }
            else
            {
                l.visit(LT::Plus100);
                std::cout << "Enery data has plused 100" << std::endl;
            }

            break;
        case 's':
        case 'S':
            l.showItem();
            break;
        }

        std::cout << "Please enter C to create your list , P to process the list, q to quit:" << std::endl;
    }
    l.showItem();
    std::cout << "Bye" << std::endl;
    return 0;
}
*/