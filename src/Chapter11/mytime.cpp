#include "mytime.h"

Time::Time():hours(0),minutes(0){}

Time::Time(int h, int m):hours(h),minutes(m){}

void Time::AddMin(int m )
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h)
{
    hours += h;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time operator+(const Time& t1, const Time& t2)
{
    Time sum;
    sum.minutes = t1.minutes + t2.minutes;
    sum.hours = t1.hours + t2.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}


Time operator-(const Time& t1, const Time& t2)
{
    Time diff;
    int tot1, tot2;
    tot1 = t1.hours * 60 + t1.minutes;
    tot2 = t2.hours * 60 + t2.minutes;
    diff.minutes = (tot2 - tot1) % 60;
    diff.hours = (tot2 - tot1) / 60;
    return diff;
}

Time operator*(const Time& t, double mul)
{
    Time result;
    long totalMinutes = t.hours * mul +t.minutes * mul;
    result.hours = totalMinutes / 60;
    result.minutes = totalMinutes % 60;
    return result;
}

std::ostream& operator<<(std::ostream& os, const Time& t)
{
    os << t.hours << " hour. " << t.minutes << " minutes";
    return os;
}