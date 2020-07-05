#include "vect.h"
#include <cmath>
namespace VECTOR
{
    const double Rad_To_deg = 57.2957795130823;

    // void Vector::set_mag()
    // {
    //     mag = std::sqrt(x * x + y*y);
    // }

    // void Vector::set_ang()
    // {
    //     if(x == 0.0 && y == 0.0)
    //     {
    //         ang = 0.0;
    //     }
    //     else
    //     {
    //         ang = atan2(y,x);
    //     }
    // }

    void Vector::set_x()
    {
        x = mag * cos(ang);
    }

    void Vector::set_y()
    {
        y = mag * sin(ang);
    }

    Vector::Vector()
    {
        x = y = mag = ang = 0.0;
        mode = 'r';
    }

    Vector::Vector(double n1, double n2, char form)
    {
        mode = form;
        if(mode == 'r')
        {
            x = n1;
            y = n2;
            // set_mag();
            // set_ang();

        }
        else if(mode == 'p')
        {
            mag = n1;
            ang = n2 / Rad_To_deg;
            set_x();
            set_y();
        }
        
    }

    void Vector::set(double n1, double n2, char form)
    {
        mode = form;
        if(mode == 'r')
        {
            x = n1;
            y = n2;
            // set_mag();
            // set_ang();

        }
        else if(mode == 'p')
        {
            mag = n1;
            ang = n2 /Rad_To_deg;
            set_x();
            set_y();
        }
    }

    double Vector::magval()
    {
         mag = std::sqrt(x * x + y*y);
         return mag;
    }

    double Vector::angval()
    {
        if(x == 0.0 && y == 0.0)
        {  
            ang = 0.0;
        }
        else
        {
            ang = atan2(y,x);
        }
        return ang;
        
    }

    Vector operator+(Vector v1, Vector v2)
    {
        Vector result(v1.x + v2.x , v1.y + v2.y, 'r');
        return result;
    }
}