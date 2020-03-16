#ifndef GOLF_H_
#define GOLF_H_

namespace GF
{
    const int Len = 40;
    class golf
    {
    private:
        char fullname[Len];
        int handicap;
    public:
        golf();
        golf(const char* name, int hc);
        golf(golf& g);
        void setgolf(const char* name, int hc);
        void showgolf(const golf& g)const;
        ~golf();
    };

    
}

#endif