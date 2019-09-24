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
