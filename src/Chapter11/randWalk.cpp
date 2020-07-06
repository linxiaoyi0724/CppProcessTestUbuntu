
/*
// task1  task2
#include "vect.h"
#include <fstream>
#include <iostream>
#include <ctime>
using namespace std;
using VECTOR::Vector;
int main()
{
    ofstream fout;
    fout.open("./out.txt");

    fout<<"Target Distance: 100, Step Size: 20" <<endl;
    srand(time(0));
    Vector result(0,0);
    Vector step;
    unsigned long steps = 0;
    double target  = 100;
    double direction;

    while(result.magval() < target)
    {
        direction = rand() % 360;
        step.set(20, direction, 'p');
        result = result + step;
        fout << steps << ": (x,y) = (" << result.xval() << "," <<result.yval() << ")" << endl;
        steps++;
    }

    fout << "After " << steps << " steps, the subject has the following location:"<<endl;
    fout << "(x,y) = (" << result.xval() << ", " << result.yval() << ")" << endl;
    fout << "or" <<endl;
    fout << "(m, a) = (" << result.magval() << ", "<< result.angval() << ")" <<endl;
    fout << "Average outward distance per step = " << result.magval() / steps <<endl;
    fout.close();
    return 0;
}
*/




/*
// task 3
#include <iostream>
#include <ctime>
#include "vect.h"
using namespace std;
using VECTOR::Vector;
int main()
{
    int N;
    Vector result(0.0,0.0);
    Vector step;
    srand(time(0));
    int minSteps = 99999;
    int maxSteps = 0;
    int totalSteps = 0;
    cout << "Please enter your number of times you want test: ";
    cin >>N;
    for(int i = 0; i < N; i++)
    {
        int steps = 0;
        double dstep;
        double target;
        double direction;

        cout << "Please enter your length of steps and your target: ";
        if(!(cin>>dstep>>target))
            break;
        while (result.magval() < target)
        {
            direction = rand()%360;
            step.set(dstep, direction, 'p');
            result = result+step;
            steps++;
        }

        if(steps < minSteps)
            minSteps = steps;
        if(steps > maxSteps)
            maxSteps = steps;
        totalSteps += steps;
        result.set(0,0,'r');
    }

    cout << "max steps is " << maxSteps << endl;
    cout << "min steps is " << minSteps << endl;
    cout << "average steps is " << totalSteps / N << endl;
    return 0;
}
*/






