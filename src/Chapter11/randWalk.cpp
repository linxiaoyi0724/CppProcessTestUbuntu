
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



#include <iostream>
#include <ctime>
#include "vect.h"
using namespace std;
using VECTOR::Vector;
int main()
{
    int N;
    Vector result(0.0,0.0);
    srand(time(0));
    cout << "Please enter your number of times you want test: ";
    cin >>N;
    for(int i = 0; i < N; i++)
    {
        int steps = 0;
        double dstep;
        
        cout << "Please enter your length of steps: ";
        if(!(cin>>dstep))
            break;
        while (result.magval() < target)
        {
            /* code */
        }
        
    }
}



