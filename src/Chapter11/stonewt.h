#ifndef STONEWT_H_
#define STONEWT_H_
#include <string>
#include <iostream>
class Stonewt
{
    private:
        enum{Lbs_per_stn = 14};
        std::string mode = "lbs";
        int stone;
        double pds_left;
        double pounds;

    public:
        Stonewt(double lbs);
        Stonewt(int stn, double lbs);
        Stonewt();
        ~Stonewt();
        inline void setMode(std::string str){mode = str;}
        friend std::ostream& operator <<(std::ostream& os, const Stonewt st);
        friend Stonewt operator+(Stonewt st1, Stonewt st2);
        friend Stonewt operator-(Stonewt st1, Stonewt st2);
        friend Stonewt operator*(Stonewt st1, double n);
        friend Stonewt operator*(double n, Stonewt st1){return st1 * n;}
        
        bool operator> (const Stonewt st)const;
        bool operator>= (const Stonewt st)const;
        bool operator<(const Stonewt st)const;
        bool operator<=(const Stonewt st)const;
        bool operator==(const Stonewt st)const;
        bool operator!=(const Stonewt st)const;

};






#endif