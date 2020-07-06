/*
//task 5
#include <iostream>
#include "stonewt.h"
using namespace std;
int main()
{
    Stonewt pavarotti = 260;
    Stonewt wolfe(285.7);
    Stonewt taft(21,8);

    pavarotti.setMode("lbs");
    wolfe.setMode("stn");
    taft.setMode("lbs");

    cout << pavarotti <<endl;
    cout << wolfe <<endl;
    cout << taft <<endl;

    cout << wolfe + taft <<endl;
    cout << taft - wolfe <<endl;
    cout << pavarotti *2 <<endl;
    cout << 2 * pavarotti <<endl;
    return 0;
}
*/



#include <iostream>
#include "stonewt.h"
using namespace std;
int main()
{
    Stonewt st[6] = {Stonewt(11,0), Stonewt(285.7), Stonewt(21,8)};
    for(int i = 3; i< 6;i++)
    {
        st[i] = 250+i;
    }

    Stonewt minStonewt = st[0];
    Stonewt maxStonewt;
    Stonewt Stonewt11Stone;
    int count;

    for(int i = 0; i < 6; i++)
    {
        if(st[i] < minStonewt)
        {
            minStonewt = st[i];
        }
        if(st[i] > maxStonewt)
        {
            maxStonewt = st[i];
        }

        if(st[i] >= Stonewt11Stone)
        {
            count++;
        }
    }
    cout << "minStonewt: " << minStonewt << endl;
    cout << "maxStonewt: " << maxStonewt << endl;
    cout << "The number of Stone >= 11 is " << count <<endl;
    return 0;
}

