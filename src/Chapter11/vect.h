#ifndef VECT_H_
#define VECT_H_
#include <iostream>
namespace VECTOR
{
    class Vector
    {
        private:
            double x;
            double y;
            double mag;
            double ang;
            char mode;

            //void set_mag();
            //void set_ang();
            void set_x();
            void set_y();

        public:
            Vector();
            Vector(double n1, double n2, char form = 'r');
            void set(double n1, double n2, char form);
            double magval();
            double angval();
            double xval(){return x;}
            double yval(){return y;}

            friend Vector operator+(Vector v1, Vector v2);
    };

}

#endif