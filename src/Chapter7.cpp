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







