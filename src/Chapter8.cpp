//test1
/*
#include <iostream>
void printStr(char* ch, int times = 1);
int main()
{
    char ch[] = "hello world";
    int times;
    printStr(ch);

    std::cout << "please input your print times:"<<std::endl;
    std::cin >> times;
    printStr(ch, times);
    return 0;
}


void printStr(char* ch, int times)
{
    if (times == 1)
    {
        std::cout << ch << std::endl;
        return;
    }
    std::cout << ch << std::endl;
    printStr(ch, times - 1);
}
*/





//test2
/*
#include <iostream>
struct CandyBar
{
    char* trademark;
    double weight;
    int cal;
};

void setValueAndShow(CandyBar& CB ,char* tm = "Millennium", double wh = 2.85, int cal = 350);
void showStruct(const CandyBar cb);

int main()
{
    CandyBar cb;
    setValueAndShow(cb);
    showStruct(cb);
    return 0;
}

void setValueAndShow(CandyBar& cb, char* tm, double wh, int cal)
{
    cb.trademark = tm;
    cb.weight = wh;
    cb.cal = cal;
}

void showStruct(const CandyBar cb)
{
    std::cout << "CandyBar trademark is: " << cb.trademark << std::endl;
    std::cout << "CandyBar weight is " << cb.weight << std::endl;
    std::cout << "CandyBar cal is " << cb.cal << std::endl;
}
*/








//test 3
/*
#include <iostream>
#include <string>
#include <cctype>
void convert(std::string& str);
int main()
{
    std::string str;
    std::cout <<"Enter a string(q to quit): ";
    getline(std::cin, str);
    while(str != "q")
    {
        convert(str);
        std::cout <<"Enter a string(q to quit): ";
        getline(std::cin, str);
    }
    std::cout << "Bye." <<std::endl;
}

void convert(std::string& str)
{
    for(int i = 0; i < str.size(); i++)
    {
        str[i] = toupper(str[i]);
    }
    std::cout <<str << std::endl;
}
*/









// test4
/*
#include <iostream>
#include <cstring>
struct  stringy
{
    char* str;
    int ct;
};
void set(stringy& sy, char testing[]);
void show(const stringy sy, int times = 1);
void show(const char* ch, int times = 1);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be. ";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing,3);
    show("Done!");
    return 0;
}

void set(stringy& sy, char testing[])
{
    stringy* sy1 = new stringy();
    sy1->str = testing;
    sy1->ct = strlen(testing);
    sy = *sy1;
}

void show(const stringy sy, int times)
{
    for(int i = 0; i < times; i++ )
    {
        std::cout << "str： "<<sy.str << "   ct: " << sy.ct << std::endl;
    }
}

void show(const char* ch, int times)
{
    for(int i = 0; i < times; i++)
    {
        std::cout << "str: " << ch  << std::endl;
    }
}
*/





//test 5
/*
#include <iostream>
template <typename T>
T max5(T arr[5]);

int main()
{
    int arrInt[5] = {1,3,4,5,6};
    int intMax = max5(arrInt);
    std::cout<<"Int array max member is " << intMax << std::endl;

    double arrDouble[5] = {1.1,3.3,5.5,8.8,7.7};
    double doubleMax = max5(arrDouble);
    std::cout<<"Double array max member is " << doubleMax << std::endl;
    return 0;
}

template <typename T>
T max5(T arr[5])
{
    T maxNumber = arr[0];
    for(int i = 1; i < 5; i++)
    {
        if(maxNumber < arr[i])
        {
            maxNumber = arr[i];
        }
    }
    return maxNumber;
}
*/




//test 6
/*
#include <iostream>
#include <cstring>
template <typename T>
T maxn(T arr[], int n);

template <> char* maxn<char*>(char*[], int n);

int main()
{
    int arrInt[] = {8, 7, 6 , 5, 4, 3};
    int intMax = maxn(arrInt,6);
    std::cout << "Int arr max member is " << intMax << std::endl;

    double arrDouble[] = {3.3, 9.9,7.7,5.5};
    double doubleMax = maxn(arrDouble, 4);
    std::cout << "Double arr max member is " << doubleMax << std::endl;

    char* ch[5] = {"xiaoyi","meizhen","qiongzi","yaoge","qiongai",};
    char* charMax = maxn(ch,5);
    std::cout << "char arr max member is " << charMax << std::endl;
}


template <typename T>
T maxn(T arr[], int n)
{
    T maxNumber = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(maxNumber < arr[i])
        {
            maxNumber = arr[i];
        }
    }
    return maxNumber;
}


template <> char* maxn<char*>(char* ch[], int n)
{
    char* charMaxPoint;
    int chamax = std::strlen(ch[0]);
    for(int i = 0; i < n; i++)
    {
        if(chamax < std::strlen(ch[i]))
        {
            chamax = std::strlen(ch[i]);
            charMaxPoint = ch[i];
        }
    }
    return charMaxPoint;
}
*/






//test8
/*
#include <iostream>
template <typename T>
void showTotal(T arr[], int n);

template <typename T>
void showTotal(T* arr[], int n);

struct  debts
{
    char name[50];
    double amount;
};

int main()
{
    int things[6] = {13, 31, 103, 301, 310, 130};
    debts mr_E[3] = 
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };

    double* pd[3];
    for(int i = 0; i < 3; i++)
    {
        pd[i] = &mr_E[i].amount;
    }
    std::cout << "Listing Mr.E's counts of things: \n";
    showTotal(things, 6);
    std::cout << "Listing Mr.E's debets: \n";

    showTotal(pd,3);
    return 0;     
}

template <typename T>
void showTotal(T arr[], int n)
{
    T total = 0;
    for(int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    std::cout << "Total is: " << total << std::endl;
}

template <typename T>
void showTotal(T* arr[], int n)
{
    T total = 0;
    for(int i =0; i < n; i++)
    {
        total += *arr[i];
    }
    std::cout << "Total is: " << total << std::endl;
}
*/






