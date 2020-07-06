#include <iostream>
#include "stonewt.h"
using namespace std;

Stonewt::Stonewt(double lbs)
{
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt():stone(0),pounds(0),pds_left(0)
{

}

Stonewt::~Stonewt()
{

}

std::ostream& operator<<(std::ostream& os, const Stonewt st)
{
    if(st.mode == "lbs")
    {
        os << st.pounds << " pounds" <<endl;
    }
    else if(st.mode == "stn")
    {
        os << st.stone << " stone, " << st.pds_left << " pounds"<<endl;  
    }
    return os;
}

Stonewt operator+(Stonewt st1, Stonewt st2)
{
    Stonewt st;
    st.pounds = st1.pounds + st2.pounds;
    st.stone = int(st.pounds) / st.Lbs_per_stn;
    st.pds_left = int(st.pounds) % st.Lbs_per_stn + st.pounds - int(st.pounds);
    return st;
}

Stonewt operator-(Stonewt st1, Stonewt st2)
{
    Stonewt st;
    st.pounds = st1.pounds - st2.pounds;
    st.stone = int(st.pounds) / st.Lbs_per_stn;
    st.pds_left = int(st.pounds) % st.Lbs_per_stn + st.pounds - int(st.pounds);
    return st;
}

Stonewt operator*(Stonewt st1, double n)
{
    Stonewt st;
    st.pounds = st1.pounds * n;
    st.stone = int(st.pounds) / st.Lbs_per_stn;
    st.pds_left = int(st.pounds) % st.Lbs_per_stn + st.pounds - int(st.pounds);
    return st;
}

bool Stonewt::operator>(const Stonewt st)const
{
    return pounds > st.pounds;
}

bool Stonewt::operator>=(const Stonewt st)const
{
    return pounds >= st.pounds;
}

bool Stonewt::operator<(const Stonewt st)const
{
    return pounds < st.pounds;
}

bool Stonewt::operator<=(const Stonewt st)const
{
    return pounds <= st.pounds;
}

bool Stonewt::operator==(const Stonewt st)const
{
    return pounds == st.pounds;
}

bool Stonewt::operator!=(const Stonewt st)const
{
    return pounds!=st.pounds;
}
