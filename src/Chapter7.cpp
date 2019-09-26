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





