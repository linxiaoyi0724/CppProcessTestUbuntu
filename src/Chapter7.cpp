//
// Created by yihuang on 9/24/2019.
//




/*
// task 1
#include <iostream>
double getAverage(double x, double y);
int main()
{
    double a, b;
    std::cout << "Please input two number:";
    std::cin >> a >> b ;
    while(a != 0 && b != 0)
    {
        double avege = getAverage(a,b);
        std::cout << "The two number average is "<<avege <<std::endl;
        std::cout << "Please input two number:";
        std::cin >> a >> b ;
    }
    std::cout << "Done" <<std::endl;
    return 0;
}

double  getAverage(double x, double y)
{
    return 2.0 * x * y / (x + y);
}
*/







/*
// task 2
#include <iostream>

const int maxSize = 10;
int inputArray(double arr[], const int maxSize);
void displayArray(double arr[], const int count);
double getAverage(double arr[], const int count);

int main()
{
    double arr[maxSize];
    int count = inputArray(arr, maxSize);
    displayArray(arr, count);
    double average = getAverage(arr, count);
    std::cout << "The average of arr is: " << average <<std::endl;
    return 0;
}

int inputArray(double arr[], const int maxSize)
{
    std::cout << "Please input number of arr(q to quit): ";
    int count = 0;
    while (std::cin>>arr[count] && count < maxSize-1)
    {
        count++;
        std::cout << "Please input number of arr(q to quit): "<<count;
    }
    return  count + 1;
}

void displayArray(double arr[], const int count)
{
    std::cout << "The array is:";
    for(int i = 0; i < count; i++)
    {
        std::cout << " "<< arr[i];
    }
    std::cout << std::endl;
}

double getAverage(double arr[], const int count)
{
    double  total;
    for(int i = 0; i < count; i++)
    {
         total += arr[i];
    }
    return  total / count;
}
*/








/*
//task 3
#include <iostream>
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void displayMember(box b);
void setVolume(box* pb);

int main()
{
    box b = {"xiaoyi",
             3,
             4,
             5};

    setVolume(&b);
    displayMember(b);
    return  0;
}

void displayMember(box b)
{
    std::cout << "The box's maker is : " << b.maker <<std::endl;
    std::cout << "The box's height is : " << b.height << std::endl;
    std::cout << "The box's width is : " << b.width << std::endl;
    std::cout << "The box's length is : " << b.length << std::endl;
    std::cout << "The box's volume is : " << b.volume <<std::endl;
}

void setVolume(box* pb)
{
    pb->volume = pb->length * pb->height * pb->width;
}
*/





/*
// task 4
#include <iostream>
const int totalNumber = 47;
const int selectNumber = 5;
int main()
{
    double result = 1;
    for(double i = totalNumber, j = 5; j > 0; i--,j-- )
    {
        result *= j/totalNumber;
    }
    result = result / 27;
    std::cout << "The winning probability is " << result <<std::endl;
    return  0;
}
*/








/*
// task 5
#include <iostream>
double calculatesFactorial(int num);
int main()
{
    int n;
    std::cout.setf(std::ios_base::fixed);
    std::cout << "Please input you number(q to quit):";
    while (std::cin >> n)
    {
        double result;
        result = calculatesFactorial(n);
        std::cout << "The " << n << " 's Factorial is " << result << std::endl;
        std::cout << "Please input you number(q to quit):";
    }
    std::cout << "Done" <<std::endl;
    return  0;
}

double calculatesFactorial(int num)
{
    if (num == 1 )
    {
        return  1;
    }
    return  num * calculatesFactorial(num -1);
}
*/










/*
// task 6
#include <iostream>
const int len = 10;
int Fill_array(double arr[], int len);
void Show_array(double arr[], int len);
void Reverse_array(double arr[], int len);
int main()
{
    double numArr[len];
    int count = Fill_array(numArr, len);
    Show_array(numArr, count);
    Reverse_array(numArr, count);
    Show_array(numArr, count);
    Reverse_array(numArr+1,count-2);
    Show_array(numArr, count);
    return  0;
}

int Fill_array(double arr[], int len)
{
    int count = 0;
    std::cout << "Please input double number: ";
    while(std::cin >> arr[count] && count < len)
    {
        count++;
        std::cout << "Please input double number: ";
    }
    return  count;
}

void Show_array(double arr[], int len)
{
    std::cout << "The array number is ";
    for(int i = 0; i < len; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void Reverse_array(double arr[], int len) {
    double temp;
    int mid = len / 2;
    for (int i = 0, j = len; i < mid; i++, len--)
    {
        temp = arr[i];
        arr[i] = arr[len-1];
        arr[len-1] = temp;
    }
}
*/





/*
//task 7
#include <iostream>
const int maxSize = 5;
double* fillArray(double* pBegin, double* pEnd);
void showArray(double* pBegin, double* pEnd);
void revalue(double r, double* pBegin, double* pEnd);
int main()
{
    double propertise[maxSize];
    double* pEnd;
    pEnd = fillArray(propertise,propertise+maxSize);
    showArray(propertise, pEnd);
    std::cout << "Enter reassessment rate: ";
    double r;
    std::cin >> r;
    revalue(r, propertise, pEnd);
    std::cout << "Done" << std::endl;
    return 0;
}

double* fillArray(double* pBegin, double* pEnd)
{
    double temp;
    double* pt;
    for(pt = pBegin; pt!=pEnd;pt++)
    {
        std::cout << "Enter value #1: ";
        std::cin >> temp;
        if(!std::cin)
        {
            std::cin.clear();
            while (std::cin.get()!='\n')
            {
                continue;
            }
            std::cout << "Bad input" <<std::endl;
            break;
        }
        else if(temp < 0)
        {
            break;
        }
        *pt = temp;
    }
    return pt;
}

void showArray(double* pBegin, double* pEnd)
{
    double* pt;
    for(pt = pBegin; pt!=pEnd; pt++)
    {
        std::cout << "Property # " << *pt << std::endl;
    }
}

void revalue(double r, double* pBegin, double* pEnd)
{
    double* pt;
    for(pt = pBegin; pt!= pEnd; pt++)
    {
        *pt *= r;
        std::cout << "Property #" << *pt <<std::endl;
    }
}
*/





/*
// task 8
#include <iostream>
using namespace std;
const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;

    student* ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for(int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(student pa[], int n)
{
    int count = 0;
    for(int i = 0; i < n ; i++)
    {
        cout << "Please input student's name(enter to quit): ";
        cin.getline(pa[i].fullname, SLEN);
        if(pa[i].fullname[0] == '\0')
        {
            break;
        }
        cout << "Please input your hobby: ";
        cin.getline(pa[i].hobby, SLEN);
        cout << "Please input your ooplevel: ";
        cin>>pa[i].ooplevel;
        count ++;
        cin.ignore();
    }
    return  count;
}


void display1(student st)
{
    cout << "The student' name is " << st.fullname<<endl;
    cout << "The student' hobby is "<< st.hobby <<endl;
    cout << "The student' ooplevel is " << st.ooplevel <<endl;
}

void display2(const student* ps)
{
    cout << "The student' name is " << ps->fullname<<endl;
    cout << "The student' hobby is "<< ps->hobby <<endl;
    cout << "The student' ooplevel is " << ps->ooplevel <<endl;
}

void display3(const student pa[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "The student' name is " << pa[i].fullname<<endl;
        cout << "The student' hobby is "<< pa[i].hobby <<endl;
        cout << "The student' ooplevel is " << pa[i].ooplevel <<endl;
    }
}
*/







/*
 //task 9-1
#include <iostream>
double add(double x, double y);
double calculate(double x, double y, double (*pf)(double, double));
int main()
{
    double x,y;
    std::cout << "Please input your data: ";
    while(std::cin>>x>>y)
    {
        double total = calculate(x,y,add);
        std::cout << "Total is " << total <<std::endl;
    }
    return  0;
}

double add(double x , double y)
{
    return  x + y;
}

double calculate(double x , double y, double(*pf)(double, double))
{
    return (*pf)(x,y);
}
*/





/*
 //task 9-2
#include <iostream>
double add(double x, double y);
double sub(double x, double y);
double mix(double x, double y);
double calculate(double x, double y, double (*pf)(double, double));
int main()
{
    double (*pf[3])(double, double) = {add, sub, mix};
    double x,y;
    std::cout << "Please input your data(q to quit): ";
    while (std::cin>>x>>y)
    {
        for(int i = 0; i <3; i++)
        {
            double total = calculate(x,y,(*pf[i]));
            std::cout << "The total is : " << total << std::endl;
        }
    }
    return 0;
}

double add(double x , double y)
{
    return  x + y;
}

double sub(double x, double y)
{
    return x-y;
}

double mix(double x, double y)
{
    return x*y;
}

double calculate(double x , double y, double (*pf)(double, double))
{
    return (*pf)(x,y);
}
*/





