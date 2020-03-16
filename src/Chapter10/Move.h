#ifndef MOVE_H_
#define MOVE_H_

namespace ME
{
    class Move
    {
    private:
        double x;
        double y;
    public:
        Move(double a = 0, double b = 0);
        void ShowMove()const;
        Move add(const Move& m)const;
        void reset(double a = 0, double b =0);
        ~Move();
    };    
}

#endif